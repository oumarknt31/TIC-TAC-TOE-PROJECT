QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    maintictactoe.cpp

HEADERS += \
    caseData.h \
    maintictactoe.h

FORMS += \
    maintictactoe.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../Desktop/Zabuza 4.jpeg \
    ../Desktop/Zabuza 4.jpeg \
    ../Desktop/Zabuza 4.png \
    ../Desktop/shisui 2.webp \
    ../Downloads/Img/BlackImg.png \
    ../Downloads/Img/GameOver.png \
    ../Downloads/Img/back.png \
    ../Downloads/Img/back2.png \
    ../Downloads/Img/black.png \
    ../Downloads/Img/checkmate.png \
    ../Downloads/Img/checkmate2.png \
    ../Downloads/Img/confirm.png \
    ../Downloads/Img/confirm2.png \
    ../Downloads/Img/exit.png \
    ../Downloads/Img/exit2.png \
    ../Downloads/Img/green.png \
    ../Downloads/Img/help.png \
    ../Downloads/Img/help2.png \
    ../Downloads/Img/landing.png \
    ../Downloads/Img/lightpurple.png \
    ../Downloads/Img/lost.png \
    ../Downloads/Img/next.png \
    ../Downloads/Img/next2.png \
    ../Downloads/Img/pink.png \
    ../Downloads/Img/pink2.png \
    ../Downloads/Img/previous.png \
    ../Downloads/Img/previous2.png \
    ../Downloads/Img/purple.png \
    ../Downloads/Img/restart.png \
    ../Downloads/Img/step0.png \
    ../Downloads/Img/step2.png \
    ../Downloads/Img/step3.png \
    ../Downloads/Img/step4.png \
    ../Downloads/Img/step5.png \
    ../Downloads/Img/step6.png \
    ../Downloads/Img/step7.png \
    ../Downloads/Img/welcome2.png \
    ../Downloads/Img/welcome3.png \
    ../Downloads/Img/white.png \
    ../Downloads/Img/won.png \
    ../Downloads/Img/yellow1.png \
    ../Downloads/Img/yellow2.png \
    Img/BlackImg.png \
    Img/BlackImg.png \
    Img/GameOver.png \
    Img/GameOver.png \
    Img/back.png \
    Img/back.png \
    Img/checkmate.png \
    Img/checkmate.png \
    Img/checkmate2.png \
    Img/checkmate2.png \
    Img/confirm.png \
    Img/confirm.png \
    Img/confirm2.png \
    Img/confirm2.png \
    Img/draw.png \
    Img/draw.png \
    Img/exit.png \
    Img/exit.png \
    Img/exit2.png \
    Img/exit2.png \
    Img/green.png \
    Img/green.png \
    Img/help.png \
    Img/help.png \
    Img/help2.png \
    Img/help2.png \
    Img/landing.png \
    Img/landing.png \
    Img/lightpurple.png \
    Img/lightpurple.png \
    Img/lost.png \
    Img/lost.png \
    Img/next.png \
    Img/next.png \
    Img/next2.png \
    Img/next2.png \
    Img/pink.png \
    Img/pink2.png \
    Img/pink2.png \
    Img/previous.png \
    Img/previous.png \
    Img/previous2.png \
    Img/previous2.png \
    Img/purple.png \
    Img/purple.png \
    Img/restart.png \
    Img/restart.png \
    Img/step0.png \
    Img/step0.png \
    Img/step2.png \
    Img/step2.png \
    Img/step3.png \
    Img/step3.png \
    Img/step4.png \
    Img/step4.png \
    Img/step5.png \
    Img/step5.png \
    Img/step6.png \
    Img/step6.png \
    Img/step7.png \
    Img/step7.png \
    Img/welcome2.png \
    Img/welcome2.png \
    Img/welcome3.png \
    Img/welcome3.png \
    Img/white.png \
    Img/white.png \
    Img/won.png \
    Img/won.png \
    Img/yellow1.png \
    Img/yellow1.png \
    Img/yellow2.png \
    Img/yellow2.png \
    Img_Resources/yellow2.png

RESOURCES += \
    Img/Images.qrc \
    Resources.qrc
