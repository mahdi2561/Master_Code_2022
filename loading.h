#ifndef LOADING_H
#define LOADING_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class Loading;
}

class Loading : public QDialog
{
    Q_OBJECT

public:
    explicit Loading(QWidget *parent = nullptr);
    ~Loading();

private:
    Ui::Loading *ui;
    QTimer* timer;
private slots:
    void close_this();
};

#endif // LOADING_H
