#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include "otherClasses/user.h"

#include <QDialog>
#include <QString>

namespace Ui {
class ChangePassword;
}

class ChangePassword : public QDialog, User
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = nullptr, QString un= "");
    ~ChangePassword();

private slots:
    void on_buttonBack_clicked();

    void on_empPass_clicked();

    void on_adminPass_clicked();

private:
    Ui::ChangePassword *ui;
};

#endif // CHANGEPASSWORD_H
