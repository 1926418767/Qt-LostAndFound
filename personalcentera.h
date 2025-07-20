#ifndef PERSONALCENTERA_H
#define PERSONALCENTERA_H

#include <QDialog>

namespace Ui {
class PersonalCenterA;
}

class PersonalCenterA : public QDialog
{
    Q_OBJECT

public:
    explicit PersonalCenterA(QWidget *parent = nullptr,QString name=nullptr);
    ~PersonalCenterA();
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::PersonalCenterA *ui;
    QString name;
};

#endif // PERSONALCENTERA_H
