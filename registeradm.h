#ifndef REGISTERADM_H
#define REGISTERADM_H

#include <QDialog>

namespace Ui {
class RegisterAdm;
}

class RegisterAdm : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterAdm(QWidget *parent = nullptr);
    ~RegisterAdm();
    bool checkLabel(const QString& str);

private:
    Ui::RegisterAdm *ui;
};

#endif // REGISTERADM_H
