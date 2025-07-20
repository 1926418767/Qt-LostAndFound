#ifndef DETAIL_H
#define DETAIL_H

#include "qdatetime.h"
#include <QDialog>
#include <QDate>

namespace Ui {
class Detail;
}

class Detail : public QDialog
{
    Q_OBJECT

public:                                                                                                                                                                                         //1为失物的信息，2为捡物的信息
    Detail(QWidget *parent = nullptr,QString userName=nullptr,QString lostThing=nullptr,QDate lostTime=QDate(),QString place=nullptr,QString information=nullptr,QByteArray imageData=nullptr,int i=1);
    ~Detail();

private:
    Ui::Detail *ui;
};

#endif // DETAIL_H
