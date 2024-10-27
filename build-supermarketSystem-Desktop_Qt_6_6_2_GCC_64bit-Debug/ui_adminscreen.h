/********************************************************************************
** Form generated from reading UI file 'adminscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSCREEN_H
#define UI_ADMINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminScreen
{
public:
    QPushButton *buttonBack;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelAppName;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *shopData;
    QTableView *tableViewShopData;
    QWidget *employeeData;
    QTableView *tableViewEmployeeData;
    QPushButton *LogOut;
    QFrame *frame;
    QPushButton *buttonAddData;
    QPushButton *buttonRemoveData;
    QPushButton *buttonUpdateData;
    QPushButton *buttonChangePassword;
    QFrame *searchFrame;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QPushButton *clearFilter;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *AdminScreen)
    {
        if (AdminScreen->objectName().isEmpty())
            AdminScreen->setObjectName("AdminScreen");
        AdminScreen->resize(850, 700);
        AdminScreen->setMinimumSize(QSize(850, 700));
        AdminScreen->setMaximumSize(QSize(850, 700));
        buttonBack = new QPushButton(AdminScreen);
        buttonBack->setObjectName("buttonBack");
        buttonBack->setGeometry(QRect(50, 30, 41, 41));
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
        verticalLayoutWidget = new QWidget(AdminScreen);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(250, 20, 371, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelAppName = new QLabel(verticalLayoutWidget);
        labelAppName->setObjectName("labelAppName");
        labelAppName->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #4382EC;\n"
"	font: 900 11pt \"Roboto\";\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"	background-color: #E2EEFF;\n"
"}\n"
"	"));

        verticalLayout->addWidget(labelAppName);

        verticalWidget_2 = new QWidget(AdminScreen);
        verticalWidget_2->setObjectName("verticalWidget_2");
        verticalWidget_2->setGeometry(QRect(10, 110, 871, 491));
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tabWidget = new QTabWidget(verticalWidget_2);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setMinimumSize(QSize(800, 0));
        tabWidget->setMaximumSize(QSize(800, 16777215));
        tabWidget->setFocusPolicy(Qt::StrongFocus);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"  background-color: #BBD6FD;\n"
"  border-radius: 10px;\n"
"} \n"
"\n"
"QTabBar::tab {\n"
"  background-color: #E2EEFF;\n"
"  color: #4382EC;\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
" padding-top: 7px;\n"
" padding-bottom: 7px;\n"
"  background: #BBD6FD;\n"
"  color: #4382EC;\n"
" font-weight: bold;\n"
"	border-top: 2px solid #4382EC;\n"
"	border-left: 2px solid #4382EC;\n"
"	border-bottom: 2px solid #4382EC;\n"
" }"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(false);
        shopData = new QWidget();
        shopData->setObjectName("shopData");
        tableViewShopData = new QTableView(shopData);
        tableViewShopData->setObjectName("tableViewShopData");
        tableViewShopData->setGeometry(QRect(0, 0, 800, 461));
        tableViewShopData->setMinimumSize(QSize(800, 0));
        tableViewShopData->setMaximumSize(QSize(800, 16777215));
        tableViewShopData->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        tabWidget->addTab(shopData, QString());
        employeeData = new QWidget();
        employeeData->setObjectName("employeeData");
        tableViewEmployeeData = new QTableView(employeeData);
        tableViewEmployeeData->setObjectName("tableViewEmployeeData");
        tableViewEmployeeData->setGeometry(QRect(0, 0, 800, 461));
        tableViewEmployeeData->setMinimumSize(QSize(800, 0));
        tableViewEmployeeData->setMaximumSize(QSize(800, 16777215));
        tableViewEmployeeData->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        tabWidget->addTab(employeeData, QString());

        verticalLayout_2->addWidget(tabWidget);

        LogOut = new QPushButton(AdminScreen);
        LogOut->setObjectName("LogOut");
        LogOut->setGeometry(QRect(770, 30, 41, 41));
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
        frame = new QFrame(AdminScreen);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 620, 191, 41));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"border: 0;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        buttonAddData = new QPushButton(frame);
        buttonAddData->setObjectName("buttonAddData");
        buttonAddData->setGeometry(QRect(0, 0, 41, 41));
        buttonAddData->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        buttonRemoveData = new QPushButton(frame);
        buttonRemoveData->setObjectName("buttonRemoveData");
        buttonRemoveData->setGeometry(QRect(80, 0, 41, 41));
        buttonRemoveData->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        buttonUpdateData->setGeometry(QRect(150, 0, 41, 41));
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
        buttonChangePassword = new QPushButton(AdminScreen);
        buttonChangePassword->setObjectName("buttonChangePassword");
        buttonChangePassword->setGeometry(QRect(780, 620, 41, 41));
        buttonChangePassword->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"image:url(\":/images/Security.svg\");\n"
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
        searchFrame = new QFrame(AdminScreen);
        searchFrame->setObjectName("searchFrame");
        searchFrame->setGeometry(QRect(360, 600, 211, 31));
        searchFrame->setStyleSheet(QString::fromUtf8("QFrame #searchFrame {\n"
"	color: white;\n"
"	background-color: #4382EC;\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"	text-align: center;\n"
"}"));
        searchFrame->setFrameShape(QFrame::StyledPanel);
        searchFrame->setFrameShadow(QFrame::Raised);
        searchLineEdit = new QLineEdit(searchFrame);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(0, 0, 113, 31));
        searchLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color : #BBD6FD;\n"
"color: #4382EC;\n"
"border: 2px solid #4382EC;\n"
"font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:hover\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"font-weight: bolder;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"background-color : #BBD6FD;\n"
"border: 3px solid #4382EC;\n"
"color: #4382EC;\n"
"font-weight: italic;\n"
"}"));
        searchButton = new QPushButton(searchFrame);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(110, 0, 101, 31));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #4382EC;\n"
"	font-weight: bold;\n"
"	border: 2px solid #4382EC;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #4382EC;\n"
"	font-weight: bold;\n"
"	background-color: #E2EEFF;\n"
"	border: 2px solid #4382EC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: #E2EEFF;\n"
"background-color: #3569B2;\n"
"border: 3px solid #BBD6FD;\n"
"}\n"
"	"));
        clearFilter = new QPushButton(AdminScreen);
        clearFilter->setObjectName("clearFilter");
        clearFilter->setGeometry(QRect(360, 630, 211, 31));
        clearFilter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #4382EC;\n"
"	font-weight: bold;\n"
"	border: 2px solid #4382EC;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	color: #4382EC;\n"
"	font-weight: bold;\n"
"	background-color: #E2EEFF;\n"
"	border: 2px solid #4382EC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: #E2EEFF;\n"
"background-color: #3569B2;\n"
"border: 3px solid #BBD6FD;\n"
"}\n"
"	"));
        label = new QLabel(AdminScreen);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 80, 121, 18));
        label->setStyleSheet(QString::fromUtf8("QLabel#label\n"
"{\n"
"color: #BBD6FD;\n"
"};"));
        pushButton = new QPushButton(AdminScreen);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 670, 86, 26));
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

        retranslateUi(AdminScreen);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminScreen);
    } // setupUi

    void retranslateUi(QDialog *AdminScreen)
    {
        AdminScreen->setWindowTitle(QCoreApplication::translate("AdminScreen", "ADMIN PANEL", nullptr));
        buttonBack->setText(QString());
        labelAppName->setText(QCoreApplication::translate("AdminScreen", "             Super Market Management System ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(shopData), QCoreApplication::translate("AdminScreen", "Shop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(employeeData), QCoreApplication::translate("AdminScreen", "Employee", nullptr));
        LogOut->setText(QString());
        buttonAddData->setText(QString());
        buttonRemoveData->setText(QString());
        buttonUpdateData->setText(QString());
        buttonChangePassword->setText(QString());
        searchLineEdit->setPlaceholderText(QCoreApplication::translate("AdminScreen", "Search Shop ID", nullptr));
        searchButton->setText(QCoreApplication::translate("AdminScreen", "Search", nullptr));
        clearFilter->setText(QCoreApplication::translate("AdminScreen", "Clear Filter", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("AdminScreen", "Notes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminScreen: public Ui_AdminScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSCREEN_H
