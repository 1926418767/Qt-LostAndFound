/********************************************************************************
** Form generated from reading UI file 'addlost.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLOST_H
#define UI_ADDLOST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddLost
{
public:
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *title;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *userName;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *thing;
    QLineEdit *nameEdit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lostPlace;
    QLineEdit *placeEdit;
    QTextEdit *textEdit;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lostTime;
    QSpinBox *year;
    QLabel *label;
    QSpinBox *month;
    QLabel *label_2;
    QSpinBox *day;
    QLabel *label_3;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *confirm;
    QPushButton *exit;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *image;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pathEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddLost)
    {
        if (AddLost->objectName().isEmpty())
            AddLost->setObjectName("AddLost");
        AddLost->resize(919, 714);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddLost->setWindowIcon(icon);
        widget_2 = new QWidget(AddLost);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 10, 891, 76));
        widget_2->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        title = new QLabel(widget_2);
        title->setObjectName("title");
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        title->setFont(font);

        horizontalLayout_2->addWidget(title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget_6 = new QWidget(AddLost);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(10, 90, 491, 461));
        gridLayout_2 = new QGridLayout(widget_6);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        userName = new QLabel(widget_7);
        userName->setObjectName("userName");
        QFont font1;
        font1.setPointSize(14);
        userName->setFont(font1);

        horizontalLayout_6->addWidget(userName);


        gridLayout_2->addWidget(widget_7, 0, 1, 1, 1);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        thing = new QLabel(widget_5);
        thing->setObjectName("thing");
        thing->setFont(font1);

        horizontalLayout_5->addWidget(thing);

        nameEdit = new QLineEdit(widget_5);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setMinimumSize(QSize(320, 0));
        nameEdit->setMaximumSize(QSize(320, 16777215));
        nameEdit->setFont(font1);

        horizontalLayout_5->addWidget(nameEdit);


        gridLayout_2->addWidget(widget_5, 1, 1, 1, 1);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lostPlace = new QLabel(widget_4);
        lostPlace->setObjectName("lostPlace");
        lostPlace->setFont(font1);

        horizontalLayout_4->addWidget(lostPlace);

        placeEdit = new QLineEdit(widget_4);
        placeEdit->setObjectName("placeEdit");
        placeEdit->setMinimumSize(QSize(320, 0));
        placeEdit->setMaximumSize(QSize(320, 16777215));
        placeEdit->setFont(font1);

        horizontalLayout_4->addWidget(placeEdit);


        gridLayout_2->addWidget(widget_4, 4, 1, 1, 1);

        textEdit = new QTextEdit(widget_6);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(464, 139));
        textEdit->setMaximumSize(QSize(464, 139));
        QFont font2;
        font2.setPointSize(12);
        textEdit->setFont(font2);
        textEdit->setFocusPolicy(Qt::ClickFocus);

        gridLayout_2->addWidget(textEdit, 6, 1, 1, 1);

        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName("widget_8");
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(widget_8);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_7->addWidget(label_5);


        gridLayout_2->addWidget(widget_8, 5, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        widget = new QWidget(widget_6);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        lostTime = new QLabel(widget);
        lostTime->setObjectName("lostTime");
        lostTime->setFont(font1);

        horizontalLayout->addWidget(lostTime);

        year = new QSpinBox(widget);
        year->setObjectName("year");
        year->setMinimumSize(QSize(80, 25));
        year->setMaximumSize(QSize(80, 25));
        year->setFont(font1);
        year->setMaximum(2050);
        year->setValue(2024);

        horizontalLayout->addWidget(year);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        month = new QSpinBox(widget);
        month->setObjectName("month");
        month->setMinimumSize(QSize(50, 25));
        month->setMaximumSize(QSize(44, 25));
        month->setFont(font1);
        month->setMinimum(1);
        month->setMaximum(12);
        month->setValue(1);

        horizontalLayout->addWidget(month);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        day = new QSpinBox(widget);
        day->setObjectName("day");
        day->setMinimumSize(QSize(50, 25));
        day->setMaximumSize(QSize(44, 25));
        day->setFont(font1);
        day->setMinimum(1);
        day->setMaximum(31);

        horizontalLayout->addWidget(day);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);


        gridLayout_2->addWidget(widget, 3, 1, 1, 1);

        widget_9 = new QWidget(AddLost);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(10, 620, 891, 63));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        confirm = new QPushButton(widget_9);
        confirm->setObjectName("confirm");
        confirm->setMinimumSize(QSize(101, 41));
        confirm->setMaximumSize(QSize(101, 41));
        confirm->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(confirm);

        exit = new QPushButton(widget_9);
        exit->setObjectName("exit");
        exit->setMinimumSize(QSize(101, 41));
        exit->setMaximumSize(QSize(101, 41));
        exit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(exit);

        widget_10 = new QWidget(AddLost);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(500, 100, 381, 451));
        verticalLayout = new QVBoxLayout(widget_10);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(widget_10);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 357, 370));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        image = new QLabel(scrollAreaWidgetContents);
        image->setObjectName("image");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);
        image->setFrameShape(QFrame::NoFrame);
        image->setPixmap(QPixmap(QString::fromUtf8("Image/R-C.png")));
        image->setScaledContents(true);

        gridLayout->addWidget(image, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        widget_3 = new QWidget(widget_10);
        widget_3->setObjectName("widget_3");
        widget_3->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pathEdit = new QLineEdit(widget_3);
        pathEdit->setObjectName("pathEdit");

        horizontalLayout_3->addWidget(pathEdit);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(70, 16777215));
        pushButton->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(70, 16777215));
        pushButton_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addWidget(widget_3);


        retranslateUi(AddLost);

        QMetaObject::connectSlotsByName(AddLost);
    } // setupUi

    void retranslateUi(QDialog *AddLost)
    {
        AddLost->setWindowTitle(QCoreApplication::translate("AddLost", "\345\217\221\345\270\203", nullptr));
        title->setText(QCoreApplication::translate("AddLost", "\345\217\221 \345\270\203 \345\244\261 \347\211\251 \344\277\241 \346\201\257", nullptr));
        userName->setText(QCoreApplication::translate("AddLost", "\347\224\250\346\210\267\357\274\232", nullptr));
        thing->setText(QCoreApplication::translate("AddLost", "\347\211\251\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        nameEdit->setText(QString());
        nameEdit->setPlaceholderText(QCoreApplication::translate("AddLost", "\344\270\215\350\266\205\350\277\20720\345\255\227", nullptr));
        lostPlace->setText(QCoreApplication::translate("AddLost", "\344\270\242\345\244\261\345\234\260\347\202\271\357\274\232", nullptr));
        placeEdit->setPlaceholderText(QCoreApplication::translate("AddLost", "\344\270\215\350\266\205\350\277\20720\345\255\227", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("AddLost", "\345\217\257\350\276\223\345\205\245\347\211\251\345\223\201\347\232\204\345\205\267\344\275\223\347\211\271\345\276\201\357\274\214\345\271\266\345\212\241\345\277\205\345\206\215\346\254\241\347\225\231\344\270\213\344\273\273\344\275\225\345\217\257\350\241\214\347\232\204\350\201\224\347\263\273\346\226\271\345\274\217(\347\224\265\350\257\235\345\217\267\347\240\201\343\200\201\345\276\256\344\277\241\343\200\201QQ\347\255\211)\343\200\202\344\270\215\350\266\205\350\277\207150\345\255\227\343\200\202", nullptr));
        label_5->setText(QCoreApplication::translate("AddLost", "\345\205\267\344\275\223\344\277\241\346\201\257\357\274\232", nullptr));
        lostTime->setText(QCoreApplication::translate("AddLost", "\344\270\242\345\244\261\346\227\266\351\227\264\357\274\232  ", nullptr));
        label->setText(QCoreApplication::translate("AddLost", "\345\271\264", nullptr));
        label_2->setText(QCoreApplication::translate("AddLost", "\346\234\210", nullptr));
        label_3->setText(QCoreApplication::translate("AddLost", "\346\227\245", nullptr));
        confirm->setText(QCoreApplication::translate("AddLost", "\345\217\221\345\270\203", nullptr));
        exit->setText(QCoreApplication::translate("AddLost", "\350\277\224\345\233\236", nullptr));
        image->setText(QString());
        pathEdit->setPlaceholderText(QCoreApplication::translate("AddLost", "\345\217\257\351\200\211\351\241\271", nullptr));
        pushButton->setText(QCoreApplication::translate("AddLost", "\344\270\212\344\274\240\345\233\276\347\211\207", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddLost", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddLost: public Ui_AddLost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLOST_H
