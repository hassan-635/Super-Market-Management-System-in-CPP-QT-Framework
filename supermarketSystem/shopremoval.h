#ifndef SHOPREMOVAL_H
#define SHOPREMOVAL_H

#include <QDialog>

namespace Ui {
class ShopRemoval;
}

class ShopRemoval : public QDialog
{
    Q_OBJECT

public:
    explicit ShopRemoval(QWidget *parent = nullptr, const QString& un = "");
    ~ShopRemoval();

private slots:
    void on_buttonBack_clicked();

    void on_buttonClear_clicked();

    void on_buttonDelete_clicked();

private:
    Ui::ShopRemoval *ui;
};

#endif // SHOPREMOVAL_H
