#ifndef WINMAINFRAME_H
#define WINMAINFRAME_H


#include <QFrame>
#include <QButtonGroup>
#include <QPushButton>
#include <QStackedLayout>

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

    void setCurrentWidget(QWidget *widget);

signals:

public slots:

private:
    QButtonGroup *p_buttonGroup;

    QPushButton *p_button[6];

    QStackedLayout *p_statcedLayout;
};

#endif // WINMAINFRAME_H
