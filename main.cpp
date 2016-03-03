#include <QApplication>

#include "winmainframe.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WinMainFrame w;
    w.show();

    return a.exec();
}
