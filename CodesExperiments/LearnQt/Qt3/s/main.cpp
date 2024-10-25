#include <QCoreApplication>
#include <QList>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> myList;
    for(int i = 0; i < 10; i++)
    {
        QString tmp = "this is number: " + QString::number(i);
        myList << tmp;
    }

    for (int i = 0; i < myList.size();i++) {
        qDebug () << myList[i];
    }



    return a.exec();
}
