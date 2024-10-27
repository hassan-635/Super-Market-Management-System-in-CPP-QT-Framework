/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signUp
{
public:
    QFrame *frameLogo;
    QLabel *logo;
    QFrame *frameText;
    QLineEdit *name;
    QLineEdit *email;
    QLineEdit *password;
    QLineEdit *confirmpassword;
    QFrame *frame_3;
    QLabel *labelAppName;
    QPushButton *ButtonSignUp;
    QPushButton *buttonBack;

    void setupUi(QDialog *signUp)
    {
        if (signUp->objectName().isEmpty())
            signUp->setObjectName("signUp");
        signUp->resize(600, 380);
        signUp->setMinimumSize(QSize(600, 380));
        signUp->setMaximumSize(QSize(600, 380));
        signUp->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: #BBD6FD;\n"
"}\n"
"\n"
"QMessageBox#label\n"
"{\n"
"	color: black;\n"
"}\n"
"	"));
        frameLogo = new QFrame(signUp);
        frameLogo->setObjectName("frameLogo");
        frameLogo->setGeometry(QRect(420, 80, 131, 111));
        frameLogo->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameLogo->setFrameShape(QFrame::StyledPanel);
        frameLogo->setFrameShadow(QFrame::Raised);
        logo = new QLabel(frameLogo);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(10, 10, 111, 101));
        logo->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: none;\n"
"}"));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/barcode.png")));
        logo->setScaledContents(true);
        logo->setWordWrap(false);
        frameText = new QFrame(signUp);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(40, 80, 331, 171));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        name = new QLineEdit(frameText);
        name->setObjectName("name");
        name->setGeometry(QRect(20, 10, 291, 26));
        name->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        email = new QLineEdit(frameText);
        email->setObjectName("email");
        email->setGeometry(QRect(20, 50, 291, 26));
        email->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        password->setGeometry(QRect(20, 90, 291, 26));
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
        confirmpassword = new QLineEdit(frameText);
        confirmpassword->setObjectName("confirmpassword");
        confirmpassword->setGeometry(QRect(20, 130, 291, 26));
        confirmpassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        confirmpassword->setEchoMode(QLineEdit::Password);
        frame_3 = new QFrame(signUp);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(40, 270, 521, 81));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        labelAppName = new QLabel(signUp);
        labelAppName->setObjectName("labelAppName");
        labelAppName->setGeometry(QRect(130, 10, 311, 41));
        labelAppName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        ButtonSignUp = new QPushButton(signUp);
        ButtonSignUp->setObjectName("ButtonSignUp");
        ButtonSignUp->setGeometry(QRect(440, 210, 91, 41));
        ButtonSignUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        buttonBack = new QPushButton(signUp);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(40, 10, 41, 41));
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
        QWidget::setTabOrder(name, email);
        QWidget::setTabOrder(email, password);
        QWidget::setTabOrder(password, confirmpassword);
        QWidget::setTabOrder(confirmpassword, ButtonSignUp);

        retranslateUi(signUp);

        QMetaObject::connectSlotsByName(signUp);
    } // setupUi

    void retranslateUi(QDialog *signUp)
    {
        signUp->setWindowTitle(QCoreApplication::translate("signUp", "Sign Up", nullptr));
        logo->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("signUp", "Enter Name", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("signUp", "Enter Email", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("signUp", "Enter Password", nullptr));
        confirmpassword->setPlaceholderText(QCoreApplication::translate("signUp", "Confirm Password", nullptr));
        labelAppName->setText(QCoreApplication::translate("signUp", "          Super Market Management System ", nullptr));
        ButtonSignUp->setText(QCoreApplication::translate("signUp", "Sign Up", nullptr));
        buttonBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signUp: public Ui_signUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
