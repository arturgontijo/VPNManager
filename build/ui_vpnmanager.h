/********************************************************************************
** Form generated from reading UI file 'vpnmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VPNMANAGER_H
#define UI_VPNMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VPNManager
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btServers;
    QLineEdit *textServers;
    QListView *listServers;
    QListView *listKeys;
    QLineEdit *textCA;
    QLineEdit *textKeys;
    QListView *listCA;
    QPushButton *btCA;
    QPushButton *btkeys;
    QLineEdit *textPass;
    QPushButton *btConnect;
    QLineEdit *textPID;
    QLabel *labelStatus;
    QPushButton *btClose;
    QPushButton *btDisconnect;
    QLineEdit *textUser;
    QLineEdit *textStatus;
    QLabel *labelPID;
    QWidget *tab_2;
    QTextBrowser *textLOG;
    QPushButton *btClear;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *VPNManager)
    {
        if (VPNManager->objectName().isEmpty())
            VPNManager->setObjectName(QStringLiteral("VPNManager"));
        VPNManager->resize(574, 588);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VPNManager->sizePolicy().hasHeightForWidth());
        VPNManager->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(VPNManager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 551, 541));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        btServers = new QPushButton(tab);
        btServers->setObjectName(QStringLiteral("btServers"));
        btServers->setGeometry(QRect(430, 10, 99, 27));
        textServers = new QLineEdit(tab);
        textServers->setObjectName(QStringLiteral("textServers"));
        textServers->setGeometry(QRect(12, 10, 411, 27));
        textServers->setReadOnly(true);
        listServers = new QListView(tab);
        listServers->setObjectName(QStringLiteral("listServers"));
        listServers->setGeometry(QRect(10, 40, 521, 181));
        listKeys = new QListView(tab);
        listKeys->setObjectName(QStringLiteral("listKeys"));
        listKeys->setGeometry(QRect(10, 290, 261, 91));
        textCA = new QLineEdit(tab);
        textCA->setObjectName(QStringLiteral("textCA"));
        textCA->setGeometry(QRect(10, 260, 411, 27));
        textCA->setReadOnly(true);
        textKeys = new QLineEdit(tab);
        textKeys->setObjectName(QStringLiteral("textKeys"));
        textKeys->setGeometry(QRect(10, 230, 411, 27));
        textKeys->setReadOnly(true);
        listCA = new QListView(tab);
        listCA->setObjectName(QStringLiteral("listCA"));
        listCA->setGeometry(QRect(280, 290, 251, 91));
        btCA = new QPushButton(tab);
        btCA->setObjectName(QStringLiteral("btCA"));
        btCA->setGeometry(QRect(430, 260, 99, 27));
        btkeys = new QPushButton(tab);
        btkeys->setObjectName(QStringLiteral("btkeys"));
        btkeys->setGeometry(QRect(430, 230, 99, 27));
        textPass = new QLineEdit(tab);
        textPass->setObjectName(QStringLiteral("textPass"));
        textPass->setGeometry(QRect(10, 430, 261, 27));
        textPass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        textPass->setEchoMode(QLineEdit::Password);
        textPass->setAlignment(Qt::AlignCenter);
        textPass->setReadOnly(false);
        btConnect = new QPushButton(tab);
        btConnect->setObjectName(QStringLiteral("btConnect"));
        btConnect->setGeometry(QRect(10, 460, 99, 27));
        textPID = new QLineEdit(tab);
        textPID->setObjectName(QStringLiteral("textPID"));
        textPID->setGeometry(QRect(340, 400, 191, 27));
        textPID->setAlignment(Qt::AlignCenter);
        textPID->setReadOnly(true);
        labelStatus = new QLabel(tab);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        labelStatus->setGeometry(QRect(280, 430, 51, 21));
        btClose = new QPushButton(tab);
        btClose->setObjectName(QStringLiteral("btClose"));
        btClose->setGeometry(QRect(430, 460, 99, 27));
        btDisconnect = new QPushButton(tab);
        btDisconnect->setObjectName(QStringLiteral("btDisconnect"));
        btDisconnect->setGeometry(QRect(170, 460, 99, 27));
        textUser = new QLineEdit(tab);
        textUser->setObjectName(QStringLiteral("textUser"));
        textUser->setGeometry(QRect(10, 400, 261, 27));
        textUser->setAlignment(Qt::AlignCenter);
        textUser->setReadOnly(false);
        textStatus = new QLineEdit(tab);
        textStatus->setObjectName(QStringLiteral("textStatus"));
        textStatus->setGeometry(QRect(340, 430, 191, 27));
        textStatus->setAlignment(Qt::AlignCenter);
        textStatus->setReadOnly(true);
        labelPID = new QLabel(tab);
        labelPID->setObjectName(QStringLiteral("labelPID"));
        labelPID->setGeometry(QRect(290, 400, 31, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textLOG = new QTextBrowser(tab_2);
        textLOG->setObjectName(QStringLiteral("textLOG"));
        textLOG->setGeometry(QRect(10, 11, 521, 441));
        btClear = new QPushButton(tab_2);
        btClear->setObjectName(QStringLiteral("btClear"));
        btClear->setGeometry(QRect(430, 460, 99, 27));
        tabWidget->addTab(tab_2, QString());
        VPNManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VPNManager);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 574, 25));
        VPNManager->setMenuBar(menuBar);
        QWidget::setTabOrder(tabWidget, btServers);
        QWidget::setTabOrder(btServers, textServers);
        QWidget::setTabOrder(textServers, listServers);
        QWidget::setTabOrder(listServers, btkeys);
        QWidget::setTabOrder(btkeys, textKeys);
        QWidget::setTabOrder(textKeys, btCA);
        QWidget::setTabOrder(btCA, textCA);
        QWidget::setTabOrder(textCA, listKeys);
        QWidget::setTabOrder(listKeys, listCA);
        QWidget::setTabOrder(listCA, textUser);
        QWidget::setTabOrder(textUser, textPass);
        QWidget::setTabOrder(textPass, btConnect);
        QWidget::setTabOrder(btConnect, btDisconnect);
        QWidget::setTabOrder(btDisconnect, textPID);
        QWidget::setTabOrder(textPID, textStatus);
        QWidget::setTabOrder(textStatus, btClose);
        QWidget::setTabOrder(btClose, textLOG);
        QWidget::setTabOrder(textLOG, btClear);

        retranslateUi(VPNManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VPNManager);
    } // setupUi

    void retranslateUi(QMainWindow *VPNManager)
    {
        VPNManager->setWindowTitle(QApplication::translate("VPNManager", "VPNManager", 0));
        btServers->setText(QApplication::translate("VPNManager", "Servers", 0));
#ifndef QT_NO_TOOLTIP
        textServers->setToolTip(QApplication::translate("VPNManager", "Folder where .ovpn files are", 0));
#endif // QT_NO_TOOLTIP
        textServers->setPlaceholderText(QApplication::translate("VPNManager", "OVPN Folder", 0));
#ifndef QT_NO_TOOLTIP
        listServers->setToolTip(QApplication::translate("VPNManager", ".ovpn files", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        listKeys->setToolTip(QApplication::translate("VPNManager", ".keys files", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        textCA->setToolTip(QApplication::translate("VPNManager", "Folder where .crt files are", 0));
#endif // QT_NO_TOOLTIP
        textCA->setPlaceholderText(QApplication::translate("VPNManager", "CA Folder", 0));
#ifndef QT_NO_TOOLTIP
        textKeys->setToolTip(QApplication::translate("VPNManager", "Folder where .key files are", 0));
#endif // QT_NO_TOOLTIP
        textKeys->setPlaceholderText(QApplication::translate("VPNManager", "Key Folder", 0));
#ifndef QT_NO_TOOLTIP
        listCA->setToolTip(QApplication::translate("VPNManager", ".crt files", 0));
#endif // QT_NO_TOOLTIP
        btCA->setText(QApplication::translate("VPNManager", "CA", 0));
        btkeys->setText(QApplication::translate("VPNManager", "Keys", 0));
#ifndef QT_NO_TOOLTIP
        textPass->setToolTip(QApplication::translate("VPNManager", "password", 0));
#endif // QT_NO_TOOLTIP
        textPass->setPlaceholderText(QApplication::translate("VPNManager", "password", 0));
        btConnect->setText(QApplication::translate("VPNManager", "Connect", 0));
#ifndef QT_NO_TOOLTIP
        textPID->setToolTip(QApplication::translate("VPNManager", "Folder where .crt files are", 0));
#endif // QT_NO_TOOLTIP
        textPID->setPlaceholderText(QString());
        labelStatus->setText(QApplication::translate("VPNManager", "Status:", 0));
        btClose->setText(QApplication::translate("VPNManager", "Close", 0));
        btDisconnect->setText(QApplication::translate("VPNManager", "Disconnect", 0));
#ifndef QT_NO_TOOLTIP
        textUser->setToolTip(QApplication::translate("VPNManager", "username", 0));
#endif // QT_NO_TOOLTIP
        textUser->setPlaceholderText(QApplication::translate("VPNManager", "username", 0));
#ifndef QT_NO_TOOLTIP
        textStatus->setToolTip(QApplication::translate("VPNManager", "Folder where .crt files are", 0));
#endif // QT_NO_TOOLTIP
        textStatus->setPlaceholderText(QApplication::translate("VPNManager", "Not Connected!", 0));
        labelPID->setText(QApplication::translate("VPNManager", "PID:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("VPNManager", "Menu", 0));
        btClear->setText(QApplication::translate("VPNManager", "Clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("VPNManager", "LOG", 0));
    } // retranslateUi

};

namespace Ui {
    class VPNManager: public Ui_VPNManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPNMANAGER_H
