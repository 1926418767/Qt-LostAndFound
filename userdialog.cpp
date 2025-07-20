#include "userdialog.h"
#include "ui_userdialog.h"
#include <QPainter>
#include "personalcenter.h"
#include "addlost.h"
#include "addfound.h"
#include "alllost.h"
#include "allfound.h"
#include "revokelost.h"
#include "revokefound.h"

UserDialog::UserDialog(QWidget *parent,QString name)
    : QDialog(parent)
    , ui(new Ui::UserDialog)
    ,name(name)
{
    ui->setupUi(this);

    setWindowState(Qt::WindowMaximized);    //使窗口最大化

    // 设置窗体最大化和最小化
    Qt::WindowFlags windowFlag  = Qt::Dialog;
    windowFlag                  |= Qt::WindowMinimizeButtonHint;
    windowFlag                  |= Qt::WindowMaximizeButtonHint;
    windowFlag                  |= Qt::WindowCloseButtonHint;

    setWindowFlags(windowFlag);

    ui->label->setText(ui->label->text()+name);

    connect(ui->addLost,&QPushButton::clicked,this,[=](){       //发布失物信息
        this->setEnabled(false);
        AddLost adl(nullptr,name);
        adl.exec();
        this->setEnabled(true);
    });

    connect(ui->addFound,&QPushButton::clicked,this,[=](){      //发布捡物信息
        this->setEnabled(false);
        AddFound adf(nullptr,name);
        adf.exec();
        this->setEnabled(true);
    });

    connect(ui->revokeLost,&QPushButton::clicked,this,[=](){        //撤销失物信息
        this->setEnabled(false);
        RevokeLost rLost(nullptr,name);
        rLost.exec();
        this->setEnabled(true);
    });

    connect(ui->revokeFound,&QPushButton::clicked,this,[=](){       //撤销捡物信息
        this->setEnabled(false);
        RevokeFound rFound(nullptr,name);
        rFound.exec();
        this->setEnabled(true);
    });

    connect(ui->allLost,&QPushButton::clicked,this,[=](){       //查看所有失物信息
        this->setEnabled(false);
        AllLost alost(nullptr,name);
        alost.exec();
        this->setEnabled(true);
    });

    connect(ui->allFound,&QPushButton::clicked,this,[=](){      //查看所有失物信息
        this->setEnabled(false);
        AllFound afound(nullptr,name);
        afound.exec();
        this->setEnabled(true);
    });
}

void UserDialog::mousePressEvent(QMouseEvent *event)
{
    //检查鼠标事件的位置是否在限定的区域内
    if(ui->personalCenter->underMouse())        //进入个人中心
    {
        this->setEnabled(false);
        PersonalCenter per(nullptr,name);
        per.exec();
        this->setEnabled(true);
    }
    else if(ui->signOut->underMouse())       //退出登录
    {
        this->done(QDialog::Accepted);
        this->close();
    }
}

void UserDialog::paintEvent(QPaintEvent* event)     //绘制窗口
{
    QPainter painter(this);
    painter.setPen(Qt::NoPen);  //设置无边框
    painter.setRenderHint(QPainter::Antialiasing, true);    //渲染

    QRect rect = contentsRect();
    int height = rect.height() / 6;

    // 给矩形绘制渐变背景
    QLinearGradient gradient(0, 0, width(), 0);
    gradient.setColorAt(0, QColor(54,168,244));
    gradient.setColorAt(0.418, QColor(54,168,244));
    gradient.setColorAt(1, Qt::white);

    painter.setBrush(gradient);
    painter.drawRect(rect.left(), rect.top(), rect.width(), height);


}

UserDialog::~UserDialog()
{
    delete ui;
}
