#include "winmainframe.h"
#include "factory.h"
#include "winframe.h"

WinMainFrame::WinMainFrame()
{
    p_statcedLayout = Factory::instance()->getStackedLayout();

    QVBoxLayout *p_mainVLayout = Factory::instance()->getVBoxLayout(this);

    p_mainVLayout->addWidget(Factory::instance()->getTitle(tr("Main widget")));
    p_mainVLayout->addLayout(p_statcedLayout);
    p_mainVLayout->addWidget(WinBottomFrame::instance());

    p_buttonGroup = new QButtonGroup(this);

    p_button[enum_FRAME_TEST_MEASUREMENT] = Factory::instance()->getButton(tr("Test measurement"), this);
    p_button[enum_FRAME_DATA_QUERY] = Factory::instance()->getButton(tr("Data query"), this);
    p_button[enum_FRAME_SELFCHECK] = Factory::instance()->getButton(tr("Self check"), this);
    p_button[enum_FRAME_SYSTEM_SETTINGS] = Factory::instance()->getButton(tr("System settings"), this);

    for (int i = 0; i < 4; ++i) {
        p_buttonGroup->addButton(p_button[i]);
    }


    QHBoxLayout *p_stackTop = Factory::instance()->getHBoxLayout();
    p_stackTop->addWidget(p_button[enum_FRAME_TEST_MEASUREMENT]);
    p_stackTop->addWidget(p_button[enum_FRAME_DATA_QUERY]);

    QHBoxLayout *p_stackBottom = Factory::instance()->getHBoxLayout();
    p_stackBottom->addWidget(p_button[enum_FRAME_SYSTEM_SETTINGS]);
    p_stackBottom->addWidget(p_button[enum_FRAME_SELFCHECK]);

    QFrame *p_mainFrame = new QFrame(this);
    QVBoxLayout *p_vBoxLayout = Factory::instance()->getVBoxLayout(p_mainFrame);
    p_vBoxLayout->addLayout(p_stackTop);
    p_vBoxLayout->addLayout(p_stackBottom);

    p_statcedLayout->addWidget(p_mainFrame);
    setCurrentWidget(p_mainFrame);
}

void WinMainFrame::setCurrentWidget(QWidget *widget)
{
    p_statcedLayout->setCurrentWidget(widget);
}

