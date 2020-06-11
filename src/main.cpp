#include "headers/mainwindow.h"
#include "headers/mainwindow2.h"
#include "headers/mtabbar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // MainWindow w;
    // w.show();

    MainWindow2 ww;
    ww.show();

    /*
    MTabWidget w;
    w.addTab(new QWidget, "tab1");
    w.addTab(new QWidget, "tab2");
    w.addTab(new QWidget, "tab3");
    w.show();
    */

    return a.exec();
}
