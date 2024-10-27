/********************************************************************************
** Form generated from reading UI file 'shopentry.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPENTRY_H
#define UI_SHOPENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShopEntry
{
public:
    QLabel *labelAppName;
    QFrame *frameText;
    QLineEdit *shopID;
    QLineEdit *shopName;
    QLineEdit *empName;
    QLineEdit *empPassword;
    QLineEdit *empEmail;
    QPushButton *buttonClear;
    QPushButton *buttonSave;
    QLineEdit *empSalary;
    QDateEdit *empHireDate;
    QPushButton *buttonBack;
    QLabel *label;

    void setupUi(QDialog *ShopEntry)
    {
        if (ShopEntry->objectName().isEmpty())
            ShopEntry->setObjectName("ShopEntry");
        ShopEntry->resize(357, 408);
        labelAppName = new QLabel(ShopEntry);
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
        frameText = new QFrame(ShopEntry);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(10, 70, 331, 311));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        shopID = new QLineEdit(frameText);
        shopID->setObjectName("shopID");
        shopID->setGeometry(QRect(20, 10, 291, 26));
        shopID->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        shopName = new QLineEdit(frameText);
        shopName->setObjectName("shopName");
        shopName->setGeometry(QRect(20, 50, 291, 26));
        shopName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        empName = new QLineEdit(frameText);
        empName->setObjectName("empName");
        empName->setGeometry(QRect(20, 90, 291, 26));
        empName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        empName->setEchoMode(QLineEdit::Normal);
        empPassword = new QLineEdit(frameText);
        empPassword->setObjectName("empPassword");
        empPassword->setGeometry(QRect(20, 130, 291, 26));
        empPassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        empPassword->setEchoMode(QLineEdit::Password);
        empEmail = new QLineEdit(frameText);
        empEmail->setObjectName("empEmail");
        empEmail->setGeometry(QRect(20, 170, 291, 26));
        empEmail->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        buttonClear = new QPushButton(frameText);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(270, 250, 41, 41));
        buttonClear->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/Clear.svg\");\n"
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
        buttonSave = new QPushButton(frameText);
        buttonSave->setObjectName("buttonSave");
        buttonSave->setGeometry(QRect(40, 260, 31, 31));
        buttonSave->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/Save.svg\");\n"
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
"	padding: 2px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: #E2EEFF;\n"
"border: 4px solid #BBD6FD;\n"
"}\n"
"	"));
        empSalary = new QLineEdit(frameText);
        empSalary->setObjectName("empSalary");
        empSalary->setGeometry(QRect(20, 210, 291, 26));
        empSalary->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        empSalary->setEchoMode(QLineEdit::Normal);
        empHireDate = new QDateEdit(frameText);
        empHireDate->setObjectName("empHireDate");
        empHireDate->setGeometry(QRect(130, 260, 110, 27));
        empHireDate->setStyleSheet(QString::fromUtf8("QDateEdit#empHireDate\n"
"{\n"
"background-color : #BBD6FD;\n"
"color: #4382EC;\n"
"border: 2px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bold; \n"
"}\n"
"\n"
"QDateEdit#empHireDate:hover\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bolder;\n"
"}\n"
"\n"
"QDateEdit#empHireDate:focus\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"color: #4382EC;\n"
"font-weight: italic;\n"
"}"));
        buttonBack = new QPushButton(ShopEntry);
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
        label = new QLabel(ShopEntry);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 65, 18));
        label->setStyleSheet(QString::fromUtf8("QLabel#label{color: #BBD6FD;\n"
"}"));

        retranslateUi(ShopEntry);

        QMetaObject::connectSlotsByName(ShopEntry);
    } // setupUi

    void retranslateUi(QDialog *ShopEntry)
    {
        ShopEntry->setWindowTitle(QCoreApplication::translate("ShopEntry", "Data Entry Form", nullptr));
        labelAppName->setText(QCoreApplication::translate("ShopEntry", "  Super Market Management System  ", nullptr));
        shopID->setPlaceholderText(QCoreApplication::translate("ShopEntry", "Enter Shop ID", nullptr));
        shopName->setPlaceholderText(QCoreApplication::translate("ShopEntry", "Enter Shop Name", nullptr));
        empName->setPlaceholderText(QCoreApplication::translate("ShopEntry", "Enter Employee Name", nullptr));
        empPassword->setPlaceholderText(QCoreApplication::translate("ShopEntry", "Enter Employee Password", nullptr));
        empEmail->setPlaceholderText(QCoreApplication::translate("ShopEntry", "Enter Employee Email", nullptr));
        buttonClear->setText(QString());
        buttonSave->setText(QString());
        empSalary->setPlaceholderText(QCoreApplication::translate("ShopEntry", "Enter Employee Salary", nullptr));
        buttonBack->setText(QString());
        label->setText(QCoreApplication::translate("ShopEntry", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShopEntry: public Ui_ShopEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPENTRY_H
