#ifndef EXECUTETHREAD_H
#define EXECUTETHREAD_H

#include <QThread>
#include <QString>

class ExecuteThread : public QThread
{
    Q_OBJECT
public:
    explicit ExecuteThread(QObject *parent = 0, bool b = false);
        void run();

        // Stop flag
        bool Stop;

signals:
    void createThread();

public slots:

};

#endif // EXECUTETHREAD_H
