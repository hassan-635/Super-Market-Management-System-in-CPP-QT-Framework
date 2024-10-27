#ifndef EMPLOYEEUPDATE_H
#define EMPLOYEEUPDATE_H

#include <QDialog>

namespace Ui {
class employeeUpdate;
}

class employeeUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit employeeUpdate(QWidget *parent = nullptr, QString un = "");
    ~employeeUpdate();

private slots:
    void on_buttonClear_clicked();

    void on_buttonBack_clicked();

    void on_buttonSave_clicked();

private:
    Ui::employeeUpdate *ui;
};

#endif // EMPLOYEEUPDATE_H
