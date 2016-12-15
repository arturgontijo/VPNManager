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
    flag_thread = 1;
    pid = process.processId();
    process.waitForReadyRead();
    log_output += process.readLine();

    this->msleep(1000);
    // Emit first signal to update status
    emit createThread();

    while(flag_thread == 1)
    {
        while(process.waitForReadyRead())
        {
            if(this->Stop) break;
            log_output += process.readLine();
            emit createThread();
            while(log_output != "")
            {
                if(this->Stop) break;
                this->msleep(250);
            }
        }

        if(this->Stop)
        {
            process.kill();
            flag_thread = 0;
            break;
        }
        this->msleep(500);
    }

}
