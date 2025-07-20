#ifndef ADMINISTRATORDIALOG_H
#define ADMINISTRATORDIALOG_H

#include <QDialog>

namespace Ui {
class AdministratorDialog;
}

class AdministratorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdministratorDialog(QWidget *parent = nullptr,QString name = nullptr);
    ~AdministratorDialog();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent* event);

private:
    Ui::AdministratorDialog *ui;
    QString name;

};

#endif // ADMINISTRATORDIALOG_H
