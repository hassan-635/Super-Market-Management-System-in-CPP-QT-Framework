/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangePassword
{
public:
    QFrame *frame;
    QPushButton *empPass;
    QPushButton *adminPass;
    QLabel *label;
    QPushButton *buttonBack;
    QFrame *frameText;
    QLineEdit *username;
    QLineEdit *NewPassword;
    QLineEdit *ConfirmNewPassword;
    QLabel *labelAppName;
    QLabel *label_2;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName("ChangePassword");
        ChangePassword->resize(378, 330);
        ChangePassword->setMinimumSize(QSize(378, 330));
        ChangePassword->setMaximumSize(QSize(378, 330));
        frame = new QFrame(ChangePassword);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 220, 311, 81));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"background-color: #E2EEFF;\n"
"border-radius : 10px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        empPass = new QPushButton(frame);
        empPass->setObjectName("empPass");
        empPass->setGeometry(QRect(30, 40, 86, 26));
        empPass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
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
        adminPass = new QPushButton(frame);
        adminPass->setObjectName("adminPass");
        adminPass->setGeometry(QRect(210, 40, 86, 26));
        adminPass->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
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
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 151, 18));
        label->setStyleSheet(QString::fromUtf8("QLabel \n"
"{\n"
"color: #4382EC;\n"
"font-weight: bold;\n"
"}"));
        buttonBack = new QPushButton(ChangePassword);
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
        frameText = new QFrame(ChangePassword);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(30, 60, 311, 151));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        username = new QLineEdit(frameText);
        username->setObjectName("username");
        username->setGeometry(QRect(10, 10, 291, 26));
        username->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        username->setEchoMode(QLineEdit::Normal);
        NewPassword = new QLineEdit(frameText);
        NewPassword->setObjectName("NewPassword");
        NewPassword->setGeometry(QRect(10, 50, 291, 26));
        NewPassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        NewPassword->setEchoMode(QLineEdit::Password);
        ConfirmNewPassword = new QLineEdit(frameText);
        ConfirmNewPassword->setObjectName("ConfirmNewPassword");
        ConfirmNewPassword->setGeometry(QRect(10, 90, 291, 26));
        ConfirmNewPassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        ConfirmNewPassword->setEchoMode(QLineEdit::Password);
        labelAppName = new QLabel(ChangePassword);
        labelAppName->setObjectName("labelAppName");
        labelAppName->setGeometry(QRect(90, 10, 251, 41));
        labelAppName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 65, 18));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2\n"
"{\n"
"color:#BBD6FD;\n"
"}"));

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QCoreApplication::translate("ChangePassword", "Change Password", nullptr));
        empPass->setText(QCoreApplication::translate("ChangePassword", "Employee", nullptr));
        adminPass->setText(QCoreApplication::translate("ChangePassword", "Admin", nullptr));
        label->setText(QCoreApplication::translate("ChangePassword", "Change Password Of :", nullptr));
        buttonBack->setText(QString());
        username->setPlaceholderText(QCoreApplication::translate("ChangePassword", "Enter Username", nullptr));
        NewPassword->setPlaceholderText(QCoreApplication::translate("ChangePassword", "Enter New Password", nullptr));
        ConfirmNewPassword->setPlaceholderText(QCoreApplication::translate("ChangePassword", "Confirm Password", nullptr));
        labelAppName->setText(QCoreApplication::translate("ChangePassword", "  Super Market Management System  ", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
