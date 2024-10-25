#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("DockWindows"));
    QTextEdit* text = new QTextEdit(this);
    text->setText(tr("Main Windows"));
    text->setAlignment(Qt::AlignCenter);
    setCentralWidget(text);
    // Dock1
    QDockWidget* dock = new QDockWidget(tr("Dock1"), this);

    dock->setFeatures(QDockWidget::DockWidgetMovable);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea| Qt::RightDockWidgetArea);

    QTextEdit* text1 = new QTextEdit();
    text1->setText(tr("Window1, the dock widget can be moved between docks by the user"));
    dock->setWidget(text1);
    addDockWidget(Qt::RightDockWidgetArea, dock);

    QDockWidget* dock1 = new QDockWidget(tr("DockWindow2"),this);\
    dock1->setFeatures(QDockWidget::DockWidgetFloatable | QDockWidget::DockWidgetClosable);
    QTextEdit* text2 = new QTextEdit();
    text2->setText(tr("Windows2, the dock widget can be detached from the mainWindow, and floated as an independent window"));
    dock1->setWidget(text2);
    addDockWidget(Qt::RightDockWidgetArea, dock1);

    QDockWidget* dock2 = new QDockWidget(tr("DockWindow2"),this);
    dock2->setFeatures(QDockWidget::AllDockWidgetFeatures);
    QTextEdit* text3 = new QTextEdit();
    text2->setText(tr("Windows2, the dock widget can be detached from the mainWindow, and floated as an independent window"));
    dock1->setWidget(text3);
    addDockWidget(Qt::RightDockWidgetArea, dock2);

}

MainWindow::~MainWindow()
{

}
