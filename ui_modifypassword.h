/********************************************************************************
** Form generated from reading UI file 'modifypassword.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPASSWORD_H
#define UI_MODIFYPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyPassword
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_1;
    QLineEdit *passwordAgainEdit;
    QLabel *newPasswordLabel;
    QLabel *label_3;
    QLabel *passwordAgain;
    QLineEdit *newPasswordEdit;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLabel *passwordLabel;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *confirm;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ModifyPassword)
    {
        if (ModifyPassword->objectName().isEmpty())
            ModifyPassword->setObjectName("ModifyPassword");
        ModifyPassword->resize(445, 464);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        ModifyPassword->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ModifyPassword);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_3 = new QWidget(ModifyPassword);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(widget_3);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(ModifyPassword);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_1 = new QLabel(widget);
        label_1->setObjectName("label_1");
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_1->setFont(font1);
        label_1->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_1, 0, 2, 1, 1);

        passwordAgainEdit = new QLineEdit(widget);
        passwordAgainEdit->setObjectName("passwordAgainEdit");
        passwordAgainEdit->setFocusPolicy(Qt::ClickFocus);
        passwordAgainEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordAgainEdit, 2, 1, 1, 1);

        newPasswordLabel = new QLabel(widget);
        newPasswordLabel->setObjectName("newPasswordLabel");
        QFont font2;
        font2.setPointSize(12);
        newPasswordLabel->setFont(font2);

        gridLayout->addWidget(newPasswordLabel, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:yellow;"));

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        passwordAgain = new QLabel(widget);
        passwordAgain->setObjectName("passwordAgain");
        passwordAgain->setFont(font2);

        gridLayout->addWidget(passwordAgain, 2, 0, 1, 1);

        newPasswordEdit = new QLineEdit(widget);
        newPasswordEdit->setObjectName("newPasswordEdit");
        newPasswordEdit->setFocusPolicy(Qt::ClickFocus);
        newPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newPasswordEdit, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        QFont font3;
        font3.setPointSize(9);
        passwordEdit->setFont(font3);
        passwordEdit->setFocusPolicy(Qt::ClickFocus);
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 0, 1, 1, 1);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font2);

        gridLayout->addWidget(passwordLabel, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        widget_4 = new QWidget(ModifyPassword);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(widget_4);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);


        verticalLayout->addWidget(widget_4);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        widget_2 = new QWidget(ModifyPassword);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        confirm = new QPushButton(widget_2);
        confirm->setObjectName("confirm");
        confirm->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(confirm);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        exit = new QPushButton(widget_2);
        exit->setObjectName("exit");
        exit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(exit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ModifyPassword);

        QMetaObject::connectSlotsByName(ModifyPassword);
    } // setupUi

    void retranslateUi(QDialog *ModifyPassword)
    {
        ModifyPassword->setWindowTitle(QCoreApplication::translate("ModifyPassword", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("ModifyPassword", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_1->setText(QCoreApplication::translate("ModifyPassword", "\357\274\201", nullptr));
        newPasswordLabel->setText(QCoreApplication::translate("ModifyPassword", "\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ModifyPassword", "\357\274\201", nullptr));
        passwordAgain->setText(QCoreApplication::translate("ModifyPassword", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        newPasswordEdit->setPlaceholderText(QCoreApplication::translate("ModifyPassword", "\346\225\260\345\255\227\343\200\201\345\255\227\346\257\215\343\200\201\347\211\271\346\256\212\345\255\227\347\254\246\347\273\204\346\210\220\357\274\214\344\270\215\345\260\217\344\272\2166\344\275\215", nullptr));
        label_2->setText(QCoreApplication::translate("ModifyPassword", "\357\274\201", nullptr));
        passwordEdit->setPlaceholderText(QString());
        passwordLabel->setText(QCoreApplication::translate("ModifyPassword", "\350\276\223\345\205\245\345\216\237\345\257\206\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("ModifyPassword", "\347\224\250\346\210\267\345\220\215\344\270\216\345\257\206\347\240\201\345\235\207\344\270\215\350\203\275\350\266\205\350\277\20716\344\270\252\345\255\227\347\254\246", nullptr));
        confirm->setText(QCoreApplication::translate("ModifyPassword", "\347\241\256\350\256\244", nullptr));
        exit->setText(QCoreApplication::translate("ModifyPassword", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyPassword: public Ui_ModifyPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPASSWORD_H
