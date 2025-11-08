QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Lab_5_UTF-8_srazy_Task_1.cpp \
        Lab_5_UTF-8_srazy_Task_2.cpp \
        Lab_5_UTF-8_srazy_Task_3.cpp \
        Lab_5_UTF-8_srazy_Task_4.cpp \
        Lab_5_UTF-8_srazy_Task_5.cpp \
        Lab_5_UTF-8_srazy_Task_6.cpp \
        Lab_5_UTF-8_srazy_Task_7.cpp \
        Lab_5_UTF-8_srazy_Task_8.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Lab_5_UTF-8_srazy.h

#ifdef Q_OS_WIN32
 QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF 8"));
#endif
