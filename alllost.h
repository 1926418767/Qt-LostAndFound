#ifndef ALLLOST_H
#define ALLLOST_H

#include <QDialog>

namespace Ui {
class AllLost;
}

class AllLost : public QDialog
{
    Q_OBJECT

public:
    explicit AllLost(QWidget *parent = nullptr,QString name=nullptr);
    ~AllLost();

private:
    Ui::AllLost *ui;
    QString name;
};

#endif // ALLLOST_H
