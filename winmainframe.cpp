#include "winmainframe.h"
#include "factory.h"
#include "winframe.h"

WinMainFrame::WinMainFrame()
{
    QVBoxLayout *p_mainVLayout = Factory::instance()->getVBoxLayout(this);
    QStackedLayout *p_statcedLayout = Factory::instance()->getStackedLayout();

    p_mainVLayout->addWidget(Factory::instance()->getTitle(tr("Main widget")));
    p_mainVLayout->addLayout(p_statcedLayout);
    p_mainVLayout->addWidget(WinBottomFrame::instance());

    p_buttonGroup = new QButtonGroup(this);

    p_button[enum_FRAME_TEST_MEASUREMENT] = Factory::instance()->getButton(tr("Test measurement"), this);
    p_button[enum_FRAME_DATA_QUERY] = Factory::instance()->getButton(tr("Data query"), this);
    p_button[enum_FRAME_SELFCHECK] = Factory::instance()->getButton(tr("Data query"), this);
    p_button[enum_FRAME_SYSTEM_SETTINGS] = Factory::instance()->getButton(tr("Data query"), this);

    for (int i = 0; i < 4; ++i) {
        p_buttonGroup->addButton(p_button[i]);
    }
}

