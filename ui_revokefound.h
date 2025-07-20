/********************************************************************************
** Form generated from reading UI file 'revokefound.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVOKEFOUND_H
#define UI_REVOKEFOUND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RevokeFound
{
public:
    QLabel *user;
    QPushButton *exit;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QPushButton *save;

    void setupUi(QDialog *RevokeFound)
    {
        if (RevokeFound->objectName().isEmpty())
            RevokeFound->setObjectName("RevokeFound");
        RevokeFound->resize(1536, 801);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        RevokeFound->setWindowIcon(icon);
        user = new QLabel(RevokeFound);
        user->setObjectName("user");
        user->setGeometry(QRect(40, 30, 861, 31));
        QFont font;
        font.setPointSize(14);
        user->setFont(font);
        exit = new QPushButton(RevokeFound);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(1420, 740, 101, 31));
        exit->setFont(font);
        tableWidget = new QTableWidget(RevokeFound);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 120, 1481, 601));
        tableWidget->setFont(font);
        label_2 = new QLabel(RevokeFound);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 70, 371, 31));
        label_2->setFont(font);
        save = new QPushButton(RevokeFound);
        save->setObjectName("save");
        save->setGeometry(QRect(1270, 740, 131, 31));
        save->setFont(font);
        save->setFocusPolicy(Qt::NoFocus);

        retranslateUi(RevokeFound);

        QMetaObject::connectSlotsByName(RevokeFound);
    } // setupUi

    void retranslateUi(QDialog *RevokeFound)
    {
        RevokeFound->setWindowTitle(QCoreApplication::translate("RevokeFound", "\346\222\244\351\224\200", nullptr));
        user->setText(QCoreApplication::translate("RevokeFound", "\347\224\250\346\210\267\357\274\232", nullptr));
        exit->setText(QCoreApplication::translate("RevokeFound", "\350\277\224\345\233\236", nullptr));
        label_2->setText(QCoreApplication::translate("RevokeFound", "\350\257\245\347\224\250\346\210\267\346\215\241\347\211\251\346\261\207\346\200\273\357\274\232", nullptr));
        save->setText(QCoreApplication::translate("RevokeFound", "\345\257\274\345\207\272\350\207\263\346\241\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RevokeFound: public Ui_RevokeFound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVOKEFOUND_H
