/********************************************************************************
** Form generated from reading UI file 'revokelost.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVOKELOST_H
#define UI_REVOKELOST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RevokeLost
{
public:
    QLabel *user;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QPushButton *exit;
    QPushButton *save;

    void setupUi(QDialog *RevokeLost)
    {
        if (RevokeLost->objectName().isEmpty())
            RevokeLost->setObjectName("RevokeLost");
        RevokeLost->resize(1536, 801);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        RevokeLost->setWindowIcon(icon);
        user = new QLabel(RevokeLost);
        user->setObjectName("user");
        user->setGeometry(QRect(40, 30, 861, 31));
        QFont font;
        font.setPointSize(14);
        user->setFont(font);
        tableWidget = new QTableWidget(RevokeLost);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 120, 1481, 601));
        tableWidget->setFont(font);
        label_2 = new QLabel(RevokeLost);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 70, 371, 31));
        label_2->setFont(font);
        exit = new QPushButton(RevokeLost);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(1420, 740, 101, 31));
        exit->setFont(font);
        save = new QPushButton(RevokeLost);
        save->setObjectName("save");
        save->setGeometry(QRect(1260, 740, 131, 31));
        save->setFont(font);
        save->setFocusPolicy(Qt::NoFocus);

        retranslateUi(RevokeLost);

        QMetaObject::connectSlotsByName(RevokeLost);
    } // setupUi

    void retranslateUi(QDialog *RevokeLost)
    {
        RevokeLost->setWindowTitle(QCoreApplication::translate("RevokeLost", "\346\222\244\351\224\200", nullptr));
        user->setText(QCoreApplication::translate("RevokeLost", "\347\224\250\346\210\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RevokeLost", "\350\257\245\347\224\250\346\210\267\345\244\261\347\211\251\346\261\207\346\200\273\357\274\232", nullptr));
        exit->setText(QCoreApplication::translate("RevokeLost", "\350\277\224\345\233\236", nullptr));
        save->setText(QCoreApplication::translate("RevokeLost", "\345\257\274\345\207\272\350\207\263\346\241\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RevokeLost: public Ui_RevokeLost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVOKELOST_H
