#include "mainwindow.h"
#include "loading.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    Loading w;
    w.show();
    return a.exec();
}
