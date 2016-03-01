#include "factory.h"

Factory *Factory::instance()
{
    static Factory f ;
    return &f;
}

QVBoxLayout *Factory::getVBoxLayout(QWidget *parent)
{
    QVBoxLayout *tmp = new QVBoxLayout(parent);


    return tmp;
}

QHBoxLayout *Factory::getHBoxLayout(QWidget *parent = 0)
{
    QHBoxLayout *tmp = new QHBoxLayout(parent);


    return tmp;
}

QHBoxLayout *Factory::getStackedLayout(QWidget *parent)
{
    QStackedLayout *tmp = new QStackedLayout();


    return tmp;
}




LayoutVertical::LayoutVertical()
{
}
