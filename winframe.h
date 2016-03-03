#ifndef WINFRAME_H
#define WINFRAME_H

#include <QObject>
#include <QFrame>
#include <QLabel>

class WinAbstractFrame : public QFrame
{
    Q_OBJECT
public:
    WinAbstractFrame(QWidget *parent = 0);

signals:

public slots:
};

class WinBottomFrame : public WinAbstractFrame
{
    Q_OBJECT

    enum ENUM_LABEL
    {
        enum_SAMPLE = 0,
        enum_PREHEAT_ALARM,
        enum_DATETIME,
    };
public:
    static WinBottomFrame* instance();
    static QString stat_str_Reference, stat_str_test;
    void setSampleLabelText(QString text = "");

private slots:
    void update_time();
    void updataPreheatAlarm();

private:
    WinBottomFrame(QWidget *parent = 0);

    QLabel* p_label[3];
};



#endif // WINFRAME_H
