#ifndef ITEMDELETE_H
#define ITEMDELETE_H

#include <QDialog>

namespace Ui {
class ItemDelete;
}

class ItemDelete : public QDialog
{
    Q_OBJECT

public:
    explicit ItemDelete(QWidget *parent = nullptr, const QString& uname = "");
    ~ItemDelete();

private slots:
    void on_buttonClear_clicked();

    void on_buttonBack_clicked();

    void on_buttonDelete_clicked();

private:
    Ui::ItemDelete *ui;
};

#endif // ITEMDELETE_H
