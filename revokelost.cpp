#include "revokelost.h"
#include "ui_revokelost.h"
#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "detail.h"
#include <QPushButton>
#include "getfilename.h"

RevokeLost::RevokeLost(QWidget *parent,QString name,int i)
    : QDialog(parent)
    , ui(new Ui::RevokeLost)
    ,name(name)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized);    //使窗口最大化

    if(i==2)
    {
        ui->user->setText("管理员");
        ui->label_2->setText("捡物汇总：");

        connect(ui->save, &QPushButton::clicked, this, [=]() {   //将QTableWidget中的数据导出成Excel表格
            QString path;
            qDebug()<<"开始修改路径"<<Qt::endl;
            GetFileName get(nullptr,&path);
            if(get.exec()==QDialog::Accepted)
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
                qDebug()<<"path为："<<path<<Qt::endl;
                QSqlQuery query;
                QString s="SELECT LPAD('id', 12, ' '), LPAD('user', 12, ' '), LPAD('lostThing', 12, ' '),LPAD('lostTime', 12, ' '), \
                    LPAD('lostPlace', 12, ' '),LPAD('information', 12, ' ') \
                    UNION SELECT LPAD(id, 12, ' '), LPAD(user, 12, ' '), LPAD(lostThing, 12, ' '),LPAD(time, 12, ' '),  \
                    LPAD(place, 12, ' '),LPAD(information, 12, ' ') \
                    from allLost    \
                    into outfile '" + path + "' FIELDS TERMINATED BY ',';";
                query.exec(s);

                QMessageBox::information(this,"成功","导出文件成功！");
            }
        });
    }
    else
    {
        ui->user->setText(ui->user->text()+name);

        ui->save->setVisible(false);
    }

    //初始化表格
    QStringList list;
    list<<"id"<<"用户"<<"丢失物品"<<"丢失时间"<<"丢失地点"<<"详细信息"<<"撤销记录";
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setHorizontalHeaderLabels(list);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnWidth(0, 120);
    ui->tableWidget->setColumnWidth(1, 290);
    ui->tableWidget->setColumnWidth(2, 290);
    ui->tableWidget->setColumnWidth(3, 145);
    ui->tableWidget->setColumnWidth(4, 290);
    ui->tableWidget->setColumnWidth(5, 100);
    ui->tableWidget->setColumnWidth(6, 100);
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
    query.prepare("select * from allLost where user like ? order by id desc;");      //这里使用like与=作用相同  而且便于管理员传入%得到全部信息
    query.addBindValue(name);
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
            Detail det(this,userName,lostThing,lostTime,place,information,imageData,1);
            det.exec();
        });

        //撤销该条记录
        QPushButton *button_2 = new QPushButton("撤销记录", ui->tableWidget);
        button->setFocusPolicy(Qt::NoFocus);
        // 设置按钮到单元格中
        ui->tableWidget->setCellWidget(row, 6, button_2);
        //撤销这条记录
        connect(button_2, &QPushButton::clicked, this, [=](){
            if(QMessageBox::No == QMessageBox::question(this,"确认","确认是否删除该条记录？",QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes))
            {
                return;
            }
            db.open();
            QSqlQuery query;        //删除数据库中的数据
            query.prepare("delete from allLost where id = ?;");
            query.addBindValue(id.toInt());
            query.exec();
            qDebug()<<"删除的id为："<<id.toInt()<<Qt::endl;

            QSqlQuery query_2;      //得到用户原来失物数
            query_2.prepare("select lost from user where accountName = ?;");
            query_2.addBindValue(userName);
            query_2.exec();
            query_2.next();
            int lostNum=query_2.value(0).toInt()-1;     //失物数减一
            qDebug()<<"当前失物数为："<<lostNum+1<<Qt::endl;

            QSqlQuery query_3;      //修改数据库中用户的失物数
            query_3.prepare("update user set lost = ? where accountName = ?;");
            query_3.addBindValue(lostNum);
            query_3.addBindValue(userName);
            query_3.exec();
            qDebug()<<"修改成功\n";
            db.close();

            //删除表格中的记录
            for (int i = ui->tableWidget->rowCount() - 1; i >= 0; --i) {
                if(ui->tableWidget->item(i,0)->text()==id)
                {
                    delete ui->tableWidget->item(row,5);
                    delete ui->tableWidget->item(row,6);
                    ui->tableWidget->removeRow(i);
                }
            }
            QMessageBox::information(this,"提示","撤销成功");
        });
    }
    db.close();

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

RevokeLost::~RevokeLost()
{
    delete ui;
}
