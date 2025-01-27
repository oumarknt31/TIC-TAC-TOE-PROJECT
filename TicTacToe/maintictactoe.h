#ifndef MAINTICTACTOE_H
#define MAINTICTACTOE_H

#include <QMainWindow>
#include <QString>
#include <QPushButton>
#include <QVector>
#include <QRandomGenerator>
#include <QTimer>
#include <QThread>
#include <QProcess>
#include <QCoreApplication>
#include "caseData.h"
//#include <QObject>


QT_BEGIN_NAMESPACE
namespace Ui {
class TicTacToe;
}
QT_END_NAMESPACE

class MainTicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    MainTicTacToe(QWidget *parent = nullptr);
    ~MainTicTacToe();

private slots:
    void on_Btn1_clicked();

    void on_Help_Btn_clicked();

    void on_Confirm_clicked();

    void on_BackToGame_clicked();

    void on_Xchoice_clicked();

    void on_Ochoice_clicked();

    void on_Clicked_Button();

    void on_next_clicked();

    void on_Previous_clicked();

    void on_exit_clicked();

    void on_restart_clicked();

private:
    Ui::TicTacToe *ui;
    //QString yourSign;
    QVector<QPushButton*> cases;
    QVector<QPushButton*> AIplay;



    caseData isCheckmate();
    void delayExecution(int);
};
#endif // MAINTICTACTOE_H
