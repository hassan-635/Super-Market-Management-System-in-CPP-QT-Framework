/********************************************************************************
** Form generated from reading UI file 'itemdelete.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMDELETE_H
#define UI_ITEMDELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ItemDelete
{
public:
    QLabel *labelAppName;
    QFrame *frameText;
    QLineEdit *itemCode;
    QLineEdit *employeeUsername;
    QPushButton *buttonClear;
    QPushButton *buttonDelete;
    QLabel *label;
    QPushButton *buttonBack;

    void setupUi(QDialog *ItemDelete)
    {
        if (ItemDelete->objectName().isEmpty())
            ItemDelete->setObjectName("ItemDelete");
        ItemDelete->resize(364, 234);
        labelAppName = new QLabel(ItemDelete);
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
        frameText = new QFrame(ItemDelete);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(10, 60, 331, 151));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        itemCode = new QLineEdit(frameText);
        itemCode->setObjectName("itemCode");
        itemCode->setGeometry(QRect(20, 10, 291, 26));
        itemCode->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        employeeUsername = new QLineEdit(frameText);
        employeeUsername->setObjectName("employeeUsername");
        employeeUsername->setGeometry(QRect(20, 50, 291, 26));
        employeeUsername->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        employeeUsername->setEchoMode(QLineEdit::Normal);
        buttonClear = new QPushButton(frameText);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(20, 90, 41, 41));
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
        buttonDelete->setGeometry(QRect(270, 90, 41, 41));
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
        label = new QLabel(frameText);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 100, 16, 16));
        buttonBack = new QPushButton(ItemDelete);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(10, 10, 41, 41));
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

        retranslateUi(ItemDelete);

        QMetaObject::connectSlotsByName(ItemDelete);
    } // setupUi

    void retranslateUi(QDialog *ItemDelete)
    {
        ItemDelete->setWindowTitle(QCoreApplication::translate("ItemDelete", "Dialog", nullptr));
        labelAppName->setText(QCoreApplication::translate("ItemDelete", "  Super Market Management System  ", nullptr));
        itemCode->setPlaceholderText(QCoreApplication::translate("ItemDelete", "Enter Item Code", nullptr));
        employeeUsername->setPlaceholderText(QCoreApplication::translate("ItemDelete", "Enter Employee Username", nullptr));
        buttonClear->setText(QString());
        buttonDelete->setText(QString());
        label->setText(QCoreApplication::translate("ItemDelete", "TextLabel", nullptr));
        buttonBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemDelete: public Ui_ItemDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMDELETE_H
