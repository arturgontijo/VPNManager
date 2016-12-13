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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VPNManager
{
public:
    QWidget *centralWidget;
    QPushButton *btServers;
    QPushButton *btkeys;
    QListView *listServers;
    QListView *listKeys;
    QLineEdit *textServers;
    QLineEdit *textKeys;
    QPushButton *btConnect;
    QLineEdit *textUser;
    QLineEdit *textPass;
    QListView *listCA;
    QLineEdit *textCA;
    QPushButton *btCA;
    QLineEdit *textStatus;
    QLabel *labelStatus;
    QPushButton *btDisconnect;
    QLineEdit *textPID;
    QLabel *labelPID;
    QPushButton *btClose;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *VPNManager)
    {
        if (VPNManager->objectName().isEmpty())
            VPNManager->setObjectName(QStringLiteral("VPNManager"));
        VPNManager->resize(562, 507);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VPNManager->sizePolicy().hasHeightForWidth());
        VPNManager->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(VPNManager);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btServers = new QPushButton(centralWidget);
        btServers->setObjectName(QStringLiteral("btServers"));
        btServers->setGeometry(QRect(440, 10, 99, 27));
        btkeys = new QPushButton(centralWidget);
        btkeys->setObjectName(QStringLiteral("btkeys"));
        btkeys->setGeometry(QRect(440, 230, 99, 27));
        listServers = new QListView(centralWidget);
        listServers->setObjectName(QStringLiteral("listServers"));
        listServers->setGeometry(QRect(20, 40, 521, 181));
        listKeys = new QListView(centralWidget);
        listKeys->setObjectName(QStringLiteral("listKeys"));
        listKeys->setGeometry(QRect(20, 290, 261, 91));
        textServers = new QLineEdit(centralWidget);
        textServers->setObjectName(QStringLiteral("textServers"));
        textServers->setGeometry(QRect(22, 10, 411, 27));
        textServers->setReadOnly(true);
        textKeys = new QLineEdit(centralWidget);
        textKeys->setObjectName(QStringLiteral("textKeys"));
        textKeys->setGeometry(QRect(20, 230, 411, 27));
        textKeys->setReadOnly(true);
        btConnect = new QPushButton(centralWidget);
        btConnect->setObjectName(QStringLiteral("btConnect"));
        btConnect->setGeometry(QRect(20, 450, 99, 27));
        textUser = new QLineEdit(centralWidget);
        textUser->setObjectName(QStringLiteral("textUser"));
        textUser->setGeometry(QRect(20, 390, 261, 27));
        textUser->setAlignment(Qt::AlignCenter);
        textUser->setReadOnly(false);
        textPass = new QLineEdit(centralWidget);
        textPass->setObjectName(QStringLiteral("textPass"));
        textPass->setGeometry(QRect(20, 420, 261, 27));
        textPass->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        textPass->setEchoMode(QLineEdit::Password);
        textPass->setAlignment(Qt::AlignCenter);
        textPass->setReadOnly(false);
        listCA = new QListView(centralWidget);
        listCA->setObjectName(QStringLiteral("listCA"));
        listCA->setGeometry(QRect(290, 290, 251, 91));
        textCA = new QLineEdit(centralWidget);
        textCA->setObjectName(QStringLiteral("textCA"));
        textCA->setGeometry(QRect(20, 260, 411, 27));
        textCA->setReadOnly(true);
        btCA = new QPushButton(centralWidget);
        btCA->setObjectName(QStringLiteral("btCA"));
        btCA->setGeometry(QRect(440, 260, 99, 27));
        textStatus = new QLineEdit(centralWidget);
        textStatus->setObjectName(QStringLiteral("textStatus"));
        textStatus->setGeometry(QRect(350, 420, 191, 27));
        textStatus->setAlignment(Qt::AlignCenter);
        textStatus->setReadOnly(true);
        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        labelStatus->setGeometry(QRect(290, 420, 51, 21));
        btDisconnect = new QPushButton(centralWidget);
        btDisconnect->setObjectName(QStringLiteral("btDisconnect"));
        btDisconnect->setGeometry(QRect(180, 450, 99, 27));
        textPID = new QLineEdit(centralWidget);
        textPID->setObjectName(QStringLiteral("textPID"));
        textPID->setGeometry(QRect(350, 390, 191, 27));
        textPID->setAlignment(Qt::AlignCenter);
        textPID->setReadOnly(true);
        labelPID = new QLabel(centralWidget);
        labelPID->setObjectName(QStringLiteral("labelPID"));
        labelPID->setGeometry(QRect(300, 390, 31, 21));
        btClose = new QPushButton(centralWidget);
        btClose->setObjectName(QStringLiteral("btClose"));
        btClose->setGeometry(QRect(440, 450, 99, 27));
        VPNManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VPNManager);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 562, 25));
        VPNManager->setMenuBar(menuBar);

        retranslateUi(VPNManager);

        QMetaObject::connectSlotsByName(VPNManager);
    } // setupUi

    void retranslateUi(QMainWindow *VPNManager)
    {
        VPNManager->setWindowTitle(QApplication::translate("VPNManager", "VPNManager", 0));
        btServers->setText(QApplication::translate("VPNManager", "Servers", 0));
        btkeys->setText(QApplication::translate("VPNManager", "Keys", 0));
#ifndef QT_NO_TOOLTIP
        listServers->setToolTip(QApplication::translate("VPNManager", ".ovpn files", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        listKeys->setToolTip(QApplication::translate("VPNManager", ".keys files", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        textServers->setToolTip(QApplication::translate("VPNManager", "Folder where .ovpn files are", 0));
#endif // QT_NO_TOOLTIP
        textServers->setPlaceholderText(QApplication::translate("VPNManager", "OVPN Folder", 0));
#ifndef QT_NO_TOOLTIP
        textKeys->setToolTip(QApplication::translate("VPNManager", "Folder where .key files are", 0));
#endif // QT_NO_TOOLTIP
        textKeys->setPlaceholderText(QApplication::translate("VPNManager", "Key Folder", 0));
        btConnect->setText(QApplication::translate("VPNManager", "Connect", 0));
#ifndef QT_NO_TOOLTIP
        textUser->setToolTip(QApplication::translate("VPNManager", "username", 0));
#endif // QT_NO_TOOLTIP
        textUser->setPlaceholderText(QApplication::translate("VPNManager", "username", 0));
#ifndef QT_NO_TOOLTIP
        textPass->setToolTip(QApplication::translate("VPNManager", "password", 0));
#endif // QT_NO_TOOLTIP
        textPass->setPlaceholderText(QApplication::translate("VPNManager", "password", 0));
#ifndef QT_NO_TOOLTIP
        listCA->setToolTip(QApplication::translate("VPNManager", ".crt files", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        textCA->setToolTip(QApplication::translate("VPNManager", "Folder where .crt files are", 0));
#endif // QT_NO_TOOLTIP
        textCA->setPlaceholderText(QApplication::translate("VPNManager", "CA Folder", 0));
        btCA->setText(QApplication::translate("VPNManager", "CA", 0));
#ifndef QT_NO_TOOLTIP
        textStatus->setToolTip(QApplication::translate("VPNManager", "Folder where .crt files are", 0));
#endif // QT_NO_TOOLTIP
        textStatus->setPlaceholderText(QApplication::translate("VPNManager", "Not Connected!", 0));
        labelStatus->setText(QApplication::translate("VPNManager", "Status:", 0));
        btDisconnect->setText(QApplication::translate("VPNManager", "Disconnect", 0));
#ifndef QT_NO_TOOLTIP
        textPID->setToolTip(QApplication::translate("VPNManager", "Folder where .crt files are", 0));
#endif // QT_NO_TOOLTIP
        textPID->setPlaceholderText(QString());
        labelPID->setText(QApplication::translate("VPNManager", "PID:", 0));
        btClose->setText(QApplication::translate("VPNManager", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class VPNManager: public Ui_VPNManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPNMANAGER_H
