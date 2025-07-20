QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    addfound.cpp \
    addlost.cpp \
    administratordialog.cpp \
    allfound.cpp \
    alllost.cpp \
    alluser.cpp \
    database.cpp \
    detail.cpp \
    getfilename.cpp \
    login.cpp \
    main.cpp \
    modifypassword.cpp \
    personalcenter.cpp \
    personalcentera.cpp \
    register.cpp \
    registeradm.cpp \
    revokefound.cpp \
    revokelost.cpp \
    userdialog.cpp \
    verify.cpp


HEADERS += \
    addfound.h \
    addlost.h \
    administratordialog.h \
    allfound.h \
    alllost.h \
    alluser.h \
    database.h \
    detail.h \
    getfilename.h \
    login.h \
    modifypassword.h \
    personalcenter.h \
    personalcentera.h \
    register.h \
    registeradm.h \
    revokefound.h \
    revokelost.h \
    userdialog.h \
    verify.h \

FORMS += \
    addfound.ui \
    addlost.ui \
    administratordialog.ui \
    allfound.ui \
    alllost.ui \
    alluser.ui \
    detail.ui \
    getfilename.ui \
    login.ui \
    modifypassword.ui \
    personalcenter.ui \
    personalcentera.ui \
    register.ui \
    registeradm.ui \
    revokefound.ui \
    revokelost.ui \
    userdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
