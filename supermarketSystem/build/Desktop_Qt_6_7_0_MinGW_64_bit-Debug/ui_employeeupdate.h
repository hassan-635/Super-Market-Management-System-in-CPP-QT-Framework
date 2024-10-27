/********************************************************************************
** Form generated from reading UI file 'employeeupdate.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEUPDATE_H
#define UI_EMPLOYEEUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_employeeUpdate
{
public:
    QFrame *frameText;
    QLineEdit *empUsername;
    QLineEdit *NewEmail;
    QLineEdit *NewSalary;
    QPushButton *buttonClear;
    QPushButton *buttonSave;
    QDateEdit *newEmpHireDate;
    QLabel *label_2;
    QLabel *labelAppName;
    QPushButton *buttonBack;

    void setupUi(QDialog *employeeUpdate)
    {
        if (employeeUpdate->objectName().isEmpty())
            employeeUpdate->setObjectName("employeeUpdate");
        employeeUpdate->resize(357, 281);
        employeeUpdate->setMinimumSize(QSize(357, 281));
        employeeUpdate->setMaximumSize(QSize(357, 281));
        frameText = new QFrame(employeeUpdate);
        frameText->setObjectName("frameText");
        frameText->setGeometry(QRect(20, 50, 311, 211));
        frameText->setStyleSheet(QString::fromUtf8("QFrame \n"
"{\n"
"background-color: #E2EEFF;\n"
"border-radius: 10px;\n"
"}"));
        frameText->setFrameShape(QFrame::StyledPanel);
        frameText->setFrameShadow(QFrame::Raised);
        empUsername = new QLineEdit(frameText);
        empUsername->setObjectName("empUsername");
        empUsername->setGeometry(QRect(10, 10, 291, 26));
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
        empUsername->setEchoMode(QLineEdit::Normal);
        NewEmail = new QLineEdit(frameText);
        NewEmail->setObjectName("NewEmail");
        NewEmail->setGeometry(QRect(10, 50, 291, 26));
        NewEmail->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        NewEmail->setEchoMode(QLineEdit::Normal);
        NewSalary = new QLineEdit(frameText);
        NewSalary->setObjectName("NewSalary");
        NewSalary->setGeometry(QRect(10, 90, 291, 26));
        NewSalary->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        NewSalary->setEchoMode(QLineEdit::Normal);
        buttonClear = new QPushButton(frameText);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(250, 140, 41, 41));
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
        buttonSave->setGeometry(QRect(20, 150, 31, 31));
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
        newEmpHireDate = new QDateEdit(frameText);
        newEmpHireDate->setObjectName("newEmpHireDate");
        newEmpHireDate->setGeometry(QRect(100, 150, 110, 27));
        newEmpHireDate->setStyleSheet(QString::fromUtf8("QDateEdit#newEmpHireDate\n"
"{\n"
"background-color : #BBD6FD;\n"
"color: #4382EC;\n"
"border: 2px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bold; \n"
"}\n"
"\n"
"QDateEdit#newEmpHireDate:hover\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"font-weight: bolder;\n"
"}\n"
"\n"
"QDateEdit#newEmpHireDate:focus\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"border-radius: 10px;\n"
"color: #4382EC;\n"
"font-weight: italic;\n"
"}"));
        label_2 = new QLabel(employeeUpdate);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 190, 51, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2\n"
"{\n"
"color:#BBD6FD;\n"
"}"));
        labelAppName = new QLabel(employeeUpdate);
        labelAppName->setObjectName("labelAppName");
        labelAppName->setGeometry(QRect(80, 0, 251, 41));
        labelAppName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));
        buttonBack = new QPushButton(employeeUpdate);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(20, 0, 41, 41));
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

        retranslateUi(employeeUpdate);

        QMetaObject::connectSlotsByName(employeeUpdate);
    } // setupUi

    void retranslateUi(QDialog *employeeUpdate)
    {
        employeeUpdate->setWindowTitle(QCoreApplication::translate("employeeUpdate", "Dialog", nullptr));
        empUsername->setPlaceholderText(QCoreApplication::translate("employeeUpdate", "Enter Username", nullptr));
        NewEmail->setPlaceholderText(QCoreApplication::translate("employeeUpdate", "Enter New Email", nullptr));
        NewSalary->setPlaceholderText(QCoreApplication::translate("employeeUpdate", "Enter New Salary", nullptr));
        buttonClear->setText(QString());
        buttonSave->setText(QString());
        label_2->setText(QString());
        labelAppName->setText(QCoreApplication::translate("employeeUpdate", "  Super Market Management System  ", nullptr));
        buttonBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class employeeUpdate: public Ui_employeeUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEUPDATE_H
