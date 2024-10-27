#include "notes.h"
#include "ui_notes.h"

#include <QFile>

Notes::Notes(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Notes)
{
    ui->setupUi(this);


    QFile File("noteAdmin.txt");
    QString strData;

    if(File.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&File);
        while(stream.atEnd() == 0)
        {
            strData  = stream.readAll();
        }
    }

    ui->textEdit->setText(strData);
}

Notes::~Notes()
{
    delete ui;
}

void Notes::on_pushButton_clicked()
{
    QFile File("noteAdmin.txt");
    QString text;
    text = ui->textEdit->toPlainText();
    if(File.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&File);
        stream<<text;
    }
    File.close();
}

