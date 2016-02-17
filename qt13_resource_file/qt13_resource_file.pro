QT += core
QT -= gui

CONFIG += c++11

TARGET = qt13_resource_file
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

RESOURCES += \
    myrsc.qrc
