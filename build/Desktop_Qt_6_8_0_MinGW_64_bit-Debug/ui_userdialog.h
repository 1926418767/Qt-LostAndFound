/********************************************************************************
** Form generated from reading UI file 'userdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDIALOG_H
#define UI_USERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *title;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *personalCenter;
    QLabel *signOut;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addLost;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addFound;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *revokeLost;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *revokeFound;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *allLost;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *allFound;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *UserDialog)
    {
        if (UserDialog->objectName().isEmpty())
            UserDialog->setObjectName("UserDialog");
        UserDialog->resize(1536, 801);
        verticalLayout_2 = new QVBoxLayout(UserDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(UserDialog);
        widget->setObjectName("widget");
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

        personalCenter = new QLabel(widget_4);
        personalCenter->setObjectName("personalCenter");
        personalCenter->setMaximumSize(QSize(80, 16777215));
        QFont font2;
        font2.setPointSize(12);
        font2.setUnderline(true);
        personalCenter->setFont(font2);
        personalCenter->setCursor(QCursor(Qt::OpenHandCursor));
        personalCenter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        personalCenter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(personalCenter);

        signOut = new QLabel(widget_4);
        signOut->setObjectName("signOut");
        signOut->setMaximumSize(QSize(80, 16777215));
        signOut->setFont(font2);
        signOut->setCursor(QCursor(Qt::OpenHandCursor));
        signOut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        signOut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(signOut);


        horizontalLayout_3->addWidget(widget_4);


        verticalLayout_2->addWidget(widget);

        verticalSpacer_6 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        widget_2 = new QWidget(UserDialog);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addLost = new QPushButton(widget_2);
        addLost->setObjectName("addLost");
        addLost->setMinimumSize(QSize(250, 250));
        addLost->setMaximumSize(QSize(250, 250));
        addLost->setSizeIncrement(QSize(0, 0));
        QFont font3;
        font3.setPointSize(20);
        addLost->setFont(font3);
        addLost->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(addLost);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        addFound = new QPushButton(widget_2);
        addFound->setObjectName("addFound");
        addFound->setMinimumSize(QSize(250, 250));
        addFound->setMaximumSize(QSize(250, 250));
        addFound->setFont(font3);
        addFound->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(addFound);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        revokeLost = new QPushButton(widget_2);
        revokeLost->setObjectName("revokeLost");
        revokeLost->setMinimumSize(QSize(250, 250));
        revokeLost->setMaximumSize(QSize(250, 250));
        revokeLost->setFont(font3);
        revokeLost->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(revokeLost);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        revokeFound = new QPushButton(widget_2);
        revokeFound->setObjectName("revokeFound");
        revokeFound->setMinimumSize(QSize(250, 250));
        revokeFound->setMaximumSize(QSize(250, 250));
        revokeFound->setFont(font3);
        revokeFound->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(revokeFound);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        widget_3 = new QWidget(UserDialog);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

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

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        retranslateUi(UserDialog);

        QMetaObject::connectSlotsByName(UserDialog);
    } // setupUi

    void retranslateUi(QDialog *UserDialog)
    {
        UserDialog->setWindowTitle(QCoreApplication::translate("UserDialog", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("UserDialog", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("UserDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        personalCenter->setText(QCoreApplication::translate("UserDialog", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        signOut->setText(QCoreApplication::translate("UserDialog", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        addLost->setText(QCoreApplication::translate("UserDialog", "\345\217\221\345\270\203\345\244\261\347\211\251\344\277\241\346\201\257", nullptr));
        addFound->setText(QCoreApplication::translate("UserDialog", "\345\217\221\345\270\203\346\215\241\347\211\251\344\277\241\346\201\257", nullptr));
        revokeLost->setText(QCoreApplication::translate("UserDialog", "\346\222\244\351\224\200\345\244\261\347\211\251\344\277\241\346\201\257", nullptr));
        revokeFound->setText(QCoreApplication::translate("UserDialog", "\346\222\244\351\224\200\346\215\241\347\211\251\344\277\241\346\201\257", nullptr));
        allLost->setText(QCoreApplication::translate("UserDialog", "\346\237\245\347\234\213\345\244\261\347\211\251\346\261\207\346\200\273", nullptr));
        allFound->setText(QCoreApplication::translate("UserDialog", "\346\237\245\347\234\213\346\215\241\347\211\251\346\261\207\346\200\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDialog: public Ui_UserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDIALOG_H
