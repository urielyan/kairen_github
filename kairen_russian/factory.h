#ifndef FACTORY_H
#define FACTORY_H

#include <QVBoxLayout>
#include <QStackedLayout>
class Factory
{
    Q_OBJECT
public:
    enum ENUMFACTORY{
        ENUM_QVBOXLAYOUT = 0,
        ENUM_QHBOXLAYOUT ,
        ENUM_QSTACKLAYOUT ,
    };

    static Factory* instance();

    //layout
    QVBoxLayout * getVBoxLayout(QWidget *parent = 0);
    QHBoxLayout * getHBoxLayout(QWidget *parent = 0);
    QHBoxLayout * getStackedLayout();

    //button
private:
    Factory(){}

};

class LayoutVertical : QVBoxLayout
{
    Q_OBJECT
public:
    LayoutVertical();

};

#endif // FACTORY_H
