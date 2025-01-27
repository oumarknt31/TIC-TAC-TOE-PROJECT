/********************************************************************************
** Form generated from reading UI file 'maintictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTICTACTOE_H
#define UI_MAINTICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToe
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Welcome;
    QPushButton *displayX;
    QPushButton *displayO;
    QPushButton *Confirm;
    QRadioButton *Xchoice;
    QRadioButton *Ochoice;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *Game;
    QPushButton *Btn1;
    QPushButton *Btn2;
    QPushButton *Btn3;
    QPushButton *Btn4;
    QPushButton *Btn5;
    QPushButton *Btn6;
    QPushButton *Btn7;
    QPushButton *Btn8;
    QPushButton *Btn9;
    QPushButton *Help_Btn;
    QLabel *yourturn;
    QLabel *cm;
    QWidget *GameOver;
    QPushButton *exit;
    QPushButton *restart;
    QWidget *Help_pg;
    QStackedWidget *HelpStackedWid;
    QWidget *step1;
    QWidget *step2;
    QWidget *step3;
    QWidget *step4;
    QWidget *step5;
    QWidget *step6;
    QWidget *step7;
    QWidget *step8;
    QPushButton *Previous;
    QPushButton *next;
    QPushButton *BackToGame;

    void setupUi(QMainWindow *TicTacToe)
    {
        if (TicTacToe->objectName().isEmpty())
            TicTacToe->setObjectName("TicTacToe");
        TicTacToe->resize(600, 1067);
        TicTacToe->setMinimumSize(QSize(550, 710));
        centralwidget = new QWidget(TicTacToe);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(0, 0));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(0, 0, 550, 710));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        Welcome = new QWidget();
        Welcome->setObjectName("Welcome");
        Welcome->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/welcome3.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
""));
        displayX = new QPushButton(Welcome);
        displayX->setObjectName("displayX");
        displayX->setGeometry(QRect(120, 420, 100, 100));
        QFont font;
        font.setPointSize(100);
        font.setBold(true);
        displayX->setFont(font);
        displayX->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink2.png\");\n"
"color: white;\n"
""));
        displayO = new QPushButton(Welcome);
        displayO->setObjectName("displayO");
        displayO->setGeometry(QRect(330, 420, 100, 100));
        displayO->setFont(font);
        displayO->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink2.png\");\n"
"color: rgb(255, 255, 255);\n"
""));
        Confirm = new QPushButton(Welcome);
        Confirm->setObjectName("Confirm");
        Confirm->setGeometry(QRect(199, 561, 151, 41));
        QFont font1;
        font1.setPointSize(15);
        Confirm->setFont(font1);
        Confirm->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/confirm2.png\");\n"
"color: rgb(255, 147, 0);\n"
"border-radius: 10px;"));
        Xchoice = new QRadioButton(Welcome);
        Xchoice->setObjectName("Xchoice");
        Xchoice->setGeometry(QRect(160, 530, 21, 21));
        Xchoice->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Xchoice->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");"));
        Ochoice = new QRadioButton(Welcome);
        Ochoice->setObjectName("Ochoice");
        Ochoice->setGeometry(QRect(370, 530, 20, 21));
        Ochoice->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");"));
        label_2 = new QLabel(Welcome);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 170, 361, 241));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Georgia")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("border-image: transparent;\n"
"color: #6463e2"));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(Welcome);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 440, 91, 71));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("border-image: transparent;\n"
"color:#dd4f88"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setWordWrap(true);
        stackedWidget->addWidget(Welcome);
        Game = new QWidget();
        Game->setObjectName("Game");
        QFont font4;
        font4.setBold(false);
        Game->setFont(font4);
        Game->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/landing.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
""));
        Btn1 = new QPushButton(Game);
        Btn1->setObjectName("Btn1");
        Btn1->setGeometry(QRect(70, 170, 100, 100));
        Btn1->setFont(font);
        Btn1->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn2 = new QPushButton(Game);
        Btn2->setObjectName("Btn2");
        Btn2->setGeometry(QRect(230, 170, 100, 100));
        Btn2->setFont(font);
        Btn2->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn3 = new QPushButton(Game);
        Btn3->setObjectName("Btn3");
        Btn3->setGeometry(QRect(390, 170, 100, 100));
        Btn3->setFont(font);
        Btn3->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn4 = new QPushButton(Game);
        Btn4->setObjectName("Btn4");
        Btn4->setGeometry(QRect(70, 320, 100, 100));
        QFont font5;
        font5.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font5.setPointSize(100);
        font5.setBold(true);
        Btn4->setFont(font5);
        Btn4->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn5 = new QPushButton(Game);
        Btn5->setObjectName("Btn5");
        Btn5->setGeometry(QRect(230, 320, 100, 100));
        Btn5->setFont(font);
        Btn5->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn6 = new QPushButton(Game);
        Btn6->setObjectName("Btn6");
        Btn6->setGeometry(QRect(390, 320, 100, 100));
        Btn6->setFont(font);
        Btn6->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn7 = new QPushButton(Game);
        Btn7->setObjectName("Btn7");
        Btn7->setGeometry(QRect(70, 490, 100, 100));
        Btn7->setFont(font);
        Btn7->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn8 = new QPushButton(Game);
        Btn8->setObjectName("Btn8");
        Btn8->setGeometry(QRect(230, 490, 100, 100));
        Btn8->setFont(font);
        Btn8->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Btn9 = new QPushButton(Game);
        Btn9->setObjectName("Btn9");
        Btn9->setGeometry(QRect(390, 490, 100, 100));
        Btn9->setFont(font);
        Btn9->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/pink.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        Help_Btn = new QPushButton(Game);
        Help_Btn->setObjectName("Help_Btn");
        Help_Btn->setGeometry(QRect(230, 630, 100, 32));
        Help_Btn->setFont(font1);
        Help_Btn->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/help2.png\");\n"
"color: white;\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        yourturn = new QLabel(Game);
        yourturn->setObjectName("yourturn");
        yourturn->setGeometry(QRect(150, 280, 271, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Chalkduster")});
        font6.setPointSize(20);
        font6.setBold(true);
        yourturn->setFont(font6);
        yourturn->setStyleSheet(QString::fromUtf8("color:#00c49c;\n"
"border-radius: 10px;\n"
"border-image: transparent;"));
        yourturn->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cm = new QLabel(Game);
        cm->setObjectName("cm");
        cm->setGeometry(QRect(190, 280, 181, 31));
        cm->setStyleSheet(QString::fromUtf8("border-image:transparent;\n"
"color: #00c49c"));
        stackedWidget->addWidget(Game);
        GameOver = new QWidget();
        GameOver->setObjectName("GameOver");
        GameOver->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/draw.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
""));
        exit = new QPushButton(GameOver);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(90, 610, 100, 32));
        exit->setFont(font1);
        exit->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/exit2.png\");\n"
"color: white;\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        restart = new QPushButton(GameOver);
        restart->setObjectName("restart");
        restart->setGeometry(QRect(380, 610, 100, 32));
        restart->setFont(font1);
        restart->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/restart.png\");\n"
"color: white;\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border-radius: 10px;"));
        stackedWidget->addWidget(GameOver);
        Help_pg = new QWidget();
        Help_pg->setObjectName("Help_pg");
        Help_pg->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/lightpurple.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
""));
        HelpStackedWid = new QStackedWidget(Help_pg);
        HelpStackedWid->setObjectName("HelpStackedWid");
        HelpStackedWid->setGeometry(QRect(30, 50, 491, 581));
        HelpStackedWid->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/purple.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"\n"
"\n"
""));
        step1 = new QWidget();
        step1->setObjectName("step1");
        step1->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step0.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
""));
        HelpStackedWid->addWidget(step1);
        step2 = new QWidget();
        step2->setObjectName("step2");
        step2->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step1.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
""));
        HelpStackedWid->addWidget(step2);
        step3 = new QWidget();
        step3->setObjectName("step3");
        step3->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step2.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        HelpStackedWid->addWidget(step3);
        step4 = new QWidget();
        step4->setObjectName("step4");
        step4->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step3.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        HelpStackedWid->addWidget(step4);
        step5 = new QWidget();
        step5->setObjectName("step5");
        step5->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step4.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        HelpStackedWid->addWidget(step5);
        step6 = new QWidget();
        step6->setObjectName("step6");
        step6->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step5.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        HelpStackedWid->addWidget(step6);
        step7 = new QWidget();
        step7->setObjectName("step7");
        step7->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step6.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        HelpStackedWid->addWidget(step7);
        step8 = new QWidget();
        step8->setObjectName("step8");
        step8->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/step7.png\");\n"
"background-position: center;\n"
"background-repeat: no-repeat;"));
        HelpStackedWid->addWidget(step8);
        Previous = new QPushButton(Help_pg);
        Previous->setObjectName("Previous");
        Previous->setGeometry(QRect(40, 10, 100, 32));
        Previous->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/previous2.png\");\n"
"color: yellow;\n"
"border-radius: 10px;"));
        next = new QPushButton(Help_pg);
        next->setObjectName("next");
        next->setGeometry(QRect(410, 10, 100, 32));
        next->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/next2.png\");\n"
"color: yellow;\n"
"border-radius: 10px;"));
        BackToGame = new QPushButton(Help_pg);
        BackToGame->setObjectName("BackToGame");
        BackToGame->setGeometry(QRect(230, 650, 100, 32));
        BackToGame->setStyleSheet(QString::fromUtf8("border-image:url(\":Img/back2.png\");\n"
"color: yellow;\n"
"border-radius: 10px;"));
        stackedWidget->addWidget(Help_pg);
        TicTacToe->setCentralWidget(centralwidget);

        retranslateUi(TicTacToe);

        stackedWidget->setCurrentIndex(3);
        HelpStackedWid->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe)
    {
        TicTacToe->setWindowTitle(QCoreApplication::translate("TicTacToe", "MainTicTacToe", nullptr));
        displayX->setText(QCoreApplication::translate("TicTacToe", "X", nullptr));
        displayO->setText(QCoreApplication::translate("TicTacToe", "O", nullptr));
        Confirm->setText(QString());
        Xchoice->setText(QString());
        Ochoice->setText(QString());
        label_2->setText(QCoreApplication::translate("TicTacToe", "Tic Tac Toe is a classic two-player or Player Vs AI game played on a 3x3 grid. Players/AI take turns placing their symbol\342\200\224X or O\342\200\224in an empty square. The goal is to be the first to align three of their symbols in a row, column, or diagonal. If all squares are filled without a winner, the game ends in a draw.", nullptr));
        label_3->setText(QCoreApplication::translate("TicTacToe", "CHOOSE YOUR SYMBOL!", nullptr));
        Btn1->setText(QString());
        Btn2->setText(QString());
        Btn3->setText(QString());
        Btn4->setText(QString());
        Btn5->setText(QString());
        Btn6->setText(QString());
        Btn7->setText(QString());
        Btn8->setText(QString());
        Btn9->setText(QString());
        Help_Btn->setText(QString());
        yourturn->setText(QString());
        cm->setText(QString());
        exit->setText(QString());
        restart->setText(QString());
        Previous->setText(QString());
        next->setText(QString());
        BackToGame->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TicTacToe: public Ui_TicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTICTACTOE_H
