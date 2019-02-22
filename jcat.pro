QT += core
QT -= gui

CONFIG += c++11

TARGET = jcat
CONFIG += console core
CONFIG -= app_bundle

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    main_task.cpp

HEADERS += \
    main_task.hpp

DISTFILES += .gitignore
