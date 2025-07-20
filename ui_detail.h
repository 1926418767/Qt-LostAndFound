/********************************************************************************
** Form generated from reading UI file 'detail.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_H
#define UI_DETAIL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Detail
{
public:
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *userName;
    QTextBrowser *textBrowser;
    QWidget *month;
    QHBoxLayout *horizontalLayout;
    QLabel *lostTime;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *place;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *information;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lostThing;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *image;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *exit;

    void setupUi(QDialog *Detail)
    {
        if (Detail->objectName().isEmpty())
            Detail->setObjectName("Detail");
        Detail->resize(919, 714);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Image/guet.png"), QSize(), QIcon::Normal, QIcon::Off);
        Detail->setWindowIcon(icon);
        widget_6 = new QWidget(Detail);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(-10, 30, 511, 491));
        widget_6->setMinimumSize(QSize(0, 0));
        widget_6->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(widget_6);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        userName = new QLabel(widget_7);
        userName->setObjectName("userName");
        QFont font;
        font.setPointSize(14);
        userName->setFont(font);

        horizontalLayout_6->addWidget(userName);


        gridLayout_2->addWidget(widget_7, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(widget_6);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMinimumSize(QSize(464, 139));
        textBrowser->setMaximumSize(QSize(464, 139));
        QFont font1;
        font1.setPointSize(12);
        textBrowser->setFont(font1);
        textBrowser->setFocusPolicy(Qt::NoFocus);

        gridLayout_2->addWidget(textBrowser, 7, 0, 1, 1);

        month = new QWidget(widget_6);
        month->setObjectName("month");
        horizontalLayout = new QHBoxLayout(month);
        horizontalLayout->setObjectName("horizontalLayout");
        lostTime = new QLabel(month);
        lostTime->setObjectName("lostTime");
        lostTime->setFont(font);

        horizontalLayout->addWidget(lostTime);


        gridLayout_2->addWidget(month, 3, 0, 1, 1);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        place = new QLabel(widget_4);
        place->setObjectName("place");
        place->setFont(font);

        horizontalLayout_4->addWidget(place);


        gridLayout_2->addWidget(widget_4, 4, 0, 1, 1);

        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName("widget_8");
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        information = new QLabel(widget_8);
        information->setObjectName("information");
        information->setFont(font);

        horizontalLayout_7->addWidget(information);


        gridLayout_2->addWidget(widget_8, 6, 0, 1, 1);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lostThing = new QLabel(widget_5);
        lostThing->setObjectName("lostThing");
        lostThing->setFont(font);

        horizontalLayout_5->addWidget(lostThing);


        gridLayout_2->addWidget(widget_5, 1, 0, 1, 1);

        widget_10 = new QWidget(Detail);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(490, 30, 421, 501));
        verticalLayout = new QVBoxLayout(widget_10);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(widget_10);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 397, 477));
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

        widget_9 = new QWidget(Detail);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(400, 560, 121, 63));
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        exit = new QPushButton(widget_9);
        exit->setObjectName("exit");
        exit->setMinimumSize(QSize(101, 41));
        exit->setMaximumSize(QSize(101, 41));
        exit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(exit);


        retranslateUi(Detail);

        QMetaObject::connectSlotsByName(Detail);
    } // setupUi

    void retranslateUi(QDialog *Detail)
    {
        Detail->setWindowTitle(QCoreApplication::translate("Detail", "\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        userName->setText(QCoreApplication::translate("Detail", "\347\224\250\346\210\267\357\274\232", nullptr));
        lostTime->setText(QCoreApplication::translate("Detail", "\346\227\266\351\227\264\357\274\232  ", nullptr));
        place->setText(QCoreApplication::translate("Detail", "\345\234\260\347\202\271\357\274\232", nullptr));
        information->setText(QCoreApplication::translate("Detail", "\345\205\267\344\275\223\344\277\241\346\201\257\357\274\232", nullptr));
        lostThing->setText(QCoreApplication::translate("Detail", "\345\220\215\347\247\260\357\274\232", nullptr));
        image->setText(QString());
        exit->setText(QCoreApplication::translate("Detail", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detail: public Ui_Detail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_H
