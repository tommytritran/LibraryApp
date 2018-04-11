#include "main.h"

string dbConnect() {

      QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
      db.setHostName("student.cs.hioa.no");
      db.setDatabaseName("s315613");
      db.setUserName("s315613");
      db.setPassword("");
      if(db.open()) {

          return "ok";

      } else {

          qDebug() << db.lastError().text();
          return "faen";

      }

}

void testQuery() {

//    dbConnect();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("student.cs.hioa.no");
    db.setDatabaseName("s315613");
    db.setUserName("s315613");
    db.setPassword("");
    if(db.open()) {

        cout << "ok" << endl;

    } else {

        qDebug() << db.lastError().text();
        cout << "faen" << endl;

    }

    QSqlQuery query("SELECT * FROM Library");
    QSqlQuery query2("SELECT * FROM Patron");

    while (query.next()) {
            for(int i = 0; i <= query.size(); i++) {
                QString segment = query.value(i).toString();
                qDebug() << segment;
            }
    }

    db.close();

}
