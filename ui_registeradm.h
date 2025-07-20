/********************************************************************************
** Form generated from reading UI file 'registeradm.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERADM_H
#define UI_REGISTERADM_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterAdm
{
public:
    QLabel *label_6;
    QLabel *label_7;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *userNameLabel;
    QLineEdit *userNameEdit;
    QLabel *label;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QLabel *label_2;
    QLabel *passwordAgain;
    QLineEdit *passwordAgainEdit;
    QLabel *label_3;
    QLabel *heading;
    QLabel *label_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *register_1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;

    void setupUi(QDialog *RegisterAdm)
    {
        if (RegisterAdm->objectName().isEmpty())
            RegisterAdm->setObjectName("RegisterAdm");
        RegisterAdm->resize(498, 330);
        RegisterAdm->setMinimumSize(QSize(498, 330));
        RegisterAdm->setMaximumSize(QSize(498, 330));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        RegisterAdm->setWindowIcon(icon);
        label_6 = new QLabel(RegisterAdm);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(440, 171, 69, 19));
        label_6->setStyleSheet(QString::fromUtf8("color: red;"));
        label_7 = new QLabel(RegisterAdm);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(51, 203, 241, 19));
        widget = new QWidget(RegisterAdm);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 70, 411, 138));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        userNameLabel = new QLabel(widget);
        userNameLabel->setObjectName("userNameLabel");
        QFont font;
        font.setPointSize(12);
        userNameLabel->setFont(font);

        gridLayout->addWidget(userNameLabel, 0, 0, 1, 1);

        userNameEdit = new QLineEdit(widget);
        userNameEdit->setObjectName("userNameEdit");
        QFont font1;
        font1.setPointSize(9);
        userNameEdit->setFont(font1);

        gridLayout->addWidget(userNameEdit, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font);

        gridLayout->addWidget(passwordLabel, 1, 0, 1, 1);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordEdit, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        passwordAgain = new QLabel(widget);
        passwordAgain->setObjectName("passwordAgain");
        passwordAgain->setFont(font);

        gridLayout->addWidget(passwordAgain, 2, 0, 1, 1);

        passwordAgainEdit = new QLineEdit(widget);
        passwordAgainEdit->setObjectName("passwordAgainEdit");
        passwordAgainEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordAgainEdit, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: yellow;"));

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        heading = new QLabel(RegisterAdm);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(20, 23, 454, 42));
        QFont font3;
        font3.setPointSize(20);
        heading->setFont(font3);
        heading->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(RegisterAdm);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(440, 89, 69, 19));
        label_4->setStyleSheet(QString::fromUtf8("color: red;"));
        widget_4 = new QWidget(RegisterAdm);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(11, 224, 463, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        register_1 = new QPushButton(widget_4);
        register_1->setObjectName("register_1");
        register_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(register_1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        exit = new QPushButton(widget_4);
        exit->setObjectName("exit");
        exit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(exit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_5 = new QLabel(RegisterAdm);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(440, 130, 69, 19));
        label_5->setStyleSheet(QString::fromUtf8("color: red;"));

        retranslateUi(RegisterAdm);

        QMetaObject::connectSlotsByName(RegisterAdm);
    } // setupUi

    void retranslateUi(QDialog *RegisterAdm)
    {
        RegisterAdm->setWindowTitle(QCoreApplication::translate("RegisterAdm", "\346\267\273\345\212\240", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("RegisterAdm", "\347\224\250\346\210\267\345\220\215\344\270\216\345\257\206\347\240\201\345\235\207\344\270\215\350\203\275\350\266\205\350\277\20716\344\270\252\345\255\227\347\254\246", nullptr));
        userNameLabel->setText(QCoreApplication::translate("RegisterAdm", "\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        userNameEdit->setPlaceholderText(QCoreApplication::translate("RegisterAdm", "\346\225\260\345\255\227\343\200\201\345\255\227\346\257\215\347\273\204\346\210\220", nullptr));
        label->setText(QCoreApplication::translate("RegisterAdm", "\357\274\201", nullptr));
        passwordLabel->setText(QCoreApplication::translate("RegisterAdm", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        passwordEdit->setPlaceholderText(QCoreApplication::translate("RegisterAdm", "\346\225\260\345\255\227\343\200\201\345\255\227\346\257\215\343\200\201\347\211\271\346\256\212\345\255\227\347\254\246\347\273\204\346\210\220\357\274\214\344\270\215\345\260\217\344\272\2166\344\275\215", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterAdm", "\357\274\201", nullptr));
        passwordAgain->setText(QCoreApplication::translate("RegisterAdm", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterAdm", "\357\274\201", nullptr));
        heading->setText(QCoreApplication::translate("RegisterAdm", "\346\267\273\345\212\240\346\226\260\347\256\241\347\220\206\345\221\230", nullptr));
        label_4->setText(QString());
        register_1->setText(QCoreApplication::translate("RegisterAdm", "\346\263\250\345\206\214", nullptr));
        exit->setText(QCoreApplication::translate("RegisterAdm", "\350\277\224\345\233\236", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegisterAdm: public Ui_RegisterAdm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERADM_H
