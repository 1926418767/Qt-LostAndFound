#ifndef ALLFOUND_H
#define ALLFOUND_H

#include <QDialog>

namespace Ui {
class AllFound;
}

class AllFound : public QDialog
{
    Q_OBJECT

public:
    explicit AllFound(QWidget *parent = nullptr,QString name=nullptr);
    ~AllFound();

private:
    Ui::AllFound *ui;
    QString name;
};

#endif // ALLFOUND_H
