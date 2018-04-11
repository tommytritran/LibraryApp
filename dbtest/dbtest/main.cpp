#include "main.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    cout << dbConnect();
    testQuery();
    return a.exec();
}
