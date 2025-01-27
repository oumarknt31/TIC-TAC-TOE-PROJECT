#include "maintictactoe.h"
#include "ui_maintictactoe.h"

MainTicTacToe::MainTicTacToe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToe)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    cases = {
        findChild<QPushButton*>("Btn1"),
        findChild<QPushButton*>("Btn2"),
        findChild<QPushButton*>("Btn3"),
        findChild<QPushButton*>("Btn4"),
        findChild<QPushButton*>("Btn5"),
        findChild<QPushButton*>("Btn6"),
        findChild<QPushButton*>("Btn7"),
        findChild<QPushButton*>("Btn8"),
        findChild<QPushButton*>("Btn9")
    };

    AIplay = cases;

    for (auto button : cases) {
        if (button) { // Ensure the button is valid
            connect(button, &QPushButton::clicked, this, &MainTicTacToe::on_Clicked_Button);
        }
    }
}

MainTicTacToe::~MainTicTacToe()
{
    delete ui;
}

QString yourSign, AIsign;
bool itsYourTurn = true;

void MainTicTacToe::on_Btn1_clicked()
{
    //yourSign="X";
    ui->Btn1->setText(yourSign);
}


void MainTicTacToe::on_Confirm_clicked()
{
    if (yourSign != "")
    ui->stackedWidget->setCurrentIndex(1); /****/
}


void MainTicTacToe::on_Help_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->HelpStackedWid->setCurrentIndex(0);    /****/
}


void MainTicTacToe::on_BackToGame_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); /****/
}


void MainTicTacToe::on_Xchoice_clicked()
{
    yourSign = "X";
    AIsign = "O";
}


void MainTicTacToe::on_Ochoice_clicked()
{
    yourSign = "O";
    AIsign = "X";
}

void MainTicTacToe::on_Clicked_Button()
{

    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton && clickedButton->isEnabled() && itsYourTurn) {
        clickedButton->setText(yourSign);

        clickedButton->setStyleSheet("color: blue; border-image:url(:Img/pink.png); border-radius: 10px; border: 1px solid gray;");   // To prevent the text to change color/opcaity when disable
        clickedButton->setEnabled(false);

        if (isCheckmate().getWin()){
            //ui->won->setText(isCheckmate().getWhoWon() + "won");
            ui->cm->setStyleSheet("color: white; border-image:url(:Img/checkmate2.png); background:lightgreen; border-radius: 10px");
            delayExecution(3200);

            ui->stackedWidget->setCurrentIndex(2);
            if (isCheckmate().getWhoWon() == yourSign)
                ui->stackedWidget->widget(2)->setStyleSheet("border-image:url(:Img/won.png); background-position: center; background-repeat: no-repeat;");
            //ui->winner->setStyleSheet("color: white; border-image:url(/Users/oumarkante31/Downloads/green.png); background:lightgreen; border-radius: 10px");

            else if (isCheckmate().getWhoWon() == AIsign)
                //ui->winner->setStyleSheet("color: white; border-image:url(/Users/oumarkante31/Downloads/lost.png); background:lightgreen; border-radius: 10px");
                ui->stackedWidget->widget(2)->setStyleSheet("border-image:url(:Img/lost.png); background-position: center; background-repeat: no-repeat;");

        }

        else
        {
            AIplay.removeOne(clickedButton);

            if (AIplay.isEmpty())
            {
                ui->stackedWidget->widget(2)->setStyleSheet("border-image:url(:Img/draw.png); background-position: center; background-repeat: no-repeat;");
                ui->stackedWidget->setCurrentIndex(2);
            }


            else
            {
                int randomIndex = QRandomGenerator::global()->bounded(AIplay.size());
                itsYourTurn = false;
                delayExecution(2000);
                //QThread::sleep(2);
                AIplay[randomIndex]->setText(AIsign);

                AIplay[randomIndex]->setStyleSheet("color: red; border-image:url(:Img/pink.png); border-radius: 10px; border: 1px solid gray;");  // To prevent the text from changing color/opcaity when disable
                AIplay[randomIndex]->setEnabled(false);

                if (isCheckmate().getWin()){
                    //ui->won->setText(isCheckmate().getWhoWon() + "won");
                    ui->cm->setStyleSheet("color: white; border-image:url(:Img/checkmate2.png); background:lightgreen; border-radius: 10px");
                    delayExecution(3200);

                    ui->stackedWidget->setCurrentIndex(2);
                    if (isCheckmate().getWhoWon() == yourSign)
                        ui->stackedWidget->widget(2)->setStyleSheet("border-image:url(:Img/won.png); background-position: center; background-repeat: no-repeat;");
                        //ui->winner->setStyleSheet("color: white; border-image:url(/Users/oumarkante31/Downloads/green.png); background:lightgreen; border-radius: 10px");

                    else if (isCheckmate().getWhoWon() == AIsign)
                        //ui->winner->setStyleSheet("color: white; border-image:url(/Users/oumarkante31/Downloads/lost.png); background:lightgreen; border-radius: 10px");
                    ui->stackedWidget->widget(2)->setStyleSheet("border-image:url(:Img/lost.png); background-position: center; background-repeat: no-repeat;");
                    //else
                        //ui->winner->setStyleSheet("color: white; border-image:url(/Users/oumarkante31/Downloads/black.png); background:lightgreen; border-radius: 10px");
                }

                AIplay.removeAt(randomIndex);

                delayExecution(1000);
                ui->yourturn->setText("IT'S YOUR TURN!");
                delayExecution(1500);
                ui->yourturn->setText("");
                itsYourTurn = true;
            }
        }

    }

}

caseData MainTicTacToe::isCheckmate()
{
    caseData checkmate;
    checkmate.setWin(false);
    checkmate.setWhoWon("");


    /* 1st ROW */
    if (ui->Btn1->text() != "" && ui->Btn1->text()== ui->Btn2->text() &&  ui->Btn1->text() == ui->Btn3->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn1->text());

        ui->Btn1->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn2->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn3->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

      /* 2nd ROW */
    else if (ui->Btn4->text() != "" && ui->Btn4->text()== ui->Btn5->text() &&  ui->Btn4->text() == ui->Btn6->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn4->text());

        ui->Btn4->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn5->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn6->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

      /* 3rd ROW */
    else if (ui->Btn7->text() != "" && ui->Btn7->text()== ui->Btn8->text() &&  ui->Btn7->text() == ui->Btn9->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn7->text());

        ui->Btn7->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn8->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn9->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

        /* 1st COLUMN */
    else if (ui->Btn1->text() != "" && ui->Btn1->text()== ui->Btn4->text() &&  ui->Btn1->text() == ui->Btn7->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn1->text());

        ui->Btn1->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn4->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn7->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

        /* 2nd COLUMN */
    else if (ui->Btn2->text() != "" && ui->Btn2->text()== ui->Btn5->text() &&  ui->Btn2->text() == ui->Btn8->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn2->text());

        ui->Btn2->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn5->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn8->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

       /* 3rd COLUMN */
    else if (ui->Btn3->text() != "" && ui->Btn3->text()== ui->Btn6->text() &&  ui->Btn3->text() == ui->Btn9->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn3->text());

        ui->Btn3->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn6->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn9->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

       /* 1st DIAGONAL */
    else if (ui->Btn1->text() != "" && ui->Btn1->text()== ui->Btn5->text() &&  ui->Btn1->text() == ui->Btn9->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn1->text());

        ui->Btn1->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn5->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn9->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

      /* 2nd DIAGONAL */
    else if (ui->Btn3->text() != "" && ui->Btn3->text()== ui->Btn5->text() &&  ui->Btn3->text() == ui->Btn7->text())
    {
        checkmate.setWin(true);
        checkmate.setWhoWon(ui->Btn3->text());

        ui->Btn3->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn5->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");
        ui->Btn7->setStyleSheet("color: white; border-image:url(:Img/green.png); background:lightgreen; border-radius: 10px");

    }

    return checkmate;
}


void MainTicTacToe::delayExecution(int milliseconds) {
    QEventLoop loop;
    QTimer::singleShot(milliseconds, &loop, &QEventLoop::quit);
    loop.exec();
}

void MainTicTacToe::on_next_clicked()
{
    int nextIndex = (ui->HelpStackedWid->currentIndex() +1);
    //if(nextIndex < ui->HelpStackedWid->count())
        ui->HelpStackedWid->setCurrentIndex(nextIndex);
}


void MainTicTacToe::on_Previous_clicked()
{
    int prevIndex = (ui->HelpStackedWid->currentIndex() - 1);
    ui->HelpStackedWid->setCurrentIndex(prevIndex);
}


void MainTicTacToe::on_exit_clicked()
{
    delayExecution(600);
    this->close();  // Close the current window
}



void MainTicTacToe::on_restart_clicked()
{
    // Close the current window
    this->close();

    // Create a new instance of the main window and show it
    MainTicTacToe *newWindow = new MainTicTacToe();
    newWindow->setFixedSize(550, 700);
    newWindow->show();
}

