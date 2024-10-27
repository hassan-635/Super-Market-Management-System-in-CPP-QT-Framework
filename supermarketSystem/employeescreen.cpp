#include "employeescreen.h"
#include "login.h"
#include "employeeloginform.h"
#include "ui_employeescreen.h"
#include"itementry.h"
#include "itemupdate.h"
#include "itemdelete.h"
#include "otherClasses/friendFunctions.h"

#include <QMainWindow>
#include <QColor>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDate>

EmployeeScreen::EmployeeScreen(QWidget *parent, const QString& un)
    : QDialog(parent)
    , ui(new Ui::EmployeeScreen)
{
    ui->setupUi(this);

    // dbStatus check = connectToDatabase("QMYSQL", "127.0.0.1", 3306, "root", "", "MARKET" );

    dbStatus status = connectToDatabase("QSQLITE", "D:/SuperMarket v1.6 (1)/SuperMarket/supermarketSystem/Database/market.db");

    if(status == connected)
    {

        QSqlQueryModel* querymodel;


        QString uname = un;
        ui->label->setText(uname);

        qDebug()<<"Username : "<<uname;

        QString query = "SELECT I_CODE AS ItemCode, I_ID AS  ItemID, I_NAME AS ItemName,  I_QUANTITY  AS Quantity, I_PRICE AS ItemPrice,  I_PRICE*I_QUANTITY AS ItemPricePerQuantity "
                           "FROM ITEMS_DATA WHERE E_USERNAME ='" + uname + "' ;";

        querymodel = new QSqlQueryModel();
        querymodel->setQuery(query);

        ui->tableViewItems->setModel(querymodel);
        ui->tableViewItems->resizeColumnsToContents();
        ui->tableViewItems->show();
    }
    else
    {
        QMessageBox::critical(this, "Connection Error", "Database Connection Error while fetching Data!!!");
    }
}

EmployeeScreen::~EmployeeScreen()
{
    delete ui;
}

void EmployeeScreen::on_LogOut_clicked()
{
    this -> close();
    QMainWindow* mainwin;
    mainwin = new MainWindow(this);
    mainwin -> show();
}


void EmployeeScreen::on_buttonBack_clicked()
{
    this -> close();
    EmployeeLoginForm* elf;
    elf = new EmployeeLoginForm(this);
    elf -> show();
}


void EmployeeScreen::on_buttonAddData_2_clicked()
{
    this -> close();
    ItemEntry* ie;
    ie = new ItemEntry(this, ui->label->text());
    ie -> show();
}


void EmployeeScreen::on_buttonUpdateData_clicked()
{
    this -> close();
    ItemUpdate* iu;
    iu = new ItemUpdate(this, ui->label->text());
    iu -> show();
}


void EmployeeScreen::on_buttonRemoveData_2_clicked()
{
    this -> close();
    ItemDelete* id;
    id = new ItemDelete(this, ui->label->text());
    id -> show();
}

