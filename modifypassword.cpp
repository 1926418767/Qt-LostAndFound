#include "modifypassword.h"
#include "ui_modifypassword.h"
#include "database.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QString>
#include "userdialog.h"
#include "personalcenter.h"

ModifyPassword::ModifyPassword(QWidget *parent,QString name)
    : QDialog(parent)
    , ui(new Ui::ModifyPassword)
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
    query.prepare("select password from user where accountName = ?");
    query.bindValue(0, name);
    query.exec();
    query.next();
    QString password = query.value(0).toString();
    qDebug() << "用户名为：" << name << Qt::endl << "密码为：" << password << Qt::endl;

    db.close();

    connect(ui->passwordEdit, &QLineEdit::textChanged,this,[=](){       //原始密码编辑框
        QString text = ui->passwordEdit->text();
        if(text.isEmpty())
        {
            ui->label_1->setText("!");
            ui->label_1->setStyleSheet("color:yellow;");
            return;
        }
        else if(text==password)
        {
            ui->label_1->setText("√");
            ui->label_1->setStyleSheet("color:green;");
            return;
        }
        else if(text!=password)
        {
            ui->label_1->setText("×");
            ui->label_1->setStyleSheet("color:red;");
        }
    });

    connect(ui->newPasswordEdit, &QLineEdit::textChanged,this,[=](){        //新密码编辑框
        QString text1 = ui->newPasswordEdit->text();
        QString text2 = ui->passwordAgainEdit->text();
        if(text1.isEmpty())
        {
            ui->label_2->setText("!");
            ui->label_2->setStyleSheet("color:yellow;");
        }
        else if(text1.size()>16)
        {
            ui->label_2->setText("×");
            ui->label_2->setStyleSheet("color:red;");
        }
        else if(text1==text2)
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
            ui->label_3->setText("√");
            ui->label_3->setStyleSheet("color:green;");
        }
        else if(text1!=text2&&ui->label_3->text()=="√")
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
        }
        else if(text1!=text2&&ui->label_3->text()!="√")
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
        }
    });

    connect(ui->passwordAgainEdit, &QLineEdit::textChanged,this,[=](){      //再次输入密码编辑框
        QString text1 = ui->newPasswordEdit->text();
        QString text2 = ui->passwordAgainEdit->text();
        if(text2.isEmpty())
        {
            ui->label_3->setText("!");
            ui->label_3->setStyleSheet("color:yellow;");
        }
        else if(ui->label_2->text()!="√")
        {
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
        }
        else if(text1==text2)
        {
            ui->label_3->setText("√");
            ui->label_3->setStyleSheet("color:green;");
        }
        else if(text1!=text2)
        {
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
        }
    });

    connect(ui->confirm,&QPushButton::clicked,this,[=](){               //点击确认
        if(ui->label_1->text()=="√"&&ui->label_2->text()=="√"&&ui->label_3->text()=="√")
        {
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
            query.prepare("update user set password = ? where accountName = ?");
            query.bindValue(0,ui->newPasswordEdit->text());
            query.bindValue(1,name);
            query.exec();
            QMessageBox::information(this,"成功","成功修改密码");
            this->close();

            PersonalCenter per(nullptr,name);   //返回个人中心 注释这两行这直接返回主界面
            per.exec();
        }
    });

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
        PersonalCenter per(nullptr,name);
        per.exec();
    });
}

ModifyPassword::~ModifyPassword()
{
    delete ui;
}
