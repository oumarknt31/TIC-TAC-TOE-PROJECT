#include "maintictactoe.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainTicTacToe w;
    w.setFixedSize(550, 700);
    w.show();
    return a.exec();
}
