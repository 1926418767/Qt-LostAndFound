#ifndef USERDIALOG_H
#define USERDIALOG_H

#include <QDialog>

namespace Ui {
class UserDialog;
}

class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(QWidget *parent = nullptr,QString name = nullptr);
    ~UserDialog();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent* event);

protected:
    Ui::UserDialog *ui;
    QString name;       //用户名
};

#endif // USERDIALOG_H
