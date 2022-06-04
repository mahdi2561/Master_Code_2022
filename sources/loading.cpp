#include "loading.h"
#include "ui_loading.h"
#include <QTimer>

Loading::Loading(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loading)
{
    ui->setupUi(this);

    this->setFixedSize(597,312);
    setWindowTitle("Master Code 2022");
    setWindowIcon(QIcon(":/new/prefix1/logo.png"));
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    timer = new QTimer (this);
    connect(timer,SIGNAL(timeout()),this,SLOT(close_this()));
    timer->start(3000);
}

Loading::~Loading()
{
    delete ui;


}
void Loading::close_this(){
    MainWindow* m = new MainWindow;
    m->show();

    timer->stop();
    this->close();
}
