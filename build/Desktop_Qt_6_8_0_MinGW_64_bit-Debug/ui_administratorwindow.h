/********************************************************************************
** Form generated from reading UI file 'administratorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATORWINDOW_H
#define UI_ADMINISTRATORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministratorWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdministratorWindow)
    {
        if (AdministratorWindow->objectName().isEmpty())
            AdministratorWindow->setObjectName("AdministratorWindow");
        AdministratorWindow->resize(1536, 801);
        centralwidget = new QWidget(AdministratorWindow);
        centralwidget->setObjectName("centralwidget");
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(30, -70, 651, 231));
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
        AdministratorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdministratorWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1536, 25));
        AdministratorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdministratorWindow);
        statusbar->setObjectName("statusbar");
        AdministratorWindow->setStatusBar(statusbar);

        retranslateUi(AdministratorWindow);

        QMetaObject::connectSlotsByName(AdministratorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdministratorWindow)
    {
        AdministratorWindow->setWindowTitle(QCoreApplication::translate("AdministratorWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("AdministratorWindow", "\345\244\261\347\211\251\346\213\233\351\242\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministratorWindow: public Ui_AdministratorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORWINDOW_H
