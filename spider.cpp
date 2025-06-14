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
    this->setWindowOpacity(0.60);



    //qDebug() << this->palette();
}

Widget::~Widget() {}
