#include "addfound.h"
#include "ui_addfound.h"
#include "database.h"
#include <QDate>
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>

AddFound::AddFound(QWidget *parent,QString name)
    : QDialog(parent)
    , ui(new Ui::AddFound)
    ,name(name)
{
    ui->setupUi(this);

    ui->userName->setText(ui->userName->text()+name);

    //选取图片
    connect(ui->pushButton,&QPushButton::clicked,this,[=](){
        path = QFileDialog ::getOpenFileName(this,"打开文件","C:\\Users\\huawei\\Pictures");
        ui->pathEdit->setText(path);
    });

    //确认图片
    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){
        if(!ui->pathEdit->text().isEmpty())
        {
            QImage image(path);
            ui->image->setPixmap(QPixmap::fromImage(image));
        }
    });

    //确定捡物信息
    connect(ui->confirm,&QPushButton::clicked,this,[=](){
        if(!(ui->nameEdit->text().size()>20||ui->placeEdit->text().size()>20||ui->textEdit->toPlainText().size()>150))
        {
            int year=ui->year->value();
            int month=ui->month->value();
            int day=ui->day->value();
            QDate date(year,month,day);

            // if(path.isEmpty())      //如果用户没有选取图片，图片就为默认的问号
            // {
            //     path="/Image/R-C.jpg";
            // }

            if(insertFound(name,ui->nameEdit->text(),date,ui->placeEdit->text(),ui->textEdit->toPlainText(),path))
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
                query.prepare("select found from user where accountName=?;");
                query.bindValue(0,name);
                query.exec();
                query.next();
                int foundNum=query.value(0).toInt();
                qDebug()<<"当前捡物数为"<<foundNum<<Qt::endl;
                QSqlQuery addfoundNum;
                addfoundNum.prepare("update user set found = ? where accountName = ?;");
                addfoundNum.bindValue(0,foundNum+1);        //传入捡物数加一
                addfoundNum.bindValue(1,name);
                addfoundNum.exec();
                qDebug()<<"插入捡物信息成功"<<Qt::endl;
                QMessageBox::information(this,"成功","发布成功！");
                this->close();
            }
            else
            {
                qDebug()<<"插入捡物信息失败"<<Qt::endl;
            }
        }
    });

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

AddFound::~AddFound()
{
    delete ui;
}
