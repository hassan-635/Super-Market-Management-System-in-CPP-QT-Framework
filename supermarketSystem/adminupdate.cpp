#include "adminupdate.h"
#include "ui_adminupdate.h"

adminUpdate::adminUpdate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminUpdate)
{
    ui->setupUi(this);
}

adminUpdate::~adminUpdate()
{
    delete ui;
}
