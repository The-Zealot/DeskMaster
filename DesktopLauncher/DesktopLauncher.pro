QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

build_nr.commands = build.bat
build_nr.depends = FORCE
QMAKE_EXTRA_TARGETS += build_nr
PRE_TARGETDEPS += build_nr

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp

HEADERS +=

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../GuiLib/release/ -lGuiLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../GuiLib/debug/ -lGuiLib
else:unix: LIBS += -L$$OUT_PWD/../GuiLib/ -lGuiLib

INCLUDEPATH += $$PWD/../GuiLib
DEPENDPATH += $$PWD/../GuiLib
