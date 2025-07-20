#include "getfilename.h"
#include "ui_getfilename.h"
#include <QMessageBox>

bool checkLabel(const QString& str)
{
    for (QChar c : str) {
        if (!(('0'<=c&&c<='9')||('a'<=c&&c<='z')||('A'<=c&&c<='Z'))) {
            // 如果遇到非字母非数字的字符，返回false
            return false;
        }
    }
    // 如果所有字符都是字母或数字，返回true
    return true;
}

GetFileName::GetFileName(QWidget *parent,QString* name)
    : QDialog(parent)
    , ui(new Ui::GetFileName)
{
    ui->setupUi(this);

    connect(ui->exit,&QPushButton::clicked,this,[=](){
        this->close();
    });

    connect(ui->confirm,&QPushButton::clicked,this,[=](){
        QString text=ui->lineEdit->text();
        if(text.isEmpty())
        {
            QMessageBox::warning(this,"警告","文件名不能为空");
        }
        else if(!checkLabel(text))
        {
            QMessageBox::warning(this,"警告","文件名只能为数字或英文");
        }
        else
        {
            *name="D:/Desktop/"+text+".csv";
            this->done(QDialog::Accepted);
            this->close();
        }
    });
}

GetFileName::~GetFileName()
{
    delete ui;
}
