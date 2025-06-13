#include "spider.h"

Widget::Widget(QWidget *parent): QWidget(parent){
    Qt::WindowFlags x = this->windowFlags() & Qt::WindowType_Mask;
    x|= Qt::WindowCloseButtonHint | Qt::CustomizeWindowHint | Qt::WindowMinMaxButtonsHint;
    this->setWindowFlags(x);

    this->setWindowState(Qt::WindowActive);

    this->setWindowTitle(QStringLiteral("Паук"));

    //QIcon icon = this->windowIcon();
    QPalette pal;
    pal.setColor(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, QColor(255,255,255, 60));
    pal.setColor(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, QColor(0,0,0, 60));
    this->setPalette(pal);


    //qDebug() << this->palette();
}

Widget::~Widget() {}
