#ifndef EMPLOYEELOGINFORM_H
#define EMPLOYEELOGINFORM_H

#include <QDialog>
#include <QMainWindow>

namespace Ui {
class EmployeeLoginForm;
}

class EmployeeLoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit EmployeeLoginForm(QWidget *parent = nullptr);
    ~EmployeeLoginForm();

private slots:
    void on_buttonBack_clicked();

    void on_ButtonLogIn_clicked();

private:
    Ui::EmployeeLoginForm *ui;
    // QMainWindow* mainwin;
};

#endif // EMPLOYEELOGINFORM_H
