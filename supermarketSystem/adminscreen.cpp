#include "adminscreen.h"
#include "adminloginform.h"
#include "login.h"
#include "ui_adminscreen.h"
#include "shopentry.h"
#include "shopremoval.h"
#include  "changepassword.h"
#include "otherClasses/friendFunctions.h"
#include"otherClasses/user.h"
#include"otherClasses/admin.h"
#include "otherClasses/friendFunctions.h"
#include "employeeupdate.h"
#include "notes.h"

#include <QMainWindow>
#include <QColor>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDate>

AdminScreen::AdminScreen(QWidget *parent, const QString &un)
    : QDialog(parent)
    , ui(new Ui::AdminScreen)
{

    ui->setupUi(this);
    ui->tabWidget->setTabText(0, "Shop");
    ui->tabWidget->setTabText(1, "Employee");

    // dbStatus check = connectToDatabase("QMYSQL", "127.0.0.1", 3306, "root", "", "MARKET" );

    dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

    if(status == connected)
    {

        QSqlQueryModel* querymodelEmployee;
        QSqlQueryModel* querymodelShop;

        QString uname = un;
        ui->label->setText(uname);

        qDebug()<<"Username : "<<uname;

        QString queryEmp = "SELECT E_USERNAME AS Username, E_ID AS  EmpID, S_ID AS ShopID,  E_NAME AS EmpName, E_EMAIL AS EmpEmail,  E_SALARY AS Salary, "
                           "E_HIREDATE AS HireDate  FROM EMPLOYEE_DATA WHERE A_USERNAME = '"+ uname +"';";
        QString queryShop = "SELECT S_ID AS ShopID, S_NAME AS ShopName, E_USERNAME AS 'EMPLOYEE USERNAME' FROM SHOP_DATA WHERE A_USERNAME = '"+ uname + "';";

        querymodelEmployee = new QSqlQueryModel();
        querymodelShop = new QSqlQueryModel();
        querymodelEmployee->setQuery(queryEmp);
        querymodelShop->setQuery(queryShop);

        ui->tableViewEmployeeData->setModel(querymodelEmployee);
        ui->tableViewShopData->setModel(querymodelShop);
        ui->tableViewEmployeeData->resizeColumnsToContents();
        ui->tableViewShopData->resizeColumnsToContents();
        ui->tableViewEmployeeData->show();
        ui->tableViewShopData->show();
    }
    else
    {
        QMessageBox::critical(this, "Connection Error", "Database Connection Error while fetching Data!!!");
    }

}

AdminScreen::~AdminScreen()
{
    delete ui;
}

void AdminScreen::on_buttonBack_clicked()
{
    this -> close();
    AdminLoginForm* alf;
    alf = new AdminLoginForm(this);
    alf -> show();
}


void AdminScreen::on_LogOut_clicked()
{
    this -> close();
    QMainWindow* mainwin;
    mainwin = new MainWindow(this);
    mainwin -> show();
}


void AdminScreen::on_buttonAddData_clicked()
{
    this -> close();
    ShopEntry* se;
    se = new ShopEntry(this, ui->label->text());
    se -> show();
}


void AdminScreen::on_buttonRemoveData_clicked()
{
    this -> close();
    ShopRemoval* sr;
    sr = new ShopRemoval(this, ui->label->text());
    sr -> show();
}


void AdminScreen::on_buttonChangePassword_clicked()
{
    this -> close();
    ChangePassword*  cp;
    cp = new ChangePassword(this, ui->label->text());
    cp -> show();
}



void AdminScreen::on_searchButton_clicked()
{
    QString searchedIdString = ui->searchLineEdit->text();
    bool ok;
    searchedIdString.toInt(&ok);

    if(ok)
    {
        // dbStatus status = connectToDatabase("QMYSQL", "127.0.0.1", 3306, "root", "", "MARKET");

        dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

        if(status!=connected)
        {
            QMessageBox::critical(this, "Connection Error", "Database not Connected!!!");
            ui->searchLineEdit->clear();
        }

        Admin admin;

        QString uname = ui->label->text();
        qDebug()<<"Username : "<<uname;

        QSqlQueryModel* querymodelEmployee;
        QSqlQueryModel* querymodelShop;
        QString queryEmp = "SELECT E_USERNAME AS Username, E_ID AS  EmpID, S_ID AS ShopID,  E_NAME AS EmpName, E_EMAIL AS EmpEmail,  E_SALARY AS Salary, "
                           "E_HIREDATE AS HireDate  FROM EMPLOYEE_DATA WHERE A_USERNAME = '"+ uname + "' AND S_ID = '"+ searchedIdString +"';";
        QString queryShop = "SELECT S_ID AS ShopID, S_NAME AS ShopName FROM SHOP_DATA WHERE A_USERNAME = '"+ uname + "' AND S_ID = '"+ searchedIdString +"';";

        querymodelEmployee = new QSqlQueryModel();
        querymodelShop = new QSqlQueryModel();
        querymodelEmployee->setQuery(queryEmp);
        querymodelShop->setQuery(queryShop);

        ui->tableViewEmployeeData->setModel(querymodelEmployee);
        ui->tableViewShopData->setModel(querymodelShop);
        ui->tableViewEmployeeData->resizeColumnsToContents();
        ui->tableViewShopData->resizeColumnsToContents();
        ui->tableViewEmployeeData->show();
        ui->tableViewShopData->show();
    }
}


void AdminScreen::on_clearFilter_clicked()
{

    QString un = ui->label->text();
    AdminScreen* adminscreen;
    this -> close();
    adminscreen = new AdminScreen(this, un);
    adminscreen->show();
}


void AdminScreen::on_buttonUpdateData_clicked()
{
    employeeUpdate* eu;
    this -> close();
    eu = new employeeUpdate(this, ui->label->text());
    eu -> show();
}


void AdminScreen::on_pushButton_clicked()//for notes
{
    Notes* notes;
    notes = new Notes(this);
    notes->show();
}

