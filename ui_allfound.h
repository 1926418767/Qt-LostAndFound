/********************************************************************************
** Form generated from reading UI file 'allfound.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLFOUND_H
#define UI_ALLFOUND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllFound
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QPushButton *confirm;
    QTableWidget *tableWidget;
    QPushButton *exit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *year;
    QLabel *label_5;
    QSpinBox *month;
    QLabel *label_4;
    QSpinBox *day;
    QLabel *label_3;
    QSpinBox *year_2;
    QLabel *label_7;
    QSpinBox *month_2;
    QLabel *label_8;
    QSpinBox *day_2;
    QLabel *label_9;
    QPushButton *reset;

    void setupUi(QDialog *AllFound)
    {
        if (AllFound->objectName().isEmpty())
            AllFound->setObjectName("AllFound");
        AllFound->resize(1536, 801);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        AllFound->setWindowIcon(icon);
        widget = new QWidget(AllFound);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 1521, 91));
        widget->setFocusPolicy(Qt::WheelFocus);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(600, 35));
        lineEdit->setMaximumSize(QSize(600, 35));
        lineEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(70, 0));
        pushButton->setMaximumSize(QSize(70, 16777215));
        pushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButton);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(70, 16777215));
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(600, 35));
        lineEdit_2->setMaximumSize(QSize(600, 35));
        lineEdit_2->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(70, 0));
        pushButton_2->setMaximumSize(QSize(70, 16777215));
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButton_2);

        confirm = new QPushButton(AllFound);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(960, 130, 101, 31));
        confirm->setFont(font);
        confirm->setFocusPolicy(Qt::NoFocus);
        tableWidget = new QTableWidget(AllFound);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(30, 180, 1481, 561));
        tableWidget->setFont(font);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        exit = new QPushButton(AllFound);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(1410, 750, 101, 31));
        exit->setFont(font);
        exit->setFocusPolicy(Qt::NoFocus);
        widget_2 = new QWidget(AllFound);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(100, 120, 753, 51));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        year = new QSpinBox(widget_2);
        year->setObjectName("year");
        year->setMinimumSize(QSize(80, 25));
        year->setMaximumSize(QSize(80, 25));
        year->setFont(font);
        year->setFocusPolicy(Qt::NoFocus);
        year->setWrapping(false);
        year->setMinimum(2005);
        year->setMaximum(2050);
        year->setValue(2005);
        year->setDisplayIntegerBase(10);

        horizontalLayout_2->addWidget(year);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        month = new QSpinBox(widget_2);
        month->setObjectName("month");
        month->setMinimumSize(QSize(50, 25));
        month->setMaximumSize(QSize(44, 25));
        month->setFont(font);
        month->setFocusPolicy(Qt::NoFocus);
        month->setMinimum(1);
        month->setMaximum(12);
        month->setValue(1);

        horizontalLayout_2->addWidget(month);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        day = new QSpinBox(widget_2);
        day->setObjectName("day");
        day->setMinimumSize(QSize(50, 25));
        day->setMaximumSize(QSize(44, 25));
        day->setFont(font);
        day->setFocusPolicy(Qt::NoFocus);
        day->setMinimum(1);
        day->setMaximum(31);

        horizontalLayout_2->addWidget(day);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        year_2 = new QSpinBox(widget_2);
        year_2->setObjectName("year_2");
        year_2->setMinimumSize(QSize(80, 25));
        year_2->setMaximumSize(QSize(80, 25));
        year_2->setFont(font);
        year_2->setFocusPolicy(Qt::NoFocus);
        year_2->setWrapping(false);
        year_2->setMinimum(2005);
        year_2->setMaximum(2050);
        year_2->setValue(2050);
        year_2->setDisplayIntegerBase(10);

        horizontalLayout_2->addWidget(year_2);

        label_7 = new QLabel(widget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_2->addWidget(label_7);

        month_2 = new QSpinBox(widget_2);
        month_2->setObjectName("month_2");
        month_2->setMinimumSize(QSize(50, 25));
        month_2->setMaximumSize(QSize(44, 25));
        month_2->setFont(font);
        month_2->setFocusPolicy(Qt::NoFocus);
        month_2->setMinimum(1);
        month_2->setMaximum(12);
        month_2->setValue(1);

        horizontalLayout_2->addWidget(month_2);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_2->addWidget(label_8);

        day_2 = new QSpinBox(widget_2);
        day_2->setObjectName("day_2");
        day_2->setMinimumSize(QSize(50, 25));
        day_2->setMaximumSize(QSize(44, 25));
        day_2->setFont(font);
        day_2->setFocusPolicy(Qt::NoFocus);
        day_2->setMinimum(1);
        day_2->setMaximum(31);

        horizontalLayout_2->addWidget(day_2);

        label_9 = new QLabel(widget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_2->addWidget(label_9);

        reset = new QPushButton(AllFound);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(1100, 130, 101, 31));
        reset->setFont(font);
        reset->setFocusPolicy(Qt::NoFocus);

        retranslateUi(AllFound);

        QMetaObject::connectSlotsByName(AllFound);
    } // setupUi

    void retranslateUi(QDialog *AllFound)
    {
        AllFound->setWindowTitle(QCoreApplication::translate("AllFound", "\346\215\241\347\211\251\346\261\207\346\200\273", nullptr));
        label->setText(QCoreApplication::translate("AllFound", "\347\224\250\346\210\267\357\274\232", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("AllFound", "\346\250\241\347\263\212\346\220\234\347\264\242\350\276\223\345\205\245", nullptr));
        pushButton->setText(QCoreApplication::translate("AllFound", "\344\277\256\346\224\271", nullptr));
        label_6->setText(QCoreApplication::translate("AllFound", "\347\211\251\345\223\201\357\274\232", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("AllFound", "\346\250\241\347\263\212\346\220\234\347\264\242\350\276\223\345\205\245", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AllFound", "\344\277\256\346\224\271", nullptr));
        confirm->setText(QCoreApplication::translate("AllFound", "\346\237\245\350\257\242", nullptr));
        exit->setText(QCoreApplication::translate("AllFound", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("AllFound", "\346\227\266\351\227\264\350\214\203\345\233\264\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AllFound", "\345\271\264", nullptr));
        label_4->setText(QCoreApplication::translate("AllFound", "\346\234\210", nullptr));
        label_3->setText(QCoreApplication::translate("AllFound", "\346\227\245~", nullptr));
        label_7->setText(QCoreApplication::translate("AllFound", "\345\271\264", nullptr));
        label_8->setText(QCoreApplication::translate("AllFound", "\346\234\210", nullptr));
        label_9->setText(QCoreApplication::translate("AllFound", "\346\227\245", nullptr));
        reset->setText(QCoreApplication::translate("AllFound", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllFound: public Ui_AllFound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLFOUND_H
