/********************************************************************************
** Form generated from reading UI file 'administratordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATORDIALOG_H
#define UI_ADMINISTRATORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministratorDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *signOut;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *allUser;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *allLost;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *allFound;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *addadm;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *AdministratorDialog)
    {
        if (AdministratorDialog->objectName().isEmpty())
            AdministratorDialog->setObjectName("AdministratorDialog");
        AdministratorDialog->resize(1536, 801);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdministratorDialog->setWindowIcon(icon);
        widget = new QWidget(AdministratorDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 1514, 133));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        title = new QLabel(widget);
        title->setObjectName("title");
        QFont font;
        font.setPointSize(34);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        title->setFont(font);
        title->setContextMenuPolicy(Qt::CustomContextMenu);
        title->setLayoutDirection(Qt::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    letter-spacing: 30px; /* \350\256\276\347\275\256\345\255\227\351\227\264\350\267\235\344\270\2722\345\203\217\347\264\240 */\n"
"}"));
        title->setLineWidth(1);

        horizontalLayout_3->addWidget(title);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setLayoutDirection(Qt::RightToLeft);
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget_4);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        signOut = new QLabel(widget_4);
        signOut->setObjectName("signOut");
        signOut->setMaximumSize(QSize(80, 16777215));
        QFont font2;
        font2.setPointSize(12);
        font2.setUnderline(true);
        signOut->setFont(font2);
        signOut->setCursor(QCursor(Qt::OpenHandCursor));
        signOut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        signOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(signOut);


        horizontalLayout_3->addWidget(widget_4);

        widget_3 = new QWidget(AdministratorDialog);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 310, 1514, 272));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        allUser = new QPushButton(widget_3);
        allUser->setObjectName("allUser");
        allUser->setMinimumSize(QSize(250, 250));
        allUser->setMaximumSize(QSize(250, 250));
        allUser->setSizeIncrement(QSize(0, 0));
        QFont font3;
        font3.setPointSize(20);
        allUser->setFont(font3);
        allUser->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(allUser);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        allLost = new QPushButton(widget_3);
        allLost->setObjectName("allLost");
        allLost->setMinimumSize(QSize(250, 250));
        allLost->setMaximumSize(QSize(250, 250));
        allLost->setFont(font3);
        allLost->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(allLost);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        allFound = new QPushButton(widget_3);
        allFound->setObjectName("allFound");
        allFound->setMinimumSize(QSize(250, 250));
        allFound->setMaximumSize(QSize(250, 250));
        allFound->setFont(font3);
        allFound->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(allFound);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        addadm = new QPushButton(widget_3);
        addadm->setObjectName("addadm");
        addadm->setMinimumSize(QSize(250, 250));
        addadm->setMaximumSize(QSize(250, 250));
        addadm->setSizeIncrement(QSize(0, 0));
        addadm->setFont(font3);
        addadm->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(addadm);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        retranslateUi(AdministratorDialog);

        QMetaObject::connectSlotsByName(AdministratorDialog);
    } // setupUi

    void retranslateUi(QDialog *AdministratorDialog)
    {
        AdministratorDialog->setWindowTitle(QCoreApplication::translate("AdministratorDialog", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237\357\274\210\347\256\241\347\220\206\345\221\230\347\253\257\357\274\211", nullptr));
        title->setText(QCoreApplication::translate("AdministratorDialog", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237\357\274\210\347\256\241\347\220\206\345\221\230\347\253\257\357\274\211", nullptr));
        label->setText(QCoreApplication::translate("AdministratorDialog", "\347\256\241\347\220\206\345\221\230\357\274\232", nullptr));
        signOut->setText(QCoreApplication::translate("AdministratorDialog", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        allUser->setText(QCoreApplication::translate("AdministratorDialog", "\346\237\245\347\234\213\346\211\200\346\234\211\347\224\250\346\210\267", nullptr));
        allLost->setText(QCoreApplication::translate("AdministratorDialog", "\346\237\245\347\234\213\345\244\261\347\211\251\346\261\207\346\200\273", nullptr));
        allFound->setText(QCoreApplication::translate("AdministratorDialog", "\346\237\245\347\234\213\346\215\241\347\211\251\346\261\207\346\200\273", nullptr));
        addadm->setText(QCoreApplication::translate("AdministratorDialog", "\346\267\273\345\212\240\345\205\266\344\273\226\347\256\241\347\220\206\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministratorDialog: public Ui_AdministratorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORDIALOG_H
