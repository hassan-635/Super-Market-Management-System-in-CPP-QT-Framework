/********************************************************************************
** Form generated from reading UI file 'notes.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTES_H
#define UI_NOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Notes
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Notes)
    {
        if (Notes->objectName().isEmpty())
            Notes->setObjectName("Notes");
        Notes->resize(679, 427);
        textEdit = new QTextEdit(Notes);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 651, 361));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit#textEdit\n"
"{\n"
"background-color: #E2EEFF;\n"
"color: #4382EC;\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"border: 2px solid #4382EC;\n"
"}"));
        pushButton = new QPushButton(Notes);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(570, 390, 86, 26));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #E2EEFF;\n"
"color: #4382EC;\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"\n"
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

        retranslateUi(Notes);

        QMetaObject::connectSlotsByName(Notes);
    } // setupUi

    void retranslateUi(QDialog *Notes)
    {
        Notes->setWindowTitle(QCoreApplication::translate("Notes", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Notes", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Notes", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notes: public Ui_Notes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTES_H
