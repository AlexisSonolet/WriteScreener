#include "headers/mainwindow.h"
#include "headers/mainwindow2.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    MainWindow2 ww;
    ww.show();

    return a.exec();
}
