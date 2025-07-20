#ifndef ADDFOUND_H
#define ADDFOUND_H

#include <QDialog>

namespace Ui {
class AddFound;
}

class AddFound : public QDialog
{
    Q_OBJECT

public:
    explicit AddFound(QWidget *parent = nullptr,QString name=nullptr);
    ~AddFound();

private:
    Ui::AddFound *ui;
    QString name;
    QString path;
};

#endif // ADDFOUND_H
