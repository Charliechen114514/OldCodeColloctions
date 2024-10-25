#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* widget = new QWidget(this);
    setCentralWidget(widget);
    this->setWindowTitle("Stacked Test");
    list = new QListWidget(widget);

    list->insertItem(0, tr("window1"));
    list->insertItem(1, tr("window2"));
    list->insertItem(2, tr("window3"));

    labelList.push_back(new QLabel(tr("WindowTest1")));
    labelList.push_back(new QLabel(tr("WindowTest2")));
    labelList.push_back(new QLabel(tr("WindowTest3")));

    stack = new QStackedWidget(widget);

    for(int i = 0; i < 3; i++)
       stack->addWidget(labelList[i]);
    QHBoxLayout *mainLay = new QHBoxLayout(widget);

    mainLay->setMargin(5); // 设置边距
    mainLay->setSpacing(5);
    mainLay->addWidget(list);
    mainLay->addWidget(stack,0,Qt::AlignCenter);
    mainLay->setStretchFactor(list, 1);
    mainLay->setStretchFactor(stack, 3);
    connect(list, &QListWidget::currentRowChanged, stack, &QStackedWidget::setCurrentIndex);

}

MainWindow::~MainWindow()
{

}
