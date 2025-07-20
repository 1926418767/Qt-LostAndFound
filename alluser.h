#ifndef ALLUSER_H
#define ALLUSER_H

#include <QDialog>

namespace Ui {
class AllUser;
}

class AllUser : public QDialog
{
    Q_OBJECT

public:
    explicit AllUser(QWidget *parent = nullptr);
    ~AllUser();

private:
    Ui::AllUser *ui;
};

#endif // ALLUSER_H
