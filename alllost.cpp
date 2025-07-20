#include "alllost.h"
#include "ui_alllost.h"
#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "detail.h"
#include <QPushButton>
#include <QLineEdit>


AllLost::AllLost(QWidget *parent,QString name)
    : QDialog(parent)
    , ui(new Ui::AllLost)
    ,name(name)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized);    //使窗口最大化

    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);

    //初始化表格
    QStringList list;
    list<<"id"<<"用户"<<"丢失物品"<<"丢失时间"<<"丢失地点"<<"详细信息";
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(list);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnWidth(0, 120);
    ui->tableWidget->setColumnWidth(1, 290);
    ui->tableWidget->setColumnWidth(2, 290);
    ui->tableWidget->setColumnWidth(3, 290);
    ui->tableWidget->setColumnWidth(4, 290);
    ui->tableWidget->setColumnWidth(5, 100);
    ui->tableWidget->setShowGrid(true); // 显示网格线

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
    query.exec("select * from allLost order by id desc;");
    while(query.next())
    {
        // 在表格中添加一行
        int row = ui->tableWidget->rowCount(); // 获取当前行数
        QString id=query.value(0).toString();
        QString userName=query.value(1).toString();
        QString lostThing =query.value(2).toString();
        QDate lostTime=query.value(3).toDate();
        QString place =query.value(4).toString();
        QByteArray imageData=query.value(5).toByteArray();
        QString information=query.value(6).toString();
        ui->tableWidget->insertRow(row); // 插入一行

        // 在新行中添加数据
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(id));  //id
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(userName));  //用户
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(lostThing));  //丢失物品
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(lostTime.toString("yyyy-MM-dd")));  //丢失时间
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(place));  //地点

        QPushButton *button = new QPushButton("查看详细", ui->tableWidget);
        button->setFocusPolicy(Qt::NoFocus);
        // 设置按钮到单元格中
        ui->tableWidget->setCellWidget(row, 5, button);
        //查看该条记录详细
        connect(button, &QPushButton::clicked, this, [=](){
            Detail det(this,name,lostThing,lostTime,place,information,imageData,1);
            det.exec();
        });
    }
    db.close();

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
    });

    connect(ui->pushButton,&QPushButton::clicked,this,[=](){        //修改要查询的用户名
        ui->lineEdit->setEnabled(true);
    });

    connect(ui->pushButton_2,&QPushButton::clicked,this,[=](){      //修改要查询的物品名称
        ui->lineEdit_2->setEnabled(true);
    });

    connect(ui->reset,&QPushButton::clicked,this,[=](){     //重置查询条件
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit->setEnabled(false);
        ui->lineEdit_2->setEnabled(false);
        ui->year->setValue(2005);
        ui->month->setValue(1);
        ui->day->setValue(1);
        ui->year_2->setValue(2050);
        ui->month_2->setValue(1);
        ui->day_2->setValue(1);
    });

    connect(ui->confirm,&QPushButton::clicked,this,[=](){           //进行查询
        QDate date1(ui->year->value(),ui->month->value(),ui->day->value());
        QDate date2(ui->year_2->value(),ui->month_2->value(),ui->day_2->value());
        //str形式变为 "%物%品%名%称%"
        QString text1=ui->lineEdit->text();
        QString text2=ui->lineEdit_2->text();
        QString str1="%";
        QString str2="%";
        for(QChar c:text1)
        {
            str1+=c;
            str1+="%";
        }
        for(QChar c:text2)
        {
            str2+=c;
            str2+="%";
        }

        //删除原来的所有记录
        for (int i = ui->tableWidget->rowCount() - 1; i >= 0; --i) {
            delete ui->tableWidget->item(i,5);
            ui->tableWidget->removeRow(i);
        }


        qDebug()<<"删除成功\n"<<Qt::endl;
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
        query.prepare("select * from allLost userwhere  like ? and lostThing like ? and time between ? and ? order by id desc;");
        query.addBindValue(str1);
        query.addBindValue(str2);
        query.addBindValue(date1.toString("yyyy-MM-dd"));
        query.addBindValue(date2.toString("yyyy-MM-dd"));
        query.exec();
        while(query.next())
        {
            // 在表格中添加一行
            int row = ui->tableWidget->rowCount(); // 获取当前行数
            QString id=query.value(0).toString();
            QString userName=query.value(1).toString();
            QString lostThing =query.value(2).toString();
            QDate lostTime=query.value(3).toDate();
            QString place =query.value(4).toString();
            QByteArray imageData=query.value(5).toByteArray();
            QString information=query.value(6).toString();
            ui->tableWidget->insertRow(row); // 插入一行

            // 在新行中添加数据
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(id));  //id
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(userName));  //用户
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(lostThing));  //丢失物品
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(lostTime.toString("yyyy-MM-dd")));  //丢失时间
            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(place));  //地点

            QPushButton *button = new QPushButton("查看详细", ui->tableWidget);
            button->setFocusPolicy(Qt::NoFocus);
            // 设置按钮到单元格中
            ui->tableWidget->setCellWidget(row, 5, button);
            //查看该条记录详细
            connect(button, &QPushButton::clicked, this, [=](){
                Detail det(this,name,lostThing,lostTime,place,information,imageData,1);
                det.exec();
            });
        }
        db.close();
    });


}


AllLost::~AllLost()
{
    delete ui;
}
