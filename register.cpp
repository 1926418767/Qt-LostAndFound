#include "register.h"
#include "ui_register.h"
#include <QString>
#include "database.h"
#include "verify.h"
#include <QSqlQuery>
#include <QMessageBox>

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);

    //设置对话框背景颜色
    QPalette palette = this->palette();
    QLinearGradient gradient(0, 0, width(), height());    //从(0,0)到(width,height)
    gradient.setColorAt(0, Qt::white);  //起点设置为白色
    gradient.setColorAt(0.5, QColor(192, 192, 255));    //中间设置为紫色
    gradient.setColorAt(1, Qt::white);  //终点设置为白色
    palette.setBrush(QPalette::Window, QBrush(gradient));
    setPalette(palette);

    //用户名触发输入
    connect(ui->userNameEdit, &QLineEdit::textChanged,this, [=](){
        QString text=ui->userNameEdit->text();
        if(text.size()>16)
        {
            ui->label->setText("×");
            ui->label->setStyleSheet("color:red;");
            ui->label_4->setText("超出长度");
            return;
        }
        if(!checkLabel(text))   //如果含有特殊字符
        {
            ui->label->setText("×");
            ui->label->setStyleSheet("color:red;");
            ui->label_4->setText("字符错误");
            return;
        }
        if(!text.isEmpty()) //如果不为空
        {
            db.open();
            QSqlQuery query;
            query.exec("select accountName from user;");
            while(query.next())
            {
                if(query.value(0)==text)
                {
                    ui->label->setText("×");
                    ui->label->setStyleSheet("color:red;");
                    ui->label_4->setText("名称重复");
                    db.close();
                    return;
                }
            }
            db.close();
            ui->label->setText("√");
            ui->label->setStyleSheet("color:green;");
            ui->label_4->setText("");
            return;
        }
        else
        {
            ui->label->setText("!");
            ui->label->setStyleSheet("color:yellow;");
            ui->label_4->setText("");
        }
    });

    connect(ui->passwordEdit, &QLineEdit::textChanged,this,[=](){
        QString text1=ui->passwordEdit->text();
        QString text2= ui->passwordAgainEdit->text();
        if(text1.size()>16)
        {
            ui->label_2->setText("×");
            ui->label_2->setStyleSheet("color:red;");
            ui->label_5->setText("超出长度");
        }
        else if(text1.isEmpty())
        {
            ui->label_2->setText("!");
            ui->label_2->setStyleSheet("color:yellow;");
            ui->label_5->setText("");
        }
        else if(text1==text2)
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
            ui->label_5->setText("");
            ui->label_3->setText("√");
            ui->label_3->setStyleSheet("color:green;");
            ui->label_6->setText("");
        }
        else if(text1!=text2&&ui->label_3->text()=="√")
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
            ui->label_5->setText("");
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
            ui->label_6->setText("");
        }
        else if(text1!=text2&&ui->label_3->text()!="√")
        {
            ui->label_2->setText("√");
            ui->label_2->setStyleSheet("color:green;");
            ui->label_5->setText("");
        }
    });

    connect(ui->passwordAgainEdit, &QLineEdit::textChanged,this,[=](){
        QString text1= ui->passwordEdit->text();
        QString text2= ui->passwordAgainEdit->text();
        if(text2.isEmpty())
        {
            ui->label_3->setText("!");
            ui->label_3->setStyleSheet("color:yellow;");
            ui->label_6->setStyleSheet("");
        }
        else if(ui->label_2->text()=="×"||ui->label_2->text()=="!")
        {
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
            ui->label_6->setText("");
        }
        else if(text1==text2)
        {
            ui->label_3->setText("√");
            ui->label_3->setStyleSheet("color:green;");
            ui->label_6->setText("");
        }
        else if(text1!=text2)
        {
            ui->label_3->setText("×");
            ui->label_3->setStyleSheet("color:red;");
            ui->label_6->setText("");
        }
    });

    connect(ui->register_1,&QPushButton::clicked,this,[=](){
        if(ui->label->text()=="√"&&ui->label_2->text()=="√"&&ui->label_3->text()=="√")
        {
            Verify ver;
            if(ver.exec()==QDialog::Rejected)     //弹出验证码检测   成功exec()返回1，否则返回0
            {
                ui->passwordEdit->clear();
                ui->passwordAgainEdit->clear();
                return;
            }
            db.open();
            QSqlQuery query;
            query.prepare("insert into user(accountName,password) values(?,?)");
            query.bindValue(0,ui->userNameEdit->text());
            query.bindValue(1,ui->passwordEdit->text());
            query.exec();
            db.close();
            QMessageBox::information(this,"成功","注册成功!");
            this->done(QDialog::Accepted);
            this->close();
        }
    });

    connect(ui->return_1,&QPushButton::clicked,this,[=](){
        this->done(QDialog::Accepted);
        this->close();
    });

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->done(QDialog::Rejected);
        this->close();
    });
}

bool Register::checkLabel(const QString& str)
{
    for (QChar c : str) {
        if (!(('0'<=c&&c<='9')||('a'<=c&&c<='z')||('A'<=c&&c<='Z'))) {
            // 如果遇到非字母非数字的字符，返回false
            return false;
        }
    }
    // 如果所有字符都是字母或数字，返回true
    return true;
}

Register::~Register()
{
    delete ui;
}
