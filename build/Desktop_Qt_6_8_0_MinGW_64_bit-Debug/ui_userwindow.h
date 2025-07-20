/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;
    QLabel *personalCenter;
    QLabel *signOut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName("UserWindow");
        UserWindow->resize(1536, 801);
        QFont font;
        font.setPointSize(9);
        UserWindow->setFont(font);
        centralwidget = new QWidget(UserWindow);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(30, -70, 651, 231));
        QFont font1;
        font1.setPointSize(34);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        title->setFont(font1);
        title->setContextMenuPolicy(Qt::CustomContextMenu);
        title->setLayoutDirection(Qt::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    letter-spacing: 30px; /* \350\256\276\347\275\256\345\255\227\351\227\264\350\267\235\344\270\2722\345\203\217\347\264\240 */\n"
"}"));
        title->setLineWidth(1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 160, 250, 250));
        QFont font2;
        font2.setPointSize(20);
        pushButton->setFont(font2);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(370, 160, 250, 250));
        pushButton_2->setFont(font2);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(720, 160, 250, 250));
        pushButton_3->setFont(font2);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1050, 160, 250, 250));
        pushButton_4->setFont(font2);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 460, 250, 250));
        pushButton_5->setFont(font2);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(370, 460, 250, 250));
        pushButton_6->setFont(font2);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(1250, 10, 261, 21));
        QFont font3;
        font3.setPointSize(12);
        label->setFont(font3);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        personalCenter = new QLabel(centralwidget);
        personalCenter->setObjectName("personalCenter");
        personalCenter->setGeometry(QRect(1440, 40, 81, 19));
        QFont font4;
        font4.setPointSize(12);
        font4.setUnderline(true);
        personalCenter->setFont(font4);
        personalCenter->setCursor(QCursor(Qt::OpenHandCursor));
        personalCenter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        signOut = new QLabel(centralwidget);
        signOut->setObjectName("signOut");
        signOut->setGeometry(QRect(1440, 70, 81, 20));
        signOut->setFont(font4);
        signOut->setCursor(QCursor(Qt::OpenHandCursor));
        signOut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        UserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1536, 25));
        UserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserWindow);
        statusbar->setObjectName("statusbar");
        UserWindow->setStatusBar(statusbar);

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindow)
    {
        UserWindow->setWindowTitle(QCoreApplication::translate("UserWindow", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237\347\224\250\346\210\267\347\253\257", nullptr));
        title->setText(QCoreApplication::translate("UserWindow", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237", nullptr));
        pushButton->setText(QCoreApplication::translate("UserWindow", "\345\217\221\345\270\203\345\244\261\347\211\251\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserWindow", "\345\217\221\345\270\203\346\215\241\347\211\251\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UserWindow", "\346\222\244\351\224\200\345\244\261\347\211\251\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("UserWindow", "\346\222\244\351\224\200\346\215\241\347\211\251\344\277\241\346\201\257", nullptr));
        pushButton_5->setText(QCoreApplication::translate("UserWindow", "\346\237\245\347\234\213\345\244\261\347\211\251\346\261\207\346\200\273", nullptr));
        pushButton_6->setText(QCoreApplication::translate("UserWindow", "\346\237\245\347\234\213\346\215\241\347\211\251\346\261\207\346\200\273", nullptr));
        label->setText(QCoreApplication::translate("UserWindow", "\347\224\250\346\210\267\357\274\23212345", nullptr));
        personalCenter->setText(QCoreApplication::translate("UserWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        signOut->setText(QCoreApplication::translate("UserWindow", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
