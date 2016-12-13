#include "executethread.h"
#include "vpnmanager.h"
#include <QDebug>
#include <QMutex>
#include <QThread>
#include <QProcess>

ExecuteThread::ExecuteThread(QObject *parent, bool b)
    : QThread(parent), Stop(b)
{
}

// Thread start!
void ExecuteThread::run()
{
    QString cmd = "";
    if(keys_file == "" || ca_file == "") cmd = "pkexec --user root openvpn --script-security 2 --config " + servers_file + " --auth-user-pass " + credentials;
    else cmd = "pkexec --user root openvpn --script-security 2 --config " + servers_file + " --key " + keys_file + " --cert" + ca_file + " --auth-user-pass " + credentials;

    QProcess process;
    process.start(cmd);
    process.waitForReadyRead();
    pid = process.processId();
    process.waitForReadyRead();

    this->msleep(3000);
    flag_thread = 1;

    // Emit first signal to update status
    emit createThread();

    while(flag_thread == 1)
    {
        if(this->Stop)
        {
            process.kill();
            flag_thread = 0;
            break;
        }
        this->msleep(500);
    }

}
