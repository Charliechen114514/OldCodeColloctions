#include "dialog.h"
#include "ui_dialog.h"

const double PI = 3.1415926;
#define Area(X) (X*X*PI)


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::caculateArea()
{
    bool isAbleTransform;
    double radius = static_cast<double>(ui->lineEdit->text().toFloat(&isAbleTransform));
    if(!isAbleTransform){
        QMessageBox::critical(this,"错误！", "输入不是数字！");
        return;
    }

    ui->textBrowser->setText("面积大小：" + QString::number(Area(radius)));
}

void Dialog::on_pushButton_clicked()
{
    caculateArea();
}


void Dialog::on_lineEdit_returnPressed()
{
    caculateArea();
}
