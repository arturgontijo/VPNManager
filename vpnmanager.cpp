#include "vpnmanager.h"
#include "ui_vpnmanager.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QFileSystemModel>
#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#include <QProcess>

#include <QThread>
#include <QtCore>

#include <QObject>

QString servers_folder = "";
QString keys_folder = "";
QString ca_folder = "";

QString servers_file = "";
QString keys_file = "";
QString ca_file = "";

QString username = "";
QString password = "";

QString credentials = "";

qint32 flag_thread = 0;
qint64 pid = -1;

VPNManager::VPNManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VPNManager)
{
    ui->setupUi(this);

    // Set fix size form
    this->setFixedSize(562,507);

    // Create ExecuteThread Instance
    execThread = new ExecuteThread(this);

    // Connect Signal -> Slot
    connect(execThread, SIGNAL(createThread()), this, SLOT(onCreateThread()));

}

VPNManager::~VPNManager()
{
    delete ui;
}

void VPNManager::onCreateThread()
{
    if(flag_thread == 1 && pid > 0)
    {
        ui->textStatus->setText("Connected!");
        ui->textPID->setText(QString::number(pid));
        credentials = servers_folder + "Credentials.txt";
        QFile::remove(credentials);
    }
    else
    {
        ui->textStatus->setText("Not Connected!");
        flag_thread = 0;
        pid = -1;
        ui->textPID->setText("");
    }
}

bool fileExists(QString path)
{
    QFileInfo check_file(path);
    // check if file exists and if yes: Is it really a file and no directory?
    return check_file.exists() && check_file.isFile();
}

void VPNManager::on_btServers_clicked()
{
    servers_folder = QFileDialog::getExistingDirectory(this, tr("Open .ovpn Directory"),
                                                       "/home",
                                                       QFileDialog::ShowDirsOnly
                                                       | QFileDialog::DontResolveSymlinks);
    // SERVERS
    servers_file = "";
    servers_folder = servers_folder + '/';
    ui->textServers->setText(servers_folder);

    // Set ListView Servers Content
    QFileSystemModel *dirModel = new QFileSystemModel(this);
    dirModel->setRootPath(servers_folder);
    QStringList filters;
    filters << "*.ovpn";
    dirModel->setNameFilters(filters);
    dirModel->setNameFilterDisables(false);;
    ui->listServers->setModel(dirModel);
    ui->listServers->setRootIndex(dirModel->setRootPath(servers_folder));

    // KEYS
    keys_file = "";
    keys_folder = servers_folder + '/';

    // Set ListView Keys Content
    ui->textKeys->setText(servers_folder);
    QFileSystemModel *dirModel2 = new QFileSystemModel(this);
    dirModel2->setRootPath(servers_folder);
    dirModel2->setRootPath(servers_folder);
    QStringList filters2;
    filters2 << "*.key";
    dirModel2->setNameFilters(filters2);
    dirModel2->setNameFilterDisables(false);;
    ui->listKeys->setModel(dirModel2);
    ui->listKeys->setRootIndex(dirModel2->setRootPath(servers_folder));

    // CA
    ca_file = "";
    ca_folder = servers_folder + '/';

    // Set ListView CA Content
    ui->textCA->setText(servers_folder);
    QFileSystemModel *dirModel3 = new QFileSystemModel(this);
    dirModel3->setRootPath(servers_folder);
    dirModel3->setRootPath(servers_folder);
    QStringList filters3;
    filters3 << "*.crt";
    dirModel3->setNameFilters(filters3);
    dirModel3->setNameFilterDisables(false);;

    ui->listCA->setModel(dirModel3);
    ui->listCA->setRootIndex(dirModel3->setRootPath(servers_folder));
}

void VPNManager::on_btkeys_clicked()
{
    keys_folder = QFileDialog::getExistingDirectory(this, tr("Open .key Directory"),
                                                 "/home",
                                                 QFileDialog::ShowDirsOnly
                                                 | QFileDialog::DontResolveSymlinks);
    keys_file = "";

    keys_folder = keys_folder + '/';
    // Set QLineEdit Text
    ui->textKeys->setText(keys_folder);

    // Set ListView Content
    QFileSystemModel *dirModel = new QFileSystemModel(this);
    dirModel->setRootPath(keys_folder);
    QStringList filters;
    filters << "*.key";
    dirModel->setNameFilters(filters);
    dirModel->setNameFilterDisables(false);

    ui->listKeys->setModel(dirModel);
    ui->listKeys->setRootIndex(dirModel->setRootPath(keys_folder));
}

void VPNManager::on_btCA_clicked()
{
    ca_folder = QFileDialog::getExistingDirectory(this, tr("Open .crt Directory"),
                                                 "/home",
                                                 QFileDialog::ShowDirsOnly
                                                 | QFileDialog::DontResolveSymlinks);
    ca_file = "";

    ca_folder = ca_folder + '/';
    // Set QLineEdit Text
    ui->textCA->setText(ca_folder);

    // Set ListView Content
    QFileSystemModel *dirModel = new QFileSystemModel(this);
    dirModel->setRootPath(ca_folder);
    QStringList filters;
    filters << "*.crt";
    dirModel->setNameFilters(filters);
    dirModel->setNameFilterDisables(false);

    ui->listCA->setModel(dirModel);
    ui->listCA->setRootIndex(dirModel->setRootPath(ca_folder));
}

void VPNManager::on_listServers_clicked(const QModelIndex &index)
{
    servers_file = index.data(Qt::DisplayRole).toString();
    servers_file = servers_folder + servers_file;
}

void VPNManager::on_listKeys_clicked(const QModelIndex &index)
{
    keys_file = index.data(Qt::DisplayRole).toString();
    keys_file = keys_folder + keys_file;
}

void VPNManager::on_listCA_clicked(const QModelIndex &index)
{
    ca_file = index.data(Qt::DisplayRole).toString();
    ca_file = ca_folder + ca_file;
}

void VPNManager::on_btConnect_clicked()
{
    bool ok = true;
    if(servers_file != "")
    {
        if(!fileExists(servers_file) && servers_file != "")
        {
            QMessageBox::information(this,"File not found!", servers_file);
            ok = false;
        }
        if(!fileExists(keys_file) && keys_file != "")
        {
            QMessageBox::information(this,"File not found!", keys_file);
            ok = false;
        }
        if(!fileExists(ca_file) && ca_file != "")
        {
            QMessageBox::information(this,"File not found!", ca_file);
            ok = false;
        }
    }
    else ok = false;

    if(ok)
    {
        username = ui->textUser->text();
        password = ui->textPass->text();

        credentials = servers_folder + "Credentials.txt";
        QFile file(credentials);
        if (file.open(QIODevice::ReadWrite))
        {
            QTextStream stream(&file);
            stream << username << endl << password;
            file.close();
            if(pid > 0) QMessageBox::information(this,"Error", "OpenVPN already running!");
            else
            {
                ui->textStatus->setText("Wait, connecting...");
                execThread->Stop = false;
                execThread->start();
            }
        }
        else QMessageBox::information(this,"Error", "Failed to create the credentials file: " + credentials);
    }
    else
    {
        QMessageBox::information(this,"Error", "Failed to initialize openVPN!\nSelect a valid .ovpn file.");
    }
}

void VPNManager::on_btDisconnect_clicked()
{
    execThread->Stop = true;
    if(pid > 0)
    {
        QProcess kill_proc;
        QString cmd = "pkexec --user root kill -9 " + QString::number(pid);
        kill_proc.start(cmd);
        kill_proc.waitForReadyRead();
    }
    ui->textPID->setText("");
    flag_thread = 0;
    pid = -1;
    ui->textStatus->setText("Not Connected!");
}

void VPNManager::on_btClose_clicked()
{
    execThread->Stop = true;
    flag_thread = 2;
    on_btDisconnect_clicked();
    this->close();
}



















