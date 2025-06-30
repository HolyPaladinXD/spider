#include "spider.h"
#include <QTranslator>
#include <QLibraryInfo>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    QString filespec("spider_");
    filespec += QLocale::system().name();

    translator.load(filespec,"D:/Qt_projects/spider/");

    QTranslator translator1;
    translator1.load("qt_"+ QLocale::system().name(), QLibraryInfo::path(QLibraryInfo::TranslationsPath));
    QApplication::installTranslator(&translator1);
    QApplication::installTranslator(&translator);
    Widget w;
    w.show();
    return a.exec();
}
