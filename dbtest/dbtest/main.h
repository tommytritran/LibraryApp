#ifndef MAIN_H
#define MAIN_H

#include <QtSql/QSqlDatabase>
#include <string>
#include <iostream>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

using namespace std;

string dbConnect();
void testQuery();

#endif // MAIN_H
