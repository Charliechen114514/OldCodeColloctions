#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QKeyEvent>
#include <QMessageBox>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    void caculateArea();
    ~Dialog();

private slots:
    void on_pushButton_clicked();
    void on_lineEdit_returnPressed();

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H
