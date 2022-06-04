#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<bitset>
#include <QMainWindow>
#include <QCloseEvent>
#include<QFileDialog>
#include<fstream>
#include<QFile>
#include<QMessageBox>
#include<sstream>
#include <ctype.h>
#include "ui_mainwindow.h"
#include <QIcon>
#include <windows.h>
#include <QtGui/QIcon>
#include<map>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Ui::MainWindow *ui;
    QString issaved="";
    bitset<16> ram[4096];
    bitset<16> IR,TR,AC,SC,DR;
    bitset<12> AR,PC;
    bitset<8> INPR,OUTR;
    bitset<1> E,I,S,R,IEN,FGI,FGO;
    map<QString,int> allDatas;
    map<QString,int> firstallDatas;
    QStringList commands;
    int tcommmands;
    int clk;
    int lineStep;
    int memorystep;
    int reseter=1;
    int compiled=0;
    int printing;
    int run;
    map<int,int> memoryToLine;
private slots:
    void on_action_Exit_triggered();
    void on_savebtn_clicked();
    void on_actionSave_as_triggered();
    void on_action_Save_triggered();
    void on_openbtn_clicked();
    void on_action_Open_triggered();
    void on_action_New_triggered();
    void on_newbtn_clicked();
    void on_reset_btn_clicked();
    void on_compile_btn_clicked();
    void on_run_btn_clicked();
    void on_next_btn_clicked();
    void on_actioncompile_program_triggered();
    void on_actionRun_Program_triggered();
    void on_actionAbout_Mano_simulator_triggered();
    void on_actionnext_step_triggered();
    void on_actionreset_code_triggered();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void closeEvent (QCloseEvent *event);
    void setE(const quint16& E);
    void setDR(const quint16& DR);
    void setAC(const quint16& AC);
    void setIR(const quint16& IR);
    void setTR(const quint16& TR);
    void setAR(const quint16& AR);
    void setPC(const quint16& PC);
    void setINPR(const quint8& INPR);
    void setOUTR(const quint8& OUTR);
    void inrAR();
    void inrPC();
    void inrDR();
    void inrAC();
    void inrTR();
    void emptyTable();
    void resetRam();
    void arithmeticUnitADD();
    void arithmeticUnitCIR();
    void arithmeticUnitCIL();
    void printReg();
    void printTable();
    bool isNumber(const QString& str);
    void clrAR();
    void clrPC();
    void clrDR();
    void clrAC();
    void clrTR();
    void logicUnitAND();
    void logicUnitCMA();
    void logicUnitCME();
    quint16 getE();
    quint16 getDR();
    quint16 getAC();
    bool getACleadingBit();
    quint16 getIR();
    quint16 getTR();
    quint16 getAR();
    quint16 getPC();
    quint16 getINPR();
    quint16 getOUTR();
};
#endif // MAINWINDOW_H
