#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    bool checkLabel(const QString& str);

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
