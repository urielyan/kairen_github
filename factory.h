#ifndef FACTORY_H
#define FACTORY_H

#include <QVBoxLayout>
#include <QStackedLayout>
#include <QLabel>

class Factory : public QObject
{
    Q_OBJECT
public:
    enum ENUMFACTORY{
        ENUM_QVBOXLAYOUT = 0,
        ENUM_QHBOXLAYOUT ,
        ENUM_QSTACKLAYOUT ,
    };

    static Factory* instance();

    QLabel *getTitle(QString text, QWidget *parent = 0);

    //layout
    QVBoxLayout * getVBoxLayout(QWidget *parent = 0);
    QHBoxLayout * getHBoxLayout(QWidget *parent = 0);
    QStackedLayout * getStackedLayout();

    //button
private:
    Factory();

};


#endif // FACTORY_H
