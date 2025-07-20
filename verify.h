#ifndef VERIFY_H
#define VERIFY_H

#include <QFrame>
#include <QDialog>
#include <QString>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

class Verify : public QDialog
{
    Q_OBJECT
public:
    Verify();
    void generateRandNum();
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);
    QString code;
    QLabel *label1 = new QLabel("输入验证码：", this);
    QLabel *label2 = new QLabel("看不清？换一张", this);
    QPushButton *button=new QPushButton("确认",this);
    QLineEdit *lineEdit = new QLineEdit(this);
};

#endif // VERIFY_H
