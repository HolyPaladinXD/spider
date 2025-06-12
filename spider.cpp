#include "spider.h"

Widget::Widget(QWidget *parent): QWidget(parent){
    Qt::WindowFlags x = this->windowFlags() & Qt::WindowType_Mask;
    x|= Qt::WindowCloseButtonHint | Qt::CustomizeWindowHint | Qt::WindowMinMaxButtonsHint;
    this->setWindowFlags(x);

    this->setWindowState(Qt::WindowActive);

    this->setWindowTitle(QStringLiteral("Паук"));

    //QIcon icon = this->windowIcon();

    qDebug() << this->windowIcon();
}

Widget::~Widget() {}
