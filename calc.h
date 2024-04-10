#ifndef CALC_H
#define CALC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calc;
}
QT_END_NAMESPACE

class calc : public QMainWindow
{
    Q_OBJECT

public:
    calc(QWidget *parent = nullptr);
    ~calc();

private slots:
    void on_add_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

private:
    Ui::calc *ui;
};
#endif // CALC_H
