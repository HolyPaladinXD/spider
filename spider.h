#ifndef WIDGET_H
#define WIDGET_H
#include <QColorDialog>
#include <QFileDialog>

#include <QWidget>
#include <QGuiApplication>
#include<QScreen>
//TEST STRING TO CHECK WORK AT SECOND COMPUTER WITH GITHUB

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
