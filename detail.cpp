#include "detail.h"
#include "ui_detail.h"
#include <QImage>
#include <QImageReader>
#include <QBuffer>

Detail::Detail(QWidget *parent,QString userName,QString lostThing,QDate lostTime,QString place,QString information,QByteArray imageData, int i)
    : QDialog(parent)                                                                                   //i=1失物信息，i=2捡物信息
    , ui(new Ui::Detail)
{
    ui->setupUi(this);
    if(i==1)
    {
        ui->lostThing->setText("丢失物品：");
        ui->lostTime->setText("丢失时间：");
        ui->place->setText("丢失地点：");
    }
    else if(i==2)
    {
        ui->lostThing->setText("捡取物品：");
        ui->lostTime->setText("捡取时间：");
        ui->place->setText("捡取地点：");
    }

    ui->userName->setText(ui->userName->text()+userName);
    ui->lostThing->setText(ui->lostThing->text()+lostThing);
    ui->lostTime->setText(ui->lostTime->text()+lostTime.toString("yyyy-MM-dd"));
    ui->place->setText(ui->place->text()+place);

    ui->textBrowser->setPlainText(information);

    if(imageData!=nullptr)      //数据库读取的二进制数据为null，则跳过这段不显示图片，标签为默认问号
    {
        QImage image;
        QBuffer buffer(&imageData); // 将 QByteArray 转换为 QBuffer
        buffer.open(QIODevice::ReadOnly);
        QImageReader reader(&buffer); // 传入 QBuffer 对象
        if (reader.read(&image)) {
            // 显示图片
            ui->image->setPixmap(QPixmap::fromImage(image));
        } else {
            qDebug() << "图片转化失败\nError: " << reader.errorString();
        }
    }

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

Detail::~Detail()
{
    delete ui;
}
