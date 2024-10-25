#include <QCoreApplication>
#include <QString>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString str1("Welcome ");
    QString str2 = "Qt!";

    qDebug() << str1 + str2;

    QString str;
    str.append(str1);
    str.append(str2);

    qDebug() << str;

    QString Str;
    Str.sprintf("%s","str1");

    qDebug() << Str;

    Str.sprintf("%s","str2");

    qDebug() << Str;

    Str.sprintf("%s %s","str1", "str2");

    qDebug() << Str;

    // arg
    QString argtest;
    argtest = QString("%1 was in %2").arg("Charlie").arg("cc");

    qDebug() << argtest;

    if(argtest.startsWith("charlie",Qt::CaseInsensitive))
        qDebug() << " yep ";

    if(argtest.startsWith("Charlie",Qt::CaseInsensitive))
        qDebug() << " yep ";

    qDebug() << "We see that in Qt::CaseInsensitive mode, both judgement can be true";

    if(!argtest.startsWith("charlie",Qt::CaseSensitive))
        qDebug() << " nope ";

    if(argtest.startsWith("Charlie",Qt::CaseSensitive))
        qDebug() << " yep ";

    qDebug() << "but CaseSensitive don't";

    QString strN = "125";
    bool ok;
    int dec = strN.toInt(&ok);
    if(!ok)
        qDebug() << "Failed to translate";
    else
        qDebug() << dec;

    return a.exec();
}
