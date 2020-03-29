TEMPLATE = app
CONFIG += c++11
QT += core gui widgets
INCLUDEPATH += G:\Objektorienterad-Programmering\Labb2\incomplete\headers-to-implement
INCLUDEPATH += G:\Objektorienterad-Programmering\Labb2\incomplete\headers
LIBS += G:\Objektorienterad-Programmering\Labb2\incomplete\shape-lib_mingw-32_qt-5-14-1_debug.a
SOURCES += main.cpp \
    circle.cpp \
    dpoint.cpp \
    plus.cpp \
    square.cpp
HEADERS += \
    circle.h \
    dpoint.h \
    dsquare.h \
    incomplete/headers-to-implement/circle.h \
    incomplete/headers-to-implement/point.h \
    incomplete/headers-to-implement/square.h \
    incomplete/headers/drawwindow.h \
    incomplete/headers/textwindow.h \
    plus.h
