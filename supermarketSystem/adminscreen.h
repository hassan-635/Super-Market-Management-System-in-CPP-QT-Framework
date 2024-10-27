#ifndef ADMINSCREEN_H
#define ADMINSCREEN_H

#include <QDialog>

// #include "otherClasses/user.h"
#include "adminloginform.h"

namespace Ui {
class AdminScreen;
}

class AdminScreen : public QDialog
{
    Q_OBJECT

public:
    // explicit AdminScreen(QWidget *parent = nullptr);
    explicit AdminScreen(QWidget *parent = nullptr, const QString &uname = "");
    ~AdminScreen();

private slots:
    void on_buttonBack_clicked();

    void on_LogOut_clicked();

    void on_buttonAddData_clicked();

    void on_buttonRemoveData_clicked();

    void on_buttonChangePassword_clicked();

    void on_searchButton_clicked();

    void on_clearFilter_clicked();

    void on_buttonUpdateData_clicked();

    void on_pushButton_clicked();

private:
    Ui::AdminScreen* ui;
    AdminLoginForm* alf;
    AdminScreen* as;
};

#endif // ADMINSCREEN_H
