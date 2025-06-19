#include "spider.h"

Widget::Widget(QWidget *parent): QWidget(parent){
    Qt::WindowFlags x = this->windowFlags() & Qt::WindowType_Mask;
    x|= Qt::WindowCloseButtonHint | Qt::CustomizeWindowHint | Qt::WindowMinMaxButtonsHint;
    this->setWindowFlags(x);

    this->setWindowState(Qt::WindowActive);

    this->setWindowTitle(QStringLiteral("Паук"));

    //QIcon icon = this->windowIcon();
    QPalette pal;
    pal.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, QBrush(QColor(48,172,220,120),Qt::SolidPattern));
    pal.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, QBrush(QPixmap("D:/Qt_projects/spider/images/Water lilies.jpg")));
    this->setPalette(pal);
    this->setWindowOpacity(1);

    //Получение размеров и положения:
    //Рамка учитывается
    qDebug() << this->x();
    qDebug() << this->y();
    qDebug() << this->pos();//точка
    qDebug() << this->frameGeometry();//точка + размер
    qDebug() << this->frameSize(); //размер

    //Рамка не учитывается
    qDebug() << this->geometry(); //точка + размер
    qDebug() << this->size(); //размер
    qDebug() << this->width();
    qDebug() << this->height();
    qDebug() << this->rect();//точка начала виджета без рамки, размер

    //Установка размеров и положения:
    this->move(500,500);
    this->resize(1000,500);//Изменяет размер виджета

    //Получение указателя на виджет экрана
    qDebug() << QGuiApplication::primaryScreen()->availableGeometry();
    //this->setGeometry();
    //qDebug() << QGuiApplication::primaryScreen()->availableGeometry().center();
    QRect sz = QGuiApplication::primaryScreen()->availableGeometry();
    qDebug() << sz;
    //this->setMaximumSize(sz.center().rx(), sz.center().ry());
    //setMinimumSize(640,480);
    this->setFixedSize(QPixmap("D:/Qt_projects/spider/images/Water lilies.jpg").size());
    this->move(sz.center());
    this->setCursor(Qt::BusyCursor);
    //this->setMinimumSize();






}

Widget::~Widget() {}
