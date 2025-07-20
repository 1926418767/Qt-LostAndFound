/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QLabel *personalCenter;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *signOut;
    QLabel *title;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1536, 801);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(30, 460, 250, 250));
        QFont font;
        font.setPointSize(20);
        pushButton_5->setFont(font);
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 160, 250, 250));
        pushButton->setFont(font);
        pushButton->setFocusPolicy(Qt::NoFocus);
        personalCenter = new QLabel(centralwidget);
        personalCenter->setObjectName("personalCenter");
        personalCenter->setGeometry(QRect(1440, 40, 81, 19));
        QFont font1;
        font1.setPointSize(12);
        font1.setUnderline(true);
        personalCenter->setFont(font1);
        personalCenter->setCursor(QCursor(Qt::OpenHandCursor));
        personalCenter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(370, 460, 250, 250));
        pushButton_6->setFont(font);
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1050, 160, 250, 250));
        pushButton_4->setFont(font);
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(1250, 10, 261, 21));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(370, 160, 250, 250));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        signOut = new QLabel(centralwidget);
        signOut->setObjectName("signOut");
        signOut->setGeometry(QRect(1440, 70, 81, 20));
        signOut->setFont(font1);
        signOut->setCursor(QCursor(Qt::OpenHandCursor));
        signOut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(30, -70, 651, 231));
        QFont font3;
        font3.setPointSize(34);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        title->setFont(font3);
        title->setContextMenuPolicy(Qt::CustomContextMenu);
        title->setLayoutDirection(Qt::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    letter-spacing: 30px; /* \350\256\276\347\275\256\345\255\227\351\227\264\350\267\235\344\270\2722\345\203\217\347\264\240 */\n"
"}"));
        title->setLineWidth(1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(720, 160, 250, 250));
        pushButton_3->setFont(font);
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1536, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\345\244\261\347\211\251\346\261\207\346\200\273", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\345\270\203\345\244\261\347\211\251\344\277\241\346\201\257", nullptr));
        personalCenter->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\346\215\241\347\211\251\346\261\207\346\200\273", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\346\215\241\347\211\251\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\357\274\23212345", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\217\221\345\270\203\346\215\241\347\211\251\344\277\241\346\201\257", nullptr));
        signOut->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\351\231\206", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\345\244\261\347\211\251\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
