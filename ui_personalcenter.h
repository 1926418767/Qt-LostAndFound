/********************************************************************************
** Form generated from reading UI file 'personalcenter.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALCENTER_H
#define UI_PERSONALCENTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonalCenter
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *userName;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_9;
    QLabel *lostNum;
    QLabel *foundNum;
    QLabel *lookFound;
    QLabel *lookLost;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_1;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *modify;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *PersonalCenter)
    {
        if (PersonalCenter->objectName().isEmpty())
            PersonalCenter->setObjectName("PersonalCenter");
        PersonalCenter->setEnabled(true);
        PersonalCenter->resize(445, 464);
        PersonalCenter->setMinimumSize(QSize(445, 464));
        PersonalCenter->setMaximumSize(QSize(445, 464));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        PersonalCenter->setWindowIcon(icon);
        PersonalCenter->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(PersonalCenter);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(PersonalCenter);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label_7->setFont(font);

        horizontalLayout->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        widget_2 = new QWidget(PersonalCenter);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        userName = new QLabel(widget_2);
        userName->setObjectName("userName");
        QFont font1;
        font1.setPointSize(14);
        userName->setFont(font1);

        gridLayout->addWidget(userName, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        lostNum = new QLabel(widget_2);
        lostNum->setObjectName("lostNum");
        lostNum->setFont(font1);

        gridLayout->addWidget(lostNum, 2, 1, 1, 1);

        foundNum = new QLabel(widget_2);
        foundNum->setObjectName("foundNum");
        foundNum->setFont(font1);

        gridLayout->addWidget(foundNum, 4, 1, 1, 1);

        lookFound = new QLabel(widget_2);
        lookFound->setObjectName("lookFound");
        QFont font2;
        font2.setUnderline(true);
        lookFound->setFont(font2);
        lookFound->setCursor(QCursor(Qt::OpenHandCursor));
        lookFound->setStyleSheet(QString::fromUtf8("color: blue;"));
        lookFound->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lookFound, 4, 3, 1, 1);

        lookLost = new QLabel(widget_2);
        lookLost->setObjectName("lookLost");
        lookLost->setFont(font2);
        lookLost->setCursor(QCursor(Qt::OpenHandCursor));
        lookLost->setLayoutDirection(Qt::LeftToRight);
        lookLost->setStyleSheet(QString::fromUtf8("color :blue;"));
        lookLost->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lookLost, 2, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        label_1 = new QLabel(widget_2);
        label_1->setObjectName("label_1");

        gridLayout->addWidget(label_1, 0, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(verticalSpacer_6, 3, 1, 1, 1);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        widget_3 = new QWidget(PersonalCenter);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        modify = new QPushButton(widget_3);
        modify->setObjectName("modify");
        modify->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(modify);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        exit = new QPushButton(widget_3);
        exit->setObjectName("exit");
        exit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(exit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(PersonalCenter);

        QMetaObject::connectSlotsByName(PersonalCenter);
    } // setupUi

    void retranslateUi(QDialog *PersonalCenter)
    {
        PersonalCenter->setWindowTitle(QCoreApplication::translate("PersonalCenter", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        label_7->setText(QCoreApplication::translate("PersonalCenter", "\344\270\252 \344\272\272 \344\270\255 \345\277\203", nullptr));
        userName->setText(QCoreApplication::translate("PersonalCenter", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lostNum->setText(QCoreApplication::translate("PersonalCenter", "\345\275\223\345\211\215\344\270\242\345\244\261\347\211\251\345\223\201\346\225\260\357\274\232", nullptr));
        foundNum->setText(QCoreApplication::translate("PersonalCenter", "\345\275\223\345\211\215\346\215\241\345\217\226\347\211\251\345\223\201\346\225\260\357\274\232", nullptr));
        lookFound->setText(QCoreApplication::translate("PersonalCenter", "\346\237\245\347\234\213\345\205\250\351\203\250", nullptr));
        lookLost->setText(QCoreApplication::translate("PersonalCenter", "\346\237\245\347\234\213\345\205\250\351\203\250", nullptr));
        label_1->setText(QString());
        modify->setText(QCoreApplication::translate("PersonalCenter", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        exit->setText(QCoreApplication::translate("PersonalCenter", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonalCenter: public Ui_PersonalCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALCENTER_H
