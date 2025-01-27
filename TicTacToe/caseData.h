#ifndef CASEDATA_H
#define CASEDATA_H

#include <QString>

class caseData{
    private:
        bool win;
        QString whoWon;
    public:
        void setWin(bool win) {this->win = win;}
        void setWhoWon (QString whoWon) {this->whoWon = whoWon;}

        bool getWin() {return win;}
        QString getWhoWon() {return whoWon;}
};

/*struct caseData{
    bool win;
    std::string whoWon;
};*/

#endif // CASEDATA_H
