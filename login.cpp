#include "login.h"
#include "ui_login.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include "database.h"
#include "verify.h"
#include "userdialog.h"
#include "administratordialog.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    //setStyleSheet("background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 white, stop: 0.5 #c0c0ff, stop: 1 white);");//运用在了所有控件上

    // QWidget *centralWidget = new QWidget(this);
    // setCentralWidget(centralWidget);
    // centralWidget->setStyleSheet("background: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0 white, stop: 0.5 #c0c0ff, stop: 1 white);");

    //设置对话框背景颜色
    QPalette palette = this->palette();
    QLinearGradient gradient(0, 0, width(), height());    //从(0,0)到(width,height)
    gradient.setColorAt(0, Qt::white);  //起点设置为白色
    gradient.setColorAt(0.5, QColor(192, 192, 255));    //中间设置为紫色
    gradient.setColorAt(1, Qt::white);  //终点设置为白色
    palette.setBrush(QPalette::Window, QBrush(gradient));
    setPalette(palette);

    ui->user->setChecked(true);  //QRadioButton默认选择普通用户

    // long long int i=2301610213;
    // for(;i<2301610219;i++)
    // {
    //     bool ok = db.open();
    //     if (ok){
    //         qDebug()<<"数据库打开成功！"<<Qt::endl;
    //     }
    //     else {
    //         qDebug()<<"error open database because"<<db.lastError().text();
    //     }
    //     long long int tmp=i;
    //     QSqlQuery query;
    //     query.prepare("insert into user(accountName,password) values(?,?) ");
    //     query.bindValue(0,QString::number(tmp));
    //     query.bindValue(1,(QString)"123456");
    //     if(query.exec())
    //     {
    //         qDebug()<<"插入"<<i<<"成功！"<<Qt::endl;
    //     }
    //     else
    //     {
    //         qDebug()<<"插入"<<i<<"失败！"<<Qt::endl;
    //         qDebug() << "Insertion failed: " << query.lastError().text();

    //     }
    //     db.close();
    // }

    //退出登录窗口    exec()返回0
    connect(ui->exit, &QPushButton::clicked, this, [=](){
        this->done(QDialog::Rejected);
        this->close();
    });

    //登录按钮点击
    connect(ui->login,&QPushButton::clicked,this,[=](){
        Verify ver;
        int isRejected = ver.exec();    //弹出验证码检测   成功exec()返回1，否则返回0
        if(isRejected==QDialog::Rejected)   //直接关闭验证码窗口则清空密码结束
        {
            ui->passwordEdit->clear();
        }
        else    //通过了验证码
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
            if(ui->administrator->isChecked())  //管理员登录
            {
                QSqlQuery accountName;
                accountName.exec("select * from administrator");
                while(accountName.next())
                {
                    if(accountName.value(0).toString()==ui->userNameEdit->text())
                    {
                        if(accountName.value(1).toString()==ui->passwordEdit->text())
                        {
                            QMessageBox::information(this,"登录成功","登录成功！");
                            this->close();

                            AdministratorDialog wAdm(nullptr,accountName.value(0).toString());
                            db.close();
                            if(wAdm.exec()==1)      //重新登陆返回1 否则返回0退出
                            {
                                this->done(1);
                            }

                            return ;
                        }
                        else
                        {
                            QMessageBox::information(this,"密码错误","密码错误，请重新输入！");
                            ui->passwordEdit->clear();
                            db.close();
                            return ;
                        }
                    }
                }
                db.close();
                QMessageBox::information(this,"not found","该用户不存在，请重新输入！");
            }
            else    //普通用户登录
            {
                QSqlQuery accountName;
                accountName.exec("select * from user");
                while(accountName.next())
                {
                    if(accountName.value(0).toString()==ui->userNameEdit->text())
                    {
                        if(accountName.value(1).toString()==ui->passwordEdit->text())
                        {
                            QMessageBox::information(this,"登录成功","登录成功！");
                            this->close();

                            UserDialog wUser(nullptr,accountName.value(0).toString());      //打开用户主界面，将用户名传入
                            db.close();

                            int t = wUser.exec();   //如果退出登录 wUser.exec()则返回1 如果关闭窗口 则返回0结束程序
                            if(t==1)
                            {
                                this->done(1);      //l.exe()返回1来重新登录
                            }
                            return ;
                        }
                        else
                        {
                            QMessageBox::information(this,"密码错误","密码错误，请重新输入！");
                            ui->passwordEdit->clear();
                            db.close();
                            return ;
                        }
                    }
                }
                db.close();
                QMessageBox::information(this,"not found","该用户不存在，请重新输入！");
            }
        }
    });

    //注册按钮点击    返回2
    connect(ui->register_1,&QPushButton::clicked,this,[=](){
        this->done(2);
        this->close();
    });
}

Login::~Login()
{
    delete ui;
}
