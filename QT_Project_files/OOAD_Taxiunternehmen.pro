TEMPLATE = app
CONFIG += console
CONFIG -= qt

INCLUDEPATH += ../include

QMAKE_CFLAGS_WARN_ON -= -Wall
QMAKE_CXXFLAGS_WARN_ON -= -Wall

LIBS += -lcppunit

SOURCES += \
    ../src/TaxiKomSys.cpp \
    ../src/Taxidatenbank.cpp \
    ../src/Taxi.cpp \
    ../src/Status.cpp \
    ../src/Schichtplan.cpp \
    ../src/main.cpp \
    ../src/Kundendatenbank.cpp \
    ../src/Kunde.cpp \
    ../src/Koordinate.cpp \
    ../src/I_KomSys.cpp \
    ../src/Hauptmenue.cpp \
    ../src/ePayment.cpp \
    ../src/DateTime.cpp \
    ../src/Auftragssystem.cpp \
    ../src/Auftrag.cpp \
    ../src/Adresse.cpp \
    ../src/testingclass.cpp

HEADERS += \
    ../include/TaxiKomSys.h \
    ../include/Taxidatenbank.h \
    ../include/Taxi.h \
    ../include/Status.h \
    ../include/Schichtplan.h \
    ../include/Kundendatenbank.h \
    ../include/Kunde.h \
    ../include/Koordinate.h \
    ../include/I_KomSys.h \
    ../include/ePayment.h \
    ../include/DateTime.h \
    ../include/Auftragssystem.h \
    ../include/Auftrag.h \
    ../include/Adresse.h \
    ../include/Hauptmenue.h \
    ../include/testingclass.h

