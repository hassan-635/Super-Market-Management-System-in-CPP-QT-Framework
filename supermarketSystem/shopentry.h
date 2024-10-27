#ifndef SHOPENTRY_H
#define SHOPENTRY_H

#include <QDialog>

namespace Ui {
class ShopEntry;
}

class ShopEntry : public QDialog
{
    Q_OBJECT

public:
    explicit ShopEntry(QWidget *parent = nullptr, const QString& un = "");
    ~ShopEntry();

private slots:
    void on_buttonBack_clicked();

    void on_buttonClear_clicked();

    void on_buttonSave_clicked();

private:
    Ui::ShopEntry *ui;
};

#endif // SHOPENTRY_H
