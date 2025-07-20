#include "personalcenter.h"
#include "ui_personalcenter.h"
#include "modifypassword.h"
#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <revokelost.h>
#include <revokefound.h>

PersonalCenter::PersonalCenter(QWidget *parent,QString name)
    : QDialog(parent)
    , ui(new Ui::PersonalCenter)
    , name(name)
{
    ui->setupUi(this);

    if(db.open())   //打开数据库
    {
        qDebug()<<"数据库打开成功"<<Qt::endl;
    }
    else
    {
        qDebug()<<"数据库打开失败\nerror open database because"<<db.lastError().text();
        return;
    }
    QSqlQuery query;
    query.prepare("select lost,found from user where accountName = ?;");
    query.bindValue(0,name);
    query.exec();
    query.next();
    QString lostNum=query.value(0).toString();
    QString foundNum=query.value(1).toString();
    qDebug()<<"失去物品数为："<<lostNum<<Qt::endl<<"拾取物品数为："<<foundNum<<Qt::endl;

    ui->userName->setText(ui->userName->text()+name);
    ui->lostNum->setText(ui->lostNum->text()+lostNum);
    ui->foundNum->setText(ui->foundNum->text()+foundNum);

    connect(ui->exit,&QPushButton::clicked,this,[=](){      //用户退出
        this->close();
    });

    connect(ui->modify,&QPushButton::clicked,this,[=](){      //修改密码
        this->close();
        ModifyPassword mod(nullptr,name);
        mod.exec();
    });
}

void PersonalCenter::mousePressEvent(QMouseEvent *event)
{
    if(ui->lookLost->underMouse())      //查看全部失物
    {
        this->close();
        RevokeLost rLost(nullptr,name);
        rLost.exec();
        PersonalCenter per(nullptr,name);
        per.exec();
    }
    else if(ui->lookFound->underMouse())        //查看全部捡物
    {
        this->close();
        RevokeFound rFound(nullptr,name);
        rFound.exec();
        PersonalCenter per(nullptr,name);
        per.exec();
    }
}

PersonalCenter::~PersonalCenter()
{
    delete ui;
}
