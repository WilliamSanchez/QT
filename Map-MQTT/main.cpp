#include "main_map.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    main_map w;
    w.show();
    return a.exec();
}
