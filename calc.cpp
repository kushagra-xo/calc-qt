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
