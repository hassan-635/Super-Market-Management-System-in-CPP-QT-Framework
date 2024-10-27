/********************************************************************************
** Form generated from reading UI file 'itemupdate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMUPDATE_H
#define UI_ITEMUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ItemUpdate
{
public:
    QLabel *labelAppName;
    QFrame *frameText;
    QLineEdit *itemCode;
    QLineEdit *itemPrice;
    QLineEdit *itemQuantity;
    QPushButton *buttonClear;
    QPushButton *buttonSave;
    QLabel *label;
    QPushButton *buttonBack;

    void setupUi(QDialog *ItemUpdate)
    {
        if (ItemUpdate->objectName().isEmpty())
            ItemUpdate->setObjectName("ItemUpdate");
        ItemUpdate->resize(362, 300);
        ItemUpdate->setMinimumSize(QSize(362, 300));
        ItemUpdate->setMaximumSize(QSize(362, 300));
        labelAppName = new QLabel(ItemUpdate);
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
        frameText = new QFrame(ItemUpdate);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(10, 70, 331, 211));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        itemCode = new QLineEdit(frameText);
        itemCode->setObjectName("itemCode");
        itemCode->setGeometry(QRect(20, 30, 291, 26));
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
        itemPrice = new QLineEdit(frameText);
        itemPrice->setObjectName("itemPrice");
        itemPrice->setGeometry(QRect(20, 70, 291, 26));
        itemPrice->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        itemQuantity = new QLineEdit(frameText);
        itemQuantity->setObjectName("itemQuantity");
        itemQuantity->setGeometry(QRect(20, 110, 291, 26));
        itemQuantity->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        itemQuantity->setEchoMode(QLineEdit::Normal);
        buttonClear = new QPushButton(frameText);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(270, 160, 41, 41));
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
        buttonSave->setGeometry(QRect(30, 170, 31, 31));
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
        label = new QLabel(frameText);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 160, 16, 18));
        buttonBack = new QPushButton(ItemUpdate);
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

        retranslateUi(ItemUpdate);

        QMetaObject::connectSlotsByName(ItemUpdate);
    } // setupUi

    void retranslateUi(QDialog *ItemUpdate)
    {
        ItemUpdate->setWindowTitle(QCoreApplication::translate("ItemUpdate", "Dialog", nullptr));
        labelAppName->setText(QCoreApplication::translate("ItemUpdate", "  Super Market Management System  ", nullptr));
        itemCode->setPlaceholderText(QCoreApplication::translate("ItemUpdate", "Enter Item Name", nullptr));
        itemPrice->setPlaceholderText(QCoreApplication::translate("ItemUpdate", "Enter Item Price", nullptr));
        itemQuantity->setPlaceholderText(QCoreApplication::translate("ItemUpdate", "Enter Item Quantity", nullptr));
        buttonClear->setText(QString());
        buttonSave->setText(QString());
        label->setText(QCoreApplication::translate("ItemUpdate", "TextLabel", nullptr));
        buttonBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ItemUpdate: public Ui_ItemUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMUPDATE_H
