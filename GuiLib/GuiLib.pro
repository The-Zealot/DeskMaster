QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib
DEFINES += GUILIB_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    explorerform.cpp \
    linkwidget.cpp \
    mainform.cpp

HEADERS += \
    GuiLib_global.h \
    explorerform.h \
    linkwidget.h \
    mainform.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

FORMS += \
    explorerform.ui \
    mainform.ui

DISTFILES += \
    icons/folders/Folder-black64.png \
    icons/folders/Folder-blue64.png \
    icons/folders/Folder-brown64.png \
    icons/folders/Folder-default64.png \
    icons/folders/Folder-green64.png \
    icons/folders/Folder-indigo64.png \
    icons/folders/Folder-lime64.png \
    icons/folders/Folder-magenta64.png \
    icons/folders/Folder-orange64.png \
    icons/folders/Folder-pink64.png \
    icons/folders/Folder-purple64.png \
    icons/folders/Folder-red64.png \
    icons/folders/Folder-white64.png

RESOURCES += \
    resource.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../LogicLib/release/ -lLogicLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../LogicLib/debug/ -lLogicLib
else:unix: LIBS += -L$$OUT_PWD/../LogicLib/ -lLogicLib

INCLUDEPATH += $$PWD/../LogicLib
DEPENDPATH += $$PWD/../LogicLib
