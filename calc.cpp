#include "calc.h"
#include "ui_calc.h"

calc::calc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calc)
{
    ui->setupUi(this);
}

calc::~calc()
{
    delete ui;
}
int64_t num1{0};
int64_t num2{0};
int64_t result{0};

void calc::on_add_clicked()
{
    num1 = ui->num1content->text().toInt();
    num2 = ui->num2content->text().toInt();
    result = num1 + num2;
    ui->resultcontent->setText(QString::number(result));
}


void calc::on_sub_clicked()
{
    num1 = ui->num1content->text().toInt();
    num2 = ui->num2content->text().toInt();
    result = num1 - num2;
    ui->resultcontent->setText(QString::number(result));

}

void calc::on_mul_clicked()
{
    num1 = ui->num1content->text().toInt();
    num2 = ui->num2content->text().toInt();
    result = num1 * num2;
    ui->resultcontent->setText(QString::number(result));

}


void calc::on_div_clicked()
{
    num1 = ui->num1content->text().toInt();
    num2 = ui->num2content->text().toInt();
    result = num1 / num2;
    ui->resultcontent->setText(QString::number(result));

}

