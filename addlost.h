#ifndef ADDLOST_H
#define ADDLOST_H

#include <QDialog>

namespace Ui {
class AddLost;
}

class AddLost : public QDialog
{
    Q_OBJECT

public:
    explicit AddLost(QWidget *parent = nullptr,QString name=nullptr);
    ~AddLost();

private:
    Ui::AddLost *ui;
    QString name;
    QString path=nullptr;
};

#endif // ADDLOST_H
