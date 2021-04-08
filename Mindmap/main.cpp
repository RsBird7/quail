#include "mindmap.h"

#include <QApplication>
#include <QtGui>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mindmap mindmap;
    mindmap.show();
    return a.exec();
}
