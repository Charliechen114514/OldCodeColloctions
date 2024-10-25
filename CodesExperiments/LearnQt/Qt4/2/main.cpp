#include "mainwindow.h"
#include <QApplication>
#include <QSplitter>
#include <QTextEdit>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("ZYSong18030", 12);
    a.setFont(font);
    QSplitter *splitMainWindow = new QSplitter(Qt::Horizontal, 0);

    // 主分割
    QTextEdit* textLeft = new QTextEdit(QObject::tr("Left Widget"), splitMainWindow);
    textLeft->setAlignment(Qt::AlignCenter);

    // right 分割
    QSplitter* rightSplit = new QSplitter(Qt::Vertical, splitMainWindow);
    rightSplit->setOpaqueResize(false);
    QTextEdit* textUp =new QTextEdit(QObject::tr("Top Widget"), rightSplit);
    textUp->setAlignment(Qt::AlignCenter);

    QTextEdit* textDown =new QTextEdit(QObject::tr("bottom Widget"), rightSplit);
    textDown->setAlignment(Qt::AlignCenter);
    splitMainWindow->setStretchFactor(1,1);
    splitMainWindow->setWindowTitle(QObject::tr("Splitter"));
    splitMainWindow->show();

//    MainWindow w;
//    w.show();

    return a.exec();
}
