#include <QTime>
#include <QChar>
#include <QPainter>
#include <QLineEdit>
#include <QtGlobal>
#include <QPushButton>
#include <QLabel>
#include <QShowEvent>
#include <QMessageBox>
#include "verify.h"

Verify::Verify()
{
    //验证码窗口初始化
    this->setFixedSize(240,160);
    this->setStyleSheet("background-color:white;");
    this->setWindowTitle("验证码");

    //修改文本标签1
    QFont labelFont1("楷体", 12, QFont::Normal, false);
    label1->setGeometry(0, 95, 100, 30);   // 设置QLabel的位置和大小
    label1->show();   // 显示QLabel控件
    label1->setFont(labelFont1);   // 设置QLabel的字体

    //修改文本标签2
    QFont labelFont2("楷体", 8, QFont::Normal, false);
    label2->setGeometry(150, 95, 100, 30);   // 设置QLabel的位置和大小
    label2->show();   // 显示QLabel控件
    label2->setFont(labelFont2);   // 设置QLabel的字体

    //修改文本输入框
    lineEdit->setEnabled(true);
    lineEdit->setGeometry(90, 100, 60, 20);
    lineEdit->setCursor(Qt::IBeamCursor);
    lineEdit->setReadOnly(false);   // 将QLineEdit控件设置为可编辑状态
    lineEdit->show();

    //修改按钮位置
    button->setGeometry(90,130,60,15);

    //随机数种子初始化
    srand(QTime(0,0,0).secsTo(QTime::currentTime()));

    //生成随机数
    this->generateRandNum();

    connect(this->button,&QPushButton::clicked,this,[=]{
        QString strLine=this->lineEdit->text().toLower();
        QString strCode=code.toLower();
        if(strLine!=strCode)
        {
            QMessageBox::warning(this,"错误","请重新输入！");
            //重新生成验证码
            generateRandNum();
            //实时更新
            update();
        }
        else
        {
            this->done(QDialog::Accepted);
        }
    });
}

void Verify::generateRandNum()
{
    this->code.clear();
    for(int i = 0;i < 4;++i)
    {
        int num = rand()%3;
        if(num == 0)
        {
            //数字
            this->code += QString::number(rand()%10);
        }
        else if(num == 1)
        {
            //大写字母
            int temp = 'A';
            this->code += static_cast<QChar>(temp + rand()%26);
        }
        else if(num == 2)
        {
            //小写字母
            int temp = 'a';
            this->code += static_cast<QChar>(temp + rand()%26);
        }
    }
}

void Verify::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;
    QFont font("楷体", 20, QFont::Bold, true);
    painter.setFont(font);

    //画点
    for(int i=0;i<400;i++)
    {
        pen = QPen(QColor(rand()%256,rand()%256,rand()%256));
        painter.setPen(pen);
        painter.drawPoint(rand()%240,rand()%100);
    }

    //画线
    for(int i=0;i<50;i++)
    {
        pen = QPen(QColor(rand()%256,rand()%256,rand()%256));
        painter.setPen(pen);
        painter.drawLine(rand()%240,rand()%100,rand()%240,rand()%100);
    }

    //绘制验证码
    for(int i=0;i<4;i++)
    {
        pen = QPen(QColor(rand()%255,rand()%255,rand()%255));
        painter.setPen(pen);
        painter.drawText(20+50*i,10+rand()%35,30,50,Qt::AlignCenter, QString(code[i]));
    }
}

void Verify::mousePressEvent(QMouseEvent *event)
{
    //计算限定的区域
    QRect rect(150, 95, 100, 30);

    //检查鼠标事件的位置是否在限定的区域内
    if(rect.contains(event->pos()))
    {
        //重新生成验证码
        generateRandNum();
        //实时更新
        update();
    }
    else
    {
        //忽略该事件
        event->ignore();
    }

}

