#ifndef ADMINLOGINFORM_H
#define ADMINLOGINFORM_H

#include <QDialog>
#include<QMainWindow>

namespace Ui {
class AdminLoginForm;
}

class AdminLoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLoginForm(QWidget *parent = nullptr);
    ~AdminLoginForm();

private slots:
    void on_buttonBack_clicked();
    void on_ButtonLogInAdmin_clicked();

private:
    Ui::AdminLoginForm *ui;
    AdminLoginForm* alf;
    QMainWindow* mainwin;
    QString unameAdmin;

};

#endif // ADMINLOGINFORM_H
