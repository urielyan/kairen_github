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
}

