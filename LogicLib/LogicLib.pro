QT -= gui
QT += core

TEMPLATE = lib
DEFINES += LOGICLIB_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstractlink.cpp \
    filelink.cpp \
    filelinkfactory.cpp \
    folderlink.cpp \
    folderlinkfactory.cpp

HEADERS += \
    LogicLib_global.h \
    abstractlink.h \
    filelink.h \
    filelinkfactory.h \
    folderlink.h \
    folderlinkfactory.h \
    linkfactory.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
