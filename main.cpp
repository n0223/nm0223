#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <QDebug>
#include <bubblesort.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "lab3-1_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    QVector<int> vec(10);

        for(int i=0; i < 10; i++)
            vec [ i ] = rand() % 100;

        qDebug() << "原始数列："<< vec;

        BubbleSort(vec);
        //qSort(vec.begin(),vec.end());

        qDebug() << "已排序数列："<< vec;

    return a.exec();
}
