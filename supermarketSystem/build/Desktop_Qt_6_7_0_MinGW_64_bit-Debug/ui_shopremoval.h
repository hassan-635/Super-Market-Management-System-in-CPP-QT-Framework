/********************************************************************************
** Form generated from reading UI file 'shopremoval.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPREMOVAL_H
#define UI_SHOPREMOVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShopRemoval
{
public:
    QFrame *frameText;
    QLineEdit *shopID;
    QPushButton *buttonClear;
    QPushButton *buttonDelete;
    QLineEdit *adminUname;
    QLineEdit *empUsername;
    QPushButton *buttonBack;
    QLabel *labelAppName;
    QLabel *label;

    void setupUi(QDialog *ShopRemoval)
    {
        if (ShopRemoval->objectName().isEmpty())
            ShopRemoval->setObjectName("ShopRemoval");
        ShopRemoval->resize(365, 264);
        ShopRemoval->setMinimumSize(QSize(365, 264));
        ShopRemoval->setMaximumSize(QSize(365, 264));
        frameText = new QFrame(ShopRemoval);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(10, 80, 331, 161));
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
        buttonClear = new QPushButton(frameText);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(20, 100, 41, 41));
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
        buttonDelete = new QPushButton(frameText);
        buttonDelete->setObjectName("buttonDelete");
        buttonDelete->setGeometry(QRect(270, 100, 41, 41));
        buttonDelete->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/Delete.svg\");\n"
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
        adminUname = new QLineEdit(frameText);
        adminUname->setObjectName("adminUname");
        adminUname->setGeometry(QRect(20, 40, 291, 26));
        adminUname->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        empUsername = new QLineEdit(frameText);
        empUsername->setObjectName("empUsername");
        empUsername->setGeometry(QRect(20, 70, 291, 26));
        empUsername->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        buttonBack = new QPushButton(ShopRemoval);
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
        labelAppName = new QLabel(ShopRemoval);
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
        label = new QLabel(ShopRemoval);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 65, 18));
        label->setStyleSheet(QString::fromUtf8("QLabel#label\n"
"{\n"
"color: #BBD6FD;\n"
"}"));

        retranslateUi(ShopRemoval);

        QMetaObject::connectSlotsByName(ShopRemoval);
    } // setupUi

    void retranslateUi(QDialog *ShopRemoval)
    {
        ShopRemoval->setWindowTitle(QCoreApplication::translate("ShopRemoval", "Dialog", nullptr));
        shopID->setPlaceholderText(QCoreApplication::translate("ShopRemoval", "Enter Shop ID", nullptr));
        buttonClear->setText(QString());
        buttonDelete->setText(QString());
        adminUname->setPlaceholderText(QCoreApplication::translate("ShopRemoval", " Enter Admin Username", nullptr));
        empUsername->setPlaceholderText(QCoreApplication::translate("ShopRemoval", " Enter Employee Username", nullptr));
        buttonBack->setText(QString());
        labelAppName->setText(QCoreApplication::translate("ShopRemoval", "  Super Market Management System  ", nullptr));
        label->setText(QCoreApplication::translate("ShopRemoval", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShopRemoval: public Ui_ShopRemoval {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPREMOVAL_H
