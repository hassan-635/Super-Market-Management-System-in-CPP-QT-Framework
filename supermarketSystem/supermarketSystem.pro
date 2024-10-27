QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminloginform.cpp \
    adminscreen.cpp \
    changepassword.cpp \
    employeeloginform.cpp \
    employeescreen.cpp \
    employeeupdate.cpp \
    itemdelete.cpp \
    itementry.cpp \
    itemupdate.cpp \
    main.cpp \
    login.cpp \
    notes.cpp \
    otherClasses/admin.cpp \
    otherClasses/employee.cpp \
    otherClasses/friendFunctions.cpp \
    otherClasses/user.cpp \
    shopentry.cpp \
    shopremoval.cpp \
    signup.cpp


HEADERS += \
    adminloginform.h \
    adminscreen.h \
    changepassword.h \
    employeeloginform.h \
    employeescreen.h \
    employeeupdate.h \
    itemdelete.h \
    itementry.h \
    itemupdate.h \
    login.h \
    notes.h \
    otherClasses/admin.h \
    otherClasses/employee.h \
    otherClasses/friendFunctions.h \
    otherClasses/user.h \
    shopentry.h \
    shopremoval.h \
    signup.h


FORMS += \
    adminloginform.ui \
    adminscreen.ui \
    changepassword.ui \
    employeeloginform.ui \
    employeescreen.ui \
    employeeupdate.ui \
    itemdelete.ui \
    itementry.ui \
    itemupdate.ui \
    mainwindow.ui \
    notes.ui \
    shopentry.ui \
    shopremoval.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
