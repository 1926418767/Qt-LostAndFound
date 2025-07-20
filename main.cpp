#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include "database.h"
#include "Login.h"
#include "register.h"
#include <QMessageBox>

QSqlDatabase db;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("1");
    db.setUserName("root");
    db.setPassword("");

    // AllLost alost(nullptr,"1");
    // alost.exec();

    // UserDialog wUser;
    // return wUser.exec();

    while(1)
    {
        Login l;
        int choice = l.exec(); //退出返回0，重新登录返回1,注册返回2
        if(choice==QDialog::Rejected)   //退出了登录界面
        {
            return 0;
        }

        else if(choice==1)
        {
            continue;       //重新登录
        }
        else if(choice==2)  //用户注册
        {
            Register reg;
            if(reg.exec()==QDialog::Accepted)   //注册成功与返回登录exec()均返回Accepted，否则返回0
            {
                continue;   //重新进入登录界面
            }
        }
        break;

        //输出可用数据库
        // qDebug()<<"available drivers:";
        // QStringList drivers = QSqlDatabase::drivers();
        // foreach(QString driver, drivers)
        //     qDebug()<<driver;

        // QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        // db.setHostName("127.0.0.1");
        // db.setPort(3306);
        // db.setDatabaseName("test1");
        // db.setUserName("root");
        // db.setPassword("");
        // bool ok = db.open();
        // if (ok){
        //     QMessageBox::information(this, "infor", "success");
        // }
        // else {
        //     QMessageBox::information(this, "infor", "open failed");
        //     qDebug()<<"error open database because"<<db.lastError().text();
        // }


        // bool ok = db.open();
        // if (ok){
        //     qDebug()<<"success!";
        // }
        // else {
        //     qDebug()<<"error open database because"<<db.lastError().text();
        // }

        //查询数据库中所有表的名称
        // QStringList tables = db.tables();
        // foreach(QString table, tables)
        //     qDebug()<<table;

        //ODBC查询数据
        // QSqlQuery result = db.exec("select * from tb_user");
        // while(result.next()){
        //     qDebug()<<"user_id:"<<result.value("id").toInt()<<"\t"
        //              <<"name:"<<result.value("name").toString()<<"\t"
        //              <<"age:"<<result.value("age").toInt()<<"\t"
        //              <<"gender:"<<result.value("gender").toString()<<"\t"
        //              <<"nickname:"<<result.value("nickname").toString()<<Qt::endl;
        // }

    }
    return a.exec();
}
