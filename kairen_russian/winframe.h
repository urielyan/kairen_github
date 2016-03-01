#ifndef WINFRAME_H
#define WINFRAME_H

#include <QObject>
#include <QFrame>

class WinFrame : public QFrame
{
    Q_OBJECT
public:
    WinFrame();

signals:

public slots:
};

class WinBottomFrame : public WinFrame
{
    Q_OBJECT
public:
    WinBottomFrame();
};

#endif // WINFRAME_H
