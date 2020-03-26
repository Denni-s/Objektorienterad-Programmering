TEMPLATE = app
CONFIG += c++11
QT += core gui widgets
INCLUDEPATH += G:\Objektorienterad-Programmering\complete\headers
LIBS += G:\Objektorienterad-Programmering\complete\compiled-afiles\shape-lib_mingw-32_qt-5-14-1_debug.a
SOURCES += main.cpp

HEADERS += \
    ../complete/headers/circle.h \
    ../complete/headers/drawwindow.h \
    ../complete/headers/point.h \
    ../complete/headers/square.h \
    ../complete/headers/textwindow.h \
    Header.h
