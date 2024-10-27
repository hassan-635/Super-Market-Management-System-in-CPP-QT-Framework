#include <QPixmap>
#include <QDialog>

#include "login.h"
#include "adminloginform.h"
#include "employeeloginform.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SignUpWindow_clicked()
{
    this -> close();
    signUp* sign;
    sign = new signUp(this);
    sign -> show();
}


void MainWindow::on_empLogin_clicked()
{
    this->hide();
    EmployeeLoginForm* elf;
    elf = new EmployeeLoginForm(this);
    elf -> show();
}


void MainWindow::on_adminLogin_clicked()
{
    this->hide();
    AdminLoginForm* alf;
    alf = new AdminLoginForm(this);
    alf -> show();
}

