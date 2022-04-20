#include "mainwindow.h"
#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDialog dlg;
    dlg.show();
    QObject::connect(&dlg,SIGNAL(showmainwindow()),&w,SLOT(receivelogin()));

    return a.exec();
}
