#ifndef EMPLOYEESCREEN_H
#define EMPLOYEESCREEN_H

#include <QDialog>

namespace Ui {
class EmployeeScreen;
}

class EmployeeScreen : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeScreen(QWidget *parent = nullptr, const QString& un="");
    ~EmployeeScreen();

private slots:
    void on_LogOut_clicked();

    void on_buttonBack_clicked();

    void on_buttonAddData_2_clicked();

    void on_buttonUpdateData_clicked();

    void on_buttonRemoveData_2_clicked();

private:
    Ui::EmployeeScreen *ui;
};

#endif // EMPLOYEESCREEN_H
