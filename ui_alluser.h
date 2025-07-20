/********************************************************************************
** Form generated from reading UI file 'alluser.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLUSER_H
#define UI_ALLUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllUser
{
public:
    QPushButton *reset;
    QPushButton *confirm;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *exit;
    QPushButton *save;

    void setupUi(QDialog *AllUser)
    {
        if (AllUser->objectName().isEmpty())
            AllUser->setObjectName("AllUser");
        AllUser->resize(1536, 801);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        AllUser->setWindowIcon(icon);
        reset = new QPushButton(AllUser);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(1100, 130, 101, 31));
        QFont font;
        font.setPointSize(14);
        reset->setFont(font);
        reset->setFocusPolicy(Qt::NoFocus);
        confirm = new QPushButton(AllUser);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(960, 130, 101, 31));
        confirm->setFont(font);
        confirm->setFocusPolicy(Qt::NoFocus);
        tableWidget = new QTableWidget(AllUser);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(30, 180, 1481, 561));
        tableWidget->setFont(font);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        widget = new QWidget(AllUser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 20, 801, 91));
        widget->setFocusPolicy(Qt::WheelFocus);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(70, 16777215));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(600, 35));
        lineEdit->setMaximumSize(QSize(600, 35));
        lineEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(70, 0));
        pushButton->setMaximumSize(QSize(70, 16777215));
        pushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButton);

        exit = new QPushButton(AllUser);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(1400, 750, 111, 31));
        exit->setFont(font);
        exit->setFocusPolicy(Qt::NoFocus);
        save = new QPushButton(AllUser);
        save->setObjectName("save");
        save->setGeometry(QRect(1230, 750, 131, 31));
        save->setFont(font);
        save->setFocusPolicy(Qt::NoFocus);

        retranslateUi(AllUser);

        QMetaObject::connectSlotsByName(AllUser);
    } // setupUi

    void retranslateUi(QDialog *AllUser)
    {
        AllUser->setWindowTitle(QCoreApplication::translate("AllUser", "\347\224\250\346\210\267\346\261\207\346\200\273", nullptr));
        reset->setText(QCoreApplication::translate("AllUser", "\351\207\215\347\275\256", nullptr));
        confirm->setText(QCoreApplication::translate("AllUser", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("AllUser", "\347\224\250\346\210\267\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("AllUser", "\346\250\241\347\263\212\346\220\234\347\264\242\350\276\223\345\205\245", nullptr));
        pushButton->setText(QCoreApplication::translate("AllUser", "\344\277\256\346\224\271", nullptr));
        exit->setText(QCoreApplication::translate("AllUser", "\351\200\200\345\207\272", nullptr));
        save->setText(QCoreApplication::translate("AllUser", "\345\257\274\345\207\272\350\207\263\346\241\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllUser: public Ui_AllUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLUSER_H
