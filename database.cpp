#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QDateTime>

//向数据库db的失物信息表中插入数据
bool insertLost(QString userName,QString lostThing,QDate lostTime,QString place,QString information,QString file)
{
    if(db.open())   //打开数据库
    {
        qDebug()<<"数据库打开成功"<<Qt::endl;
    }
    else
    {
        qDebug()<<"数据库打开失败\nerror open database because"<<db.lastError().text();
        return false;
    }
    qDebug()<<"file路径是："<<file<<Qt::endl;
    QFile imageFile(file);
    QByteArray imageData;
    QSqlQuery query;
    if (!imageFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "用户未插入图片:" << imageFile.errorString();
        query.prepare("insert into allLost(user, lostThing, time, place, information) values(?,?,?,?,?)");
    }
    else
    {
        imageData = imageFile.readAll();
        imageFile.close();
        query.prepare("insert into allLost(user, lostThing, time, place, information, img) values(?,?,?,?,?,?)");
        query.bindValue(5,imageData);
    }
    query.bindValue(0,userName);
    query.bindValue(1,lostThing);
    query.bindValue(2,lostTime);
    query.bindValue(3,place);
    query.bindValue(4,information);
    if(query.exec())
    {
        db.close();
        return true;
    }
    else
    {
        db.close();
        return false;
    }
}

//向数据库db的拾物信息表中插入数据
bool insertFound(QString userName,QString foundThing,QDate lostTime,QString place,QString information,QString file)
{
    if(db.open())   //打开数据库
    {
        qDebug()<<"数据库打开成功"<<Qt::endl;
    }
    else
    {
        qDebug()<<"数据库打开失败\nerror open database because"<<db.lastError().text();
        return false;
    }

    QFile imageFile(file);
    QByteArray imageData;
    QSqlQuery query;
    if (!imageFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "无法打开图片文件:" << imageFile.errorString();
        query.prepare("insert into allFound(user, foundThing, time, place, information) values(?,?,?,?,?)");
    }
    else
    {
        imageData = imageFile.readAll();
        imageFile.close();
        query.prepare("insert into allFound(user, foundThing, time, place, information, img) values(?,?,?,?,?,?)");
        query.bindValue(5,imageData);
    }
    query.bindValue(0,userName);
    query.bindValue(1,foundThing);
    query.bindValue(2,lostTime);
    query.bindValue(3,place);
    query.bindValue(4,information);
    if(query.exec())
    {
        db.close();
        return true;
    }
    else
    {
        db.close();
        return false;
    }
}

