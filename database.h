#ifndef DATABASE_H
#define DATABASE_H
#include <QSqlDatabase>
#include <QString>
#include <QDate>

extern QSqlDatabase db;

//向数据库的失物信息表插入信息
bool insertLost(QString userName,QString lostThing,QDate time,QString place,QString information,QString file=nullptr);

//向数据库的拾物信息表插入信息
bool insertFound(QString userName,QString foundThing,QDate time,QString place,QString information,QString file=nullptr);

#endif // DATABASE_H
