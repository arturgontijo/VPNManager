#include "vpnmanager.h"
#include <QApplication>
#include <QStyle>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VPNManager w;
    w.show();

    // Center Dialog on Desktop
    QRect desktopRect = QApplication::desktop()->availableGeometry();
    QPoint center = desktopRect.center();
    w.move(center.x()-w.width()*0.5, center.y()-w.height()*0.5);

    return a.exec();
}
