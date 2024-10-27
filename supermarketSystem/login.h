#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "signup.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SignUpWindow_clicked();

    void on_empLogin_clicked();

    void on_adminLogin_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
