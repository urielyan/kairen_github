#include "factory.h"

Factory *Factory::instance()
{
    static Factory f ;
    return &f;
}

QLabel *Factory::getTitle(QString text, QWidget *parent)
{
    QLabel *tmp = new QLabel(text, parent);
    tmp->setAlignment(Qt::AlignCenter);
    return tmp;
}

QVBoxLayout *Factory::getVBoxLayout(QWidget *parent)
{
    QVBoxLayout *tmp = new QVBoxLayout(parent);


    return tmp;
}

QHBoxLayout *Factory::getHBoxLayout(QWidget *parent)
{
    QHBoxLayout *tmp = new QHBoxLayout(parent);


    return tmp;
}

QStackedLayout *Factory::getStackedLayout()
{
    QStackedLayout *tmp = new QStackedLayout();


    return tmp;
}

Factory::Factory(){}
