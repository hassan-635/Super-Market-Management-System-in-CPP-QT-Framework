/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *loginLabel;
    QLabel *labelLine;
    QPushButton *SignUpWindow;
    QFrame *frame;
    QPushButton *empLogin;
    QPushButton *adminLogin;
    QFrame *frame_2;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(428, 250);
        MainWindow->setMinimumSize(QSize(428, 250));
        MainWindow->setMaximumSize(QSize(428, 250));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: #BBD6FD;\n"
"}\n"
"	"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        loginLabel = new QLabel(centralwidget);
        loginLabel->setObjectName("loginLabel");
        loginLabel->setGeometry(QRect(40, 40, 101, 41));
        loginLabel->setStyleSheet(QString::fromUtf8("QLabel#loginLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        labelLine = new QLabel(centralwidget);
        labelLine->setObjectName("labelLine");
        labelLine->setGeometry(QRect(180, 170, 231, 20));
        labelLine->setStyleSheet(QString::fromUtf8("QLabel#labelLine{\n"
"	padding-top: 2px;\n"
"	padding-bottom: 2px;\n"
"	color: #4382EC;\n"
"	border-radius: 5px;\n"
"	text-decoration: underline;\n"
"	font-weight: bold;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        SignUpWindow = new QPushButton(centralwidget);
        SignUpWindow->setObjectName("SignUpWindow");
        SignUpWindow->setGeometry(QRect(260, 200, 101, 26));
        SignUpWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(240, 40, 120, 101));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"background-color: #E2EEFF;\n"
"border-radius : 10px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        empLogin = new QPushButton(frame);
        empLogin->setObjectName("empLogin");
        empLogin->setGeometry(QRect(20, 20, 86, 26));
        empLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        adminLogin = new QPushButton(frame);
        adminLogin->setObjectName("adminLogin");
        adminLogin->setGeometry(QRect(20, 60, 86, 26));
        adminLogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(40, 110, 111, 101));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: none;\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/barcode.png")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        MainWindow->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        labelLine->setBuddy(SignUpWindow);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        loginLabel->setText(QCoreApplication::translate("MainWindow", "    LOGIN AS", nullptr));
        labelLine->setText(QCoreApplication::translate("MainWindow", "   Don't have an Admin account ... ", nullptr));
        SignUpWindow->setText(QCoreApplication::translate("MainWindow", "Sign Up Here", nullptr));
        empLogin->setText(QCoreApplication::translate("MainWindow", "Employee", nullptr));
        adminLogin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
