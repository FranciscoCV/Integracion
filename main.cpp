#include "integracion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Integracion w;
    w.show();

    return a.exec();
}
