#ifndef ITEMENTRY_H
#define ITEMENTRY_H

#include <QDialog>

namespace Ui {
class ItemEntry;
}

class ItemEntry : public QDialog
{
    Q_OBJECT

public:
    explicit ItemEntry(QWidget *parent = nullptr, const QString& uname="");
    ~ItemEntry();

private slots:
    void on_buttonBack_clicked();

    void on_buttonClear_clicked();

    void on_buttonSave_clicked();

private:
    Ui::ItemEntry *ui;
};

#endif // ITEMENTRY_H
