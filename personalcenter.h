#ifndef PERSONALCENTER_H
#define PERSONALCENTER_H

#include <QDialog>

namespace Ui {
class PersonalCenter;
}

class PersonalCenter : public QDialog
{
    Q_OBJECT

public:
    explicit PersonalCenter(QWidget *parent = nullptr,QString name = nullptr);
    ~PersonalCenter();
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::PersonalCenter *ui;
    QString name;
};

#endif // PERSONALCENTER_H
