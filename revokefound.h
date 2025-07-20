#ifndef REVOKEFOUND_H
#define REVOKEFOUND_H

#include <QDialog>

namespace Ui {
class RevokeFound;
}

class RevokeFound : public QDialog
{
    Q_OBJECT

public:
    explicit RevokeFound(QWidget *parent = nullptr,QString name = nullptr,int i=1);//1为用户 2为管理员看到的
    ~RevokeFound();

private:
    Ui::RevokeFound *ui;
    QString name;
};

#endif // REVOKEFOUND_H
