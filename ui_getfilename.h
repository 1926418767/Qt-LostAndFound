/********************************************************************************
** Form generated from reading UI file 'getfilename.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETFILENAME_H
#define UI_GETFILENAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GetFileName
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirm;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *GetFileName)
    {
        if (GetFileName->objectName().isEmpty())
            GetFileName->setObjectName("GetFileName");
        GetFileName->resize(358, 178);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        GetFileName->setWindowIcon(icon);
        label = new QLabel(GetFileName);
        label->setObjectName("label");
        label->setGeometry(QRect(6, 10, 281, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        lineEdit = new QLineEdit(GetFileName);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(6, 50, 251, 31));
        lineEdit->setFont(font);
        label_2 = new QLabel(GetFileName);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(266, 60, 41, 21));
        label_2->setFont(font);
        widget = new QWidget(GetFileName);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 100, 361, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        confirm = new QPushButton(widget);
        confirm->setObjectName("confirm");

        horizontalLayout->addWidget(confirm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        exit = new QPushButton(widget);
        exit->setObjectName("exit");

        horizontalLayout->addWidget(exit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(GetFileName);

        QMetaObject::connectSlotsByName(GetFileName);
    } // setupUi

    void retranslateUi(QDialog *GetFileName)
    {
        GetFileName->setWindowTitle(QCoreApplication::translate("GetFileName", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GetFileName", "\350\257\267\350\276\223\345\205\245\350\246\201\345\257\274\345\207\272\347\232\204\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("GetFileName", ".csv", nullptr));
        confirm->setText(QCoreApplication::translate("GetFileName", "\347\241\256\350\256\244", nullptr));
        exit->setText(QCoreApplication::translate("GetFileName", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GetFileName: public Ui_GetFileName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETFILENAME_H
