#include "administratordialog.h"
#include "ui_administratordialog.h"
#include "revokelost.h"
#include "revokefound.h"
#include "alluser.h"
#include <QPainter>
#include "registeradm.h"



AdministratorDialog::AdministratorDialog(QWidget *parent, QString name)
    : QDialog(parent)
    , ui(new Ui::AdministratorDialog)
    , name(name)
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

    connect(ui->allUser,&QPushButton::clicked,this,[=](){       //查看所有用户
        this->setEnabled(false);
        AllUser aUser;
        aUser.exec();
        this->setEnabled(true);
    });

    connect(ui->allLost,&QPushButton::clicked,this,[=](){       //查看所有失物
        this->setEnabled(false);
        RevokeLost rLost(nullptr,"%",2);
        rLost.exec();
        this->setEnabled(true);
    });

    connect(ui->allFound,&QPushButton::clicked,this,[=](){      //查看所有捡物
        this->setEnabled(false);
        RevokeFound rFound(nullptr,"%",2);
        rFound.exec();
        this->setEnabled(true);
    });

    connect(ui->addadm,&QPushButton::clicked,this,[=](){        //增加管理员
        this->setEnabled(false);
        RegisterAdm reg;
        reg.exec();
        this->setEnabled(true);
    });
}


void AdministratorDialog::mousePressEvent(QMouseEvent *event)
{
    if(ui->signOut->underMouse())      //查看全部失物
    {
        this->done(1);
        this->close();
    }
}

void AdministratorDialog::paintEvent(QPaintEvent* event)     //绘制窗口
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

AdministratorDialog::~AdministratorDialog()
{
    delete ui;
}
