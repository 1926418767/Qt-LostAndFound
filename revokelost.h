#ifndef REVOKELOST_H
#define REVOKELOST_H

#include <QDialog>

namespace Ui {
class RevokeLost;
}

class RevokeLost : public QDialog
{
    Q_OBJECT

public:
    explicit RevokeLost(QWidget *parent = nullptr,QString name = nullptr,int i=1);//1为用户 2为管理员看到的
    ~RevokeLost();

private:
    Ui::RevokeLost *ui;
    QString name;
};

#endif // REVOKELOST_H
