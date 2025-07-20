#include "alluser.h"
#include "ui_alluser.h"
#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
#include <QFileDialog>
#include "personalcentera.h"
#include "getfilename.h"

AllUser::AllUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AllUser)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized);    //使窗口最大化

    ui->lineEdit->setEnabled(false);

    QStringList list;
    list<<"用户"<<"丢失数量"<<"捡取数量"<<"重置密码"<<"详细信息";
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(list);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnWidth(0, 300);
    ui->tableWidget->setColumnWidth(1, 300);
    ui->tableWidget->setColumnWidth(2, 300);
    ui->tableWidget->setColumnWidth(3, 100);
    ui->tableWidget->setColumnWidth(4, 100);
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
    query.exec("select accountName,lost,found from user;");
    while(query.next())
    {
        // 在表格中添加一行
        int row = ui->tableWidget->rowCount(); // 获取当前行数
        QString userName=query.value(0).toString();
        QString lostNum =query.value(1).toString();
        QString foundNum=query.value(2).toString();
        ui->tableWidget->insertRow(row); // 插入一行

        // 在新行中添加数据
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(userName));  //用户
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(lostNum));  //丢失数量
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(foundNum));  //捡取数量

        QPushButton *button = new QPushButton("重置密码", ui->tableWidget);
        QPushButton *button_2 = new QPushButton("详细信息", ui->tableWidget);
        button->setFocusPolicy(Qt::NoFocus);
        button_2->setFocusPolicy(Qt::NoFocus);
        // 设置按钮到单元格中
        ui->tableWidget->setCellWidget(row, 3, button);
        ui->tableWidget->setCellWidget(row, 4, button_2);
        //重置密码
        connect(button, &QPushButton::clicked, this, [=](){
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
            query.prepare("update user set password = '123456' where accountName = ? ;");
            query.addBindValue(userName);
            query.exec();
            qDebug()<<"修改密码的用户名为："<<userName<<Qt::endl;
            QMessageBox::information(this,"成功","成功重置密码为123456");
            db.close();
        });
        //显示详细信息
        connect(button_2, &QPushButton::clicked, this, [=](){
            this->setEnabled(false);
            PersonalCenterA per(nullptr,userName);
            per.exec();
            this->setEnabled(true);
        });
    }
    db.close();

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
    });

    connect(ui->pushButton,&QPushButton::clicked,this,[=](){        //修改要查询的用户名
        ui->lineEdit->setEnabled(true);
    });

    connect(ui->reset,&QPushButton::clicked,this,[=](){     //重置查询条件
        ui->lineEdit->clear();
        ui->lineEdit->setEnabled(false);
    });

    connect(ui->confirm,&QPushButton::clicked,this,[=](){           //进行查询
        //str形式变为 "%物%品%名%称%"
        QString text=ui->lineEdit->text();
        QString str="%";
        for(QChar c:text)
        {
            str+=c;
            str+="%";
        }

        //删除原来的所有记录
        for (int i = ui->tableWidget->rowCount() - 1; i >= 0; --i) {
            delete ui->tableWidget->item(i,3);      //释放按钮内存
            delete ui->tableWidget->item(i,4);
            ui->tableWidget->removeRow(i);
        }

        qDebug()<<"删除成功"<<Qt::endl;
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
        query.prepare("select accountName,lost,found from user where accountName like ? ;");
        qDebug()<<"str为："<<str<<Qt::endl;
        query.addBindValue(str);
        query.exec();
        while(query.next())
        {
            // 在表格中添加一行
            int row = ui->tableWidget->rowCount(); // 获取当前行数
            QString userName=query.value(0).toString();
            QString lostNum =query.value(1).toString();
            QString foundNum=query.value(2).toString();
            ui->tableWidget->insertRow(row); // 插入一行

            // 在新行中添加数据
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(userName));  //用户
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(lostNum));  //丢失数量
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(foundNum));  //捡取数量

            QPushButton *button = new QPushButton("重置密码", ui->tableWidget);
            QPushButton *button_2 = new QPushButton("详细信息", ui->tableWidget);
            button->setFocusPolicy(Qt::NoFocus);
            button_2->setFocusPolicy(Qt::NoFocus);
            // 设置按钮到单元格中
            ui->tableWidget->setCellWidget(row, 3, button);
            ui->tableWidget->setCellWidget(row, 4, button_2);
            //重置密码
            connect(button, &QPushButton::clicked, this, [=](){
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
                query.prepare("update user set password = '123456' where accountName = ? ;");
                query.addBindValue(userName);
                QMessageBox::information(this,"成功","重置密码成功");
                db.close();
            });
            //显示详细信息
            connect(button_2, &QPushButton::clicked, this, [=](){
                this->setEnabled(false);
                PersonalCenterA per(nullptr,userName);
                per.exec();
                this->setEnabled(true);
            });
        }
        db.close();
    });

    connect(ui->save, &QPushButton::clicked, this, [=]() {   //将QTableWidget中的数据导出成Excel表格
        QString text=ui->lineEdit->text();
        QString str="%";
        for(QChar c:text)
        {
            str+=c;
            str+="%";
        }
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
            qDebug()<<"str为："<<str<<Qt::endl;
            QSqlQuery query;
            // query.prepare("SELECT LPAD('用户名', 12, ' '), LPAD('失物数', 12, ' '), LPAD('捡物数', 12, ' ') \
            //               UNION SELECT LPAD(accountName, 12, ' '), LPAD(lost, 12, ' '), LPAD(found, 12, ' ')  \
            //               from user where accountName like ? \
            //               into outfile ? FIELDS TERMINATED BY ',';");
            // query.addBindValue(str);
            // query.addBindValue(path);
            // query.exec();
            QString s="SELECT LPAD('userName', 12, ' '), LPAD('lostNum', 12, ' '), LPAD('foundNum', 12, ' ')   \
                UNION SELECT LPAD(accountName, 12, ' '), LPAD(lost, 12, ' '), LPAD(found, 12, ' ')  \
                from user where accountName like '" + str +    \
                "' into outfile '" + path + "' FIELDS TERMINATED BY ',';";
            qDebug()<<"s为"<<s<<Qt::endl;
            query.exec(s);
            QMessageBox::information(this,"成功","导出文件成功！");
        }
    });
}

AllUser::~AllUser()
{
    delete ui;
}
