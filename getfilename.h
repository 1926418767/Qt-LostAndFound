#ifndef GETFILENAME_H
#define GETFILENAME_H

#include <QDialog>

namespace Ui {
class GetFileName;
}

class GetFileName : public QDialog
{
    Q_OBJECT

public:
    explicit GetFileName(QWidget *parent = nullptr,QString* name=nullptr);
    ~GetFileName();

private:
    Ui::GetFileName *ui;
};

#endif // GETFILENAME_H
