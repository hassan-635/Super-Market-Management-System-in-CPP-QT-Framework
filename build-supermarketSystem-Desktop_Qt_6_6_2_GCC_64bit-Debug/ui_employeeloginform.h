/********************************************************************************
** Form generated from reading UI file 'employeeloginform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEELOGINFORM_H
#define UI_EMPLOYEELOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EmployeeLoginForm
{
public:
    QPushButton *ButtonLogIn;
    QFrame *frameText;
    QLineEdit *userName;
    QLineEdit *password;
    QLabel *labelAppName;
    QLabel *labelAppLogin;
    QPushButton *buttonBack;

    void setupUi(QDialog *EmployeeLoginForm)
    {
        if (EmployeeLoginForm->objectName().isEmpty())
            EmployeeLoginForm->setObjectName("EmployeeLoginForm");
        EmployeeLoginForm->resize(464, 176);
        EmployeeLoginForm->setMinimumSize(QSize(464, 176));
        EmployeeLoginForm->setMaximumSize(QSize(464, 176));
        EmployeeLoginForm->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: #BBD6FD;\n"
"}\n"
""));
        ButtonLogIn = new QPushButton(EmployeeLoginForm);
        ButtonLogIn->setObjectName("ButtonLogIn");
        ButtonLogIn->setGeometry(QRect(290, 120, 151, 41));
        ButtonLogIn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	background-color: #4382EC;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #4382EC;\n"
"	font-weight: bold;\n"
"	background-color: #E2EEFF;\n"
"	border-radius: 10px;\n"
"	border: 2px solid #4382EC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: #E2EEFF;\n"
"background-color: #3569B2;\n"
"border: 3px solid #BBD6FD;\n"
"}\n"
"	"));
        frameText = new QFrame(EmployeeLoginForm);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(20, 70, 261, 91));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        userName = new QLineEdit(frameText);
        userName->setObjectName("userName");
        userName->setGeometry(QRect(20, 10, 221, 26));
        userName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color : #BBD6FD;\n"
"color: #4382EC;\n"
"border: 2px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bolder;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"color: #4382EC;\n"
"font-weight: italic;\n"
"}"));
        password = new QLineEdit(frameText);
        password->setObjectName("password");
        password->setGeometry(QRect(20, 50, 221, 26));
        password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color : #BBD6FD;\n"
"color: #4382EC;\n"
"border: 2px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bolder;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"color: #4382EC;\n"
"font-weight: italic;\n"
"}"));
        password->setEchoMode(QLineEdit::Password);
        labelAppName = new QLabel(EmployeeLoginForm);
        labelAppName->setObjectName("labelAppName");
        labelAppName->setGeometry(QRect(110, 10, 311, 41));
        labelAppName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        labelAppLogin = new QLabel(EmployeeLoginForm);
        labelAppLogin->setObjectName("labelAppLogin");
        labelAppLogin->setGeometry(QRect(290, 70, 151, 41));
        labelAppLogin->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        buttonBack = new QPushButton(EmployeeLoginForm);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(20, 10, 41, 41));
        buttonBack->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/Back.svg\");\n"
"background-color: #E2EEFF;\n"
"color: white;\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #4382EC;\n"
"	font-weight: bold;\n"
"	background-color: #E2EEFF;\n"
"	border-radius: 10px;\n"
"	border: 2px solid #4382EC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: #E2EEFF;\n"
"border: 4px solid #BBD6FD;\n"
"}\n"
"	"));

        retranslateUi(EmployeeLoginForm);

        QMetaObject::connectSlotsByName(EmployeeLoginForm);
    } // setupUi

    void retranslateUi(QDialog *EmployeeLoginForm)
    {
        EmployeeLoginForm->setWindowTitle(QCoreApplication::translate("EmployeeLoginForm", "Dialog", nullptr));
        ButtonLogIn->setText(QCoreApplication::translate("EmployeeLoginForm", "Log In", nullptr));
        userName->setPlaceholderText(QCoreApplication::translate("EmployeeLoginForm", "Enter Username", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("EmployeeLoginForm", "Enter Password", nullptr));
        labelAppName->setText(QCoreApplication::translate("EmployeeLoginForm", "          Super Market Management System ", nullptr));
        labelAppLogin->setText(QCoreApplication::translate("EmployeeLoginForm", "  Log In As Employee", nullptr));
        buttonBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EmployeeLoginForm: public Ui_EmployeeLoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEELOGINFORM_H
