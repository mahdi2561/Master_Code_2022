#include "loading.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("./new/prefix1/loading.png"));
    Loading w;
    w.show();
    return a.exec();
}
