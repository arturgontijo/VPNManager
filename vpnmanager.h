#ifndef VPNMANAGER_H
#define VPNMANAGER_H

#include <QMainWindow>
#include "executethread.h"

extern QString servers_folder;
extern QString keys_folder;
extern QString ca_folder;

extern QString servers_file;
extern QString keys_file;
extern QString ca_file;

extern QString log_output;

extern QString username ;
extern QString password ;

extern QString credentials;

extern qint32 flag_thread;
extern qint64 pid;

namespace Ui {
class VPNManager;
}

class VPNManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit VPNManager(QWidget *parent = 0);
    ~VPNManager();
    ExecuteThread *execThread;

private slots:

    void on_btServers_clicked();

    void on_btkeys_clicked();

    void on_listServers_clicked(const QModelIndex &index);

    void on_listKeys_clicked(const QModelIndex &index);

    void on_btConnect_clicked();

    void on_btCA_clicked();

    void on_listCA_clicked(const QModelIndex &index);

    void on_btDisconnect_clicked();

    void on_btClose_clicked();

    void on_btClear_clicked();

public slots:

    void onCreateThread();

private:
    Ui::VPNManager *ui;
};

#endif // VPNMANAGER_H
