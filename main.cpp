#include "headers/openproject.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenProject w;
    w.show();
    return a.exec();
}
