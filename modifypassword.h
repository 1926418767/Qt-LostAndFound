#ifndef MODIFYPASSWORD_H
#define MODIFYPASSWORD_H

#include <QDialog>
#include "userdialog.h"

namespace Ui {
class ModifyPassword;
}

class ModifyPassword : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyPassword(QWidget *parent = nullptr,QString name = nullptr);
    ~ModifyPassword();

private:
    Ui::ModifyPassword *ui;
    QString name;
};

#endif // MODIFYPASSWORD_H
