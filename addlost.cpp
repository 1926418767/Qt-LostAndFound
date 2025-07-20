#include "addlost.h"
#include "ui_addlost.h"
#include "database.h"
#include <QDate>
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>

AddLost::AddLost(QWidget *parent,QString name)
    : QDialog(parent)
    , ui(new Ui::AddLost)
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

    //确定失物信息
    connect(ui->confirm,&QPushButton::clicked,this,[=](){
        if(!(ui->nameEdit->text().size()>20||ui->placeEdit->text().size()>20||ui->textEdit->toPlainText().size()>150))
        {
            int year=ui->year->value();
            int month=ui->month->value();
            int day=ui->day->value();
            QDate date(year,month,day);

            if(insertLost(name,ui->nameEdit->text(),date,ui->placeEdit->text(),ui->textEdit->toPlainText(),path))
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
                query.prepare("select lost from user where accountName=?;");
                query.bindValue(0,name);
                query.exec();
                query.next();
                int lostNum=query.value(0).toInt();
                qDebug()<<"当前失物数为"<<lostNum<<Qt::endl;
                QSqlQuery addLostNum;
                addLostNum.prepare("update user set lost = ? where accountName = ?;");
                addLostNum.bindValue(0,lostNum+1);      //传入失物数加一
                addLostNum.bindValue(1,name);
                addLostNum.exec();
                qDebug()<<"插入失物信息成功"<<Qt::endl;
                QMessageBox::information(this,"成功","发布成功！");
                this->close();
            }
            else
            {
                qDebug()<<"插入失物信息失败"<<Qt::endl;
            }
        }
    });

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

AddLost::~AddLost()
{
    delete ui;
}
