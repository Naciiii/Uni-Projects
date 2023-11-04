TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        buchung.cpp \
        flugbuchung.cpp \
        hotelbuchung.cpp \
        main.cpp \
        reisebuero.cpp

HEADERS += \
    buchung.h \
    flugbuchung.h \
    hotelbuchung.h \
    reisebuero.h
