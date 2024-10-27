/********************************************************************************
** Form generated from reading UI file 'employeescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEESCREEN_H
#define UI_EMPLOYEESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelAppName_2;
    QPushButton *buttonBack;
    QPushButton *LogOut;
    QFrame *frame;
    QPushButton *buttonAddData_2;
    QPushButton *buttonRemoveData_2;
    QPushButton *buttonUpdateData;
    QTableView *tableViewItems;
    QLabel *label;

    void setupUi(QDialog *EmployeeScreen)
    {
        if (EmployeeScreen->objectName().isEmpty())
            EmployeeScreen->setObjectName("EmployeeScreen");
        EmployeeScreen->resize(760, 635);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EmployeeScreen->sizePolicy().hasHeightForWidth());
        EmployeeScreen->setSizePolicy(sizePolicy);
        EmployeeScreen->setMinimumSize(QSize(760, 635));
        EmployeeScreen->setMaximumSize(QSize(760, 635));
        verticalLayoutWidget = new QWidget(EmployeeScreen);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(210, 10, 371, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelAppName_2 = new QLabel(verticalLayoutWidget);
        labelAppName_2->setObjectName("labelAppName_2");
        labelAppName_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));

        verticalLayout_3->addWidget(labelAppName_2);

        buttonBack = new QPushButton(EmployeeScreen);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(40, 20, 41, 41));
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
        LogOut = new QPushButton(EmployeeScreen);
        LogOut->setObjectName("LogOut");
        LogOut->setGeometry(QRect(670, 20, 41, 41));
        LogOut->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/LogOut.svg\");\n"
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
        frame = new QFrame(EmployeeScreen);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(300, 570, 221, 41));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"border: 0;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        buttonAddData_2 = new QPushButton(frame);
        buttonAddData_2->setObjectName("buttonAddData_2");
        buttonAddData_2->setGeometry(QRect(0, 0, 41, 41));
        buttonAddData_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/Insert.svg\");\n"
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
        buttonRemoveData_2 = new QPushButton(frame);
        buttonRemoveData_2->setObjectName("buttonRemoveData_2");
        buttonRemoveData_2->setGeometry(QRect(180, 0, 41, 41));
        buttonRemoveData_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/remove.svg\");\n"
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
        buttonUpdateData = new QPushButton(frame);
        buttonUpdateData->setObjectName("buttonUpdateData");
        buttonUpdateData->setGeometry(QRect(90, 0, 41, 41));
        buttonUpdateData->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/Update.svg\");\n"
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
        tableViewItems = new QTableView(EmployeeScreen);
        tableViewItems->setObjectName("tableViewItems");
        tableViewItems->setGeometry(QRect(40, 90, 671, 461));
        tableViewItems->setStyleSheet(QString::fromUtf8("QTableView {\n"
"color: black;\n"
"background-color: #E2EEFF;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QTableView QHeaderView {\n"
"    background-color: #E2EEFF;\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QTableView QHeaderView::section {\n"
"	border: 2px solid #4382EC;\n"
"	border-radius: 5px;\n"
"    background-color: #E2EEFF;\n"
"	color: #4382EC;\n"
"	font: 500 11pt \"Roboto\";\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked {\n"
"    background-color: #BBD6FD;\n"
"    color: #4382EC;\n"
"    border-radius: 10px;\n"
"	font: 900 11pt \"Roboto\";\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QScrollBar {\n"
"    background-color: #4382EC;\n"
"    border-radius: 10px;\n"
"    margin-right: 5px;\n"
"	margin-left: 5px;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border-radius: 10px;\n"
"	border: 1px solid  #4382EC;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #4382EC;\n"
"    color: white;\n"
"	font-weight: bold;\n"
"}\n"
""));
        label = new QLabel(EmployeeScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 70, 16, 16));
        label->setStyleSheet(QString::fromUtf8("color: rgb(187, 214, 253);"));

        retranslateUi(EmployeeScreen);

        QMetaObject::connectSlotsByName(EmployeeScreen);
    } // setupUi

    void retranslateUi(QDialog *EmployeeScreen)
    {
        EmployeeScreen->setWindowTitle(QCoreApplication::translate("EmployeeScreen", "Employee Panel", nullptr));
        labelAppName_2->setText(QCoreApplication::translate("EmployeeScreen", "             Super Market Management System ", nullptr));
        buttonBack->setText(QString());
        LogOut->setText(QString());
        buttonAddData_2->setText(QString());
        buttonRemoveData_2->setText(QString());
        buttonUpdateData->setText(QString());
        label->setText(QCoreApplication::translate("EmployeeScreen", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeScreen: public Ui_EmployeeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEESCREEN_H
