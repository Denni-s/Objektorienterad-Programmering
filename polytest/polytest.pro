TEMPLATE = app
CONFIG += c++11
QT += core gui widgets
INCLUDEPATH += G:\Objektorienterad-Programmering\polytest\headers
LIBS += G:\Objektorienterad-Programmering\polytest\headers\shape-lib_mingw-32_qt-5-14-1_debug.a
SOURCES += \
        circle.cpp \
        dizzlepoint.cpp \
        main.cpp \
        point3d.cpp \
        shape.cpp \
        square.cpp

HEADERS += \
    circle.h \
    dizzlepoint.h \
    headers/drawwindow.h \
    headers/textwindow.h \
    point3d.h \
    shape.h \
    square.h
