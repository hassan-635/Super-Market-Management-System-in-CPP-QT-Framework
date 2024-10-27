/********************************************************************************
** Form generated from reading UI file 'adminloginform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGINFORM_H
#define UI_ADMINLOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminLoginForm
{
public:
    QPushButton *ButtonLogInAdmin;
    QFrame *frameText;
    QLineEdit *userNameAdmin;
    QLineEdit *passwordAdmin;
    QPushButton *buttonBack;
    QLabel *labelAppName;
    QLabel *labelAppLgin;

    void setupUi(QDialog *AdminLoginForm)
    {
        if (AdminLoginForm->objectName().isEmpty())
            AdminLoginForm->setObjectName("AdminLoginForm");
        AdminLoginForm->resize(458, 176);
        AdminLoginForm->setMinimumSize(QSize(458, 176));
        AdminLoginForm->setMaximumSize(QSize(458, 176));
        AdminLoginForm->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: #BBD6FD;\n"
"}\n"
""));
        ButtonLogInAdmin = new QPushButton(AdminLoginForm);
        ButtonLogInAdmin->setObjectName("ButtonLogInAdmin");
        ButtonLogInAdmin->setGeometry(QRect(300, 120, 131, 41));
        ButtonLogInAdmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        frameText = new QFrame(AdminLoginForm);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(30, 70, 261, 91));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        userNameAdmin = new QLineEdit(frameText);
        userNameAdmin->setObjectName("userNameAdmin");
        userNameAdmin->setGeometry(QRect(20, 10, 221, 26));
        userNameAdmin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        passwordAdmin = new QLineEdit(frameText);
        passwordAdmin->setObjectName("passwordAdmin");
        passwordAdmin->setGeometry(QRect(20, 50, 221, 26));
        passwordAdmin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        passwordAdmin->setEchoMode(QLineEdit::Password);
        buttonBack = new QPushButton(AdminLoginForm);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(30, 10, 41, 41));
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
        labelAppName = new QLabel(AdminLoginForm);
        labelAppName->setObjectName("labelAppName");
        labelAppName->setGeometry(QRect(120, 10, 311, 41));
        labelAppName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        labelAppLgin = new QLabel(AdminLoginForm);
        labelAppLgin->setObjectName("labelAppLgin");
        labelAppLgin->setGeometry(QRect(300, 70, 131, 41));
        labelAppLgin->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));

        retranslateUi(AdminLoginForm);

        QMetaObject::connectSlotsByName(AdminLoginForm);
    } // setupUi

    void retranslateUi(QDialog *AdminLoginForm)
    {
        AdminLoginForm->setWindowTitle(QCoreApplication::translate("AdminLoginForm", "Admin Login Page", nullptr));
        ButtonLogInAdmin->setText(QCoreApplication::translate("AdminLoginForm", "Log In", nullptr));
        userNameAdmin->setPlaceholderText(QCoreApplication::translate("AdminLoginForm", "Enter Username", nullptr));
        passwordAdmin->setPlaceholderText(QCoreApplication::translate("AdminLoginForm", "Enter Password", nullptr));
        buttonBack->setText(QString());
        labelAppName->setText(QCoreApplication::translate("AdminLoginForm", "          Super Market Management System ", nullptr));
        labelAppLgin->setText(QCoreApplication::translate("AdminLoginForm", "  Log In As Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLoginForm: public Ui_AdminLoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGINFORM_H
