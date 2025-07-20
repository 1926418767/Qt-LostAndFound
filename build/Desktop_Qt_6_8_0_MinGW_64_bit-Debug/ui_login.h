/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *heading;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *userNameEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *userNameLabel;
    QLineEdit *passwordEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *passwordLabel;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *user;
    QSpacerItem *horizontalSpacer_7;
    QRadioButton *administrator;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *register_1;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(498, 330);
        Login->setMinimumSize(QSize(498, 330));
        Login->setMaximumSize(QSize(498, 330));
        Login->setContextMenuPolicy(Qt::ActionsContextMenu);
        Login->setStyleSheet(QString::fromUtf8("QPushButton:focus {\n"
"    border-color: transparent;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Login);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget_2 = new QWidget(Login);
        widget_2->setObjectName("widget_2");
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        heading = new QLabel(widget_2);
        heading->setObjectName("heading");
        QFont font;
        font.setPointSize(20);
        heading->setFont(font);
        heading->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(heading);


        verticalLayout_2->addWidget(widget_2);

        widget = new QWidget(Login);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        userNameEdit = new QLineEdit(widget);
        userNameEdit->setObjectName("userNameEdit");
        QFont font1;
        font1.setPointSize(9);
        userNameEdit->setFont(font1);

        gridLayout_2->addWidget(userNameEdit, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        userNameLabel = new QLabel(widget);
        userNameLabel->setObjectName("userNameLabel");
        QFont font2;
        font2.setPointSize(12);
        userNameLabel->setFont(font2);

        gridLayout_2->addWidget(userNameLabel, 0, 1, 1, 1);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(passwordEdit, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font2);

        gridLayout_2->addWidget(passwordLabel, 1, 1, 1, 1);


        verticalLayout_2->addWidget(widget);

        widget_3 = new QWidget(Login);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        user = new QRadioButton(widget_3);
        user->setObjectName("user");

        horizontalLayout_2->addWidget(user);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        administrator = new QRadioButton(widget_3);
        administrator->setObjectName("administrator");

        horizontalLayout_2->addWidget(administrator);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(Login);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        login = new QPushButton(widget_4);
        login->setObjectName("login");
        login->setFocusPolicy(Qt::NoFocus);
        login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-color: red;\n"
"}"));

        horizontalLayout_3->addWidget(login);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        register_1 = new QPushButton(widget_4);
        register_1->setObjectName("register_1");
        register_1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(register_1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        exit = new QPushButton(widget_4);
        exit->setObjectName("exit");
        exit->setEnabled(true);
        exit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(exit);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        heading->setText(QCoreApplication::translate("Login", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237", nullptr));
        userNameLabel->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", nullptr));
        user->setText(QCoreApplication::translate("Login", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        administrator->setText(QCoreApplication::translate("Login", "\347\256\241\347\220\206\344\272\272\345\221\230", nullptr));
        login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        register_1->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        exit->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
