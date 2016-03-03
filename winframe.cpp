#include "winframe.h"
#include "factory.h"
#include <QTimer>
#include <QDateTime>
#include <QDebug>

WinAbstractFrame::WinAbstractFrame(QWidget *parent) : QFrame(parent)
{

}

QString WinBottomFrame::stat_str_Reference = QString(tr("Reference on measurement location"));
QString WinBottomFrame::stat_str_test = QString(tr("test on measurement location"));
WinBottomFrame *WinBottomFrame::instance()
{
    static WinBottomFrame tmp ;
    return &tmp;
}

WinBottomFrame::WinBottomFrame(QWidget *parent) : WinAbstractFrame(parent)
{
    QHBoxLayout *p_mainHLayout = Factory::instance()->getHBoxLayout(this);

    for(int i = 0; i < 3; i++)
    {
        p_label[i] = new QLabel(this);
        p_mainHLayout->addWidget(p_label[i]);
    }

    //Date Time
    p_label[enum_DATETIME]->setText(QDateTime::currentDateTime().toString("yyyy.MM.dd  hh:mm:ss"));
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update_time()));
    timer->start(1000);

    //SAMPLE
    p_label[enum_SAMPLE]->setText(stat_str_Reference);

    //PREHEAT
    QTimer *timer2 = new QTimer(this);
    connect(timer2, SIGNAL(timeout()), this, SLOT(updataPreheatAlarm()));
    timer2->start(1000 * 60);//1 minute once
    p_label[enum_PREHEAT_ALARM]->setText(QString(tr("Current preheat time remainint ") + QString::number(30) + QString(tr(" minute"))));

}

void WinBottomFrame::update_time()
{
    p_label[enum_DATETIME]->setText(QDateTime::currentDateTime().toString("yyyy.MM.dd  hh:mm:ss"));
}

void WinBottomFrame::updataPreheatAlarm()
{
    qDebug() << "test";
    static int preheatTime = 30;
    if(0 == preheatTime)
    {
        static_cast<QTimer>(this->sender()).stop();
        return;
    }
    p_label[enum_PREHEAT_ALARM]->setText(QString(tr("Current preheat time remainint ") + QString::number(preheatTime--) + QString(tr(" minute"))));

}

void WinBottomFrame::setSampleLabelText(QString text)
{
    p_label[enum_SAMPLE]->setText(text);
}
