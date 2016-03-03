#ifndef WINMAINFRAME_H
#define WINMAINFRAME_H


#include <QFrame>
#include <QButtonGroup>
#include <QPushButton>

class WinMainFrame : public QFrame
{
    Q_OBJECT
public:
    enum enum_FRAMW{
        enum_FRAME_TEST_MEASUREMENT = 0,
        enum_FRAME_DATA_QUERY,
        enum_FRAME_SELFCHECK,
        enum_FRAME_SYSTEM_SETTINGS,
    };
    WinMainFrame();

signals:

public slots:

private:
    QButtonGroup *p_buttonGroup;

    QPushButton *p_button[6];
};

#endif // WINMAINFRAME_H
