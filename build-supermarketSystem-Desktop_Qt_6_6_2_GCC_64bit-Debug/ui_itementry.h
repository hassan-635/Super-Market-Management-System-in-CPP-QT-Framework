/********************************************************************************
** Form generated from reading UI file 'itementry.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMENTRY_H
#define UI_ITEMENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ItemEntry
{
public:
    QFrame *frameText;
    QLineEdit *itemName;
    QLineEdit *itemPrice;
    QLineEdit *itemQuantity;
    QPushButton *buttonClear;
    QPushButton *buttonSave;
    QPushButton *buttonBack;
    QLabel *labelAppName;
    QLabel *label;

    void setupUi(QDialog *ItemEntry)
    {
        if (ItemEntry->objectName().isEmpty())
            ItemEntry->setObjectName("ItemEntry");
        ItemEntry->resize(369, 294);
        ItemEntry->setMinimumSize(QSize(369, 294));
        ItemEntry->setMaximumSize(QSize(369, 294));
        frameText = new QFrame(ItemEntry);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(10, 70, 331, 191));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        itemName = new QLineEdit(frameText);
        itemName->setObjectName("itemName");
        itemName->setGeometry(QRect(20, 10, 291, 26));
        itemName->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        itemPrice->setGeometry(QRect(20, 50, 291, 26));
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
        itemQuantity->setGeometry(QRect(20, 90, 291, 26));
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
        buttonClear->setGeometry(QRect(260, 130, 41, 41));
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
        buttonSave->setGeometry(QRect(30, 140, 31, 31));
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
        buttonBack = new QPushButton(ItemEntry);
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
        labelAppName = new QLabel(ItemEntry);
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
        label = new QLabel(ItemEntry);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 270, 16, 18));

        retranslateUi(ItemEntry);

        QMetaObject::connectSlotsByName(ItemEntry);
    } // setupUi

    void retranslateUi(QDialog *ItemEntry)
    {
        ItemEntry->setWindowTitle(QCoreApplication::translate("ItemEntry", "Dialog", nullptr));
        itemName->setPlaceholderText(QCoreApplication::translate("ItemEntry", "Enter Item Name", nullptr));
        itemPrice->setPlaceholderText(QCoreApplication::translate("ItemEntry", "Enter Item Price", nullptr));
        itemQuantity->setPlaceholderText(QCoreApplication::translate("ItemEntry", "Enter Item Quantity", nullptr));
        buttonClear->setText(QString());
        buttonSave->setText(QString());
        buttonBack->setText(QString());
        labelAppName->setText(QCoreApplication::translate("ItemEntry", "  Super Market Management System  ", nullptr));
        label->setText(QCoreApplication::translate("ItemEntry", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemEntry: public Ui_ItemEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMENTRY_H
