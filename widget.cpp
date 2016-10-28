#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_4_clicked()
{
    int val = ui->label_2->text().toInt(nullptr,10);
    val += 10;
    ui->label_2->setText(QVariant(val).toString());
}

void Widget::on_pushButton_5_clicked()
{
    int val = ui->label_2->text().toInt(nullptr,10);
    val += 50;
    ui->label_2->setText(QVariant(val).toString());
}

void Widget::on_pushButton_6_clicked()
{
    int val = ui->label_2->text().toInt(nullptr,10);
    val += 100;
    ui->label_2->setText(QVariant(val).toString());
}

void Widget::on_pushButton_clicked()
{
    int val = ui->label_2->text().toInt(nullptr,10);
    if(val < 200){
        QMessageBox::information(this, "Warning", "No Money...");
        return;
    }

    val -= 200;
    ui->label_2->setText(QVariant(val).toString());
}

void Widget::on_pushButton_2_clicked()
{
    int val = ui->label_2->text().toInt(nullptr,10);
    if(val < 150){
        QMessageBox::information(this, "Warning", "No Money...");
        return;
    }

    val -= 150;
    ui->label_2->setText(QVariant(val).toString());
}

void Widget::on_pushButton_3_clicked()
{
    int val = ui->label_2->text().toInt(nullptr,10);
    if(val < 100){
        QMessageBox::information(this, "Warning", "No Money...");
        return;}

    val -= 100;
    ui->label_2->setText(QVariant(val).toString());
}


void Widget::on_pushButton_8_clicked()
{
    int return_money = 0;
    int val = ui->label_2->text().toInt(nullptr,10);
    return_money = val ;
    val = 0;
    ui->label_2->setText(QVariant(val).toString());
    QMessageBox::information(this, "Return", QVariant(return_money).toString());

}
