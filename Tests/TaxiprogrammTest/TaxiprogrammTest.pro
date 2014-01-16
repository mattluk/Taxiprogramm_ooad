#-------------------------------------------------
#
# Project created by QtCreator 2014-01-16T18:08:26
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_taxiprogrammtesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += ../../include

QMAKE_CFLAGS_WARN_ON -= -Wall
QMAKE_CXXFLAGS_WARN_ON -= -Wall


SOURCES += tst_taxiprogrammtesttest.cpp \
    ../../src/TaxiKomSys.cpp \
    ../../src/Taxidatenbank.cpp \
    ../../src/Taxi.cpp \
    ../../src/Status.cpp \
    ../../src/Schichtplan.cpp \
    ../../src/Kundendatenbank.cpp \
    ../../src/Kunde.cpp \
    ../../src/Koordinate.cpp \
    ../../src/Karte.cpp \
    ../../src/I_KomSys.cpp \
    ../../src/Hauptmenue.cpp \
    ../../src/ePayment.cpp \
    ../../src/DateTime.cpp \
    ../../src/Auftragssystem.cpp \
    ../../src/Auftrag.cpp \
    ../../src/Adresse.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../../include/TaxiKomSys.h \
    ../../include/Taxidatenbank.h \
    ../../include/Taxi.h \
    ../../include/Status.h \
    ../../include/Schichtplan.h \
    ../../include/Kundendatenbank.h \
    ../../include/Kunde.h \
    ../../include/Koordinate.h \
    ../../include/Karte.h \
    ../../include/I_KomSys.h \
    ../../include/Hauptmenue.h \
    ../../include/ePayment.h \
    ../../include/DateTime.h \
    ../../include/Auftragssystem.h \
    ../../include/Auftrag.h \
    ../../include/Adresse.h
