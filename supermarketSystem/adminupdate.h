#ifndef ADMINUPDATE_H
#define ADMINUPDATE_H

#include <QDialog>

namespace Ui {
class adminUpdate;
}

class adminUpdate : public QDialog
{
    Q_OBJECT

public:
    explicit adminUpdate(QWidget *parent = nullptr);
    ~adminUpdate();

private:
    Ui::adminUpdate *ui;
};

#endif // ADMINUPDATE_H
