#ifndef ITEMUPDATE_H
#define ITEMUPDATE_H

#include <QDialog>

namespace Ui {
class ItemUpdate;
}

class ItemUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit ItemUpdate(QWidget *parent = nullptr,const QString& uname = "");
    ~ItemUpdate();

private slots:
    void on_buttonBack_clicked();

    void on_buttonClear_clicked();

    void on_buttonSave_clicked();

private:
    Ui::ItemUpdate *ui;
};

#endif // ITEMUPDATE_H
