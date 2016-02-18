#-------------------------------------------------
#
# Project created by QtCreator 2016-02-17T22:51:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt31_thread_gui
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    mythread.cpp

HEADERS  += dialog.h \
    mythread.h

FORMS    += dialog.ui
