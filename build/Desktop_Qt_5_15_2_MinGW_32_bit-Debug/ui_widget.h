/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addbtn;
    QPushButton *deletebtn;
    QPushButton *inbtn;
    QPushButton *outbtn;
    QPushButton *totalbtn;
    QPushButton *resultbtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *selectbtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1162, 612);
        Widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #FFF0F5; /* \346\265\205\347\262\211\350\211\262\350\203\214\346\231\257 */\n"
"    color: #FF1493;            /* \346\267\261\347\262\211\350\211\262\346\226\207\345\255\227 */\n"
"	font: 8pt \"\345\271\274\345\234\206\";\n"
"    border-radius: 8px;        /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: \"lightblue\"; /* \346\214\211\351\222\256\350\203\214\346\231\257 */\n"
"    color: white;              /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 8px 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(124, 243, 219); /* \351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\346\267\261\347\262\211\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(159, 226, 230); /* \346\214\211\344\270\213\346\227\266\346\233\264\346\267\261\347\232\204\347\262\211\350\211\262 */\n"
"}\n"
"\n"
""
                        "QLineEdit {\n"
"    background-color: #FFE4E1; /* \346\265\205\347\262\211\350\211\262\350\276\223\345\205\245\346\241\206\350\203\214\346\231\257 */\n"
"    color: #FF1493;            /* \346\267\261\347\262\211\350\211\262\346\226\207\345\255\227 */\n"
"    border: 1px solid #FF69B4;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: rgb(255, 0, 127);            /* \347\262\211\350\211\262\346\240\207\347\255\276\346\226\207\345\255\227 */\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: #FFF0F5; /* \350\241\250\346\240\274\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    alternate-background-color: #FFE4E1; /* \345\201\266\346\225\260\350\241\214\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: #FF1493;            /* \346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    gridline-color: #FF69B4;   /* \350\241\250\346\240\274\347\272\277\351\242\234\350\211\262 */\n"
"    border: 1px solid #FF69B4; /* \350\276\271\346\241\206\351\242"
                        "\234\350\211\262 */\n"
"    border-radius: 8px;\n"
"    selection-background-color: #FFB6C1; /* \351\200\211\344\270\255\345\215\225\345\205\203\346\240\274\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    selection-color: #FFFFFF;  /* \351\200\211\344\270\255\345\215\225\345\205\203\346\240\274\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: \"lightblue\"; /* \350\241\250\345\244\264\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    color: white;              /* \350\241\250\345\244\264\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"    padding: 5px;\n"
"    border: 1px solid #FF69B4; /* \350\241\250\345\244\264\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QTableCornerButton::section {\n"
"    background-color: \"lightblue\"; /* \345\267\246\344\270\212\350\247\222\346\214\211\351\222\256\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    border: 1px solid #FF6"
                        "9B4;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"	background-color: rgb(255, 155, 178);/* \345\236\202\347\233\264\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257 */\n"
"    width: 12px;\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: rgb(255, 0, 127); /* \346\273\232\345\212\250\346\235\241\346\211\213\346\237\204\351\242\234\350\211\262 */\n"
"    min-height: 20px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical,\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background-color:  rgb(255, 155, 178); /* \346\260\264\345\271\263\346\273\232\345\212\250\346\235\241\350\203\214\346\231\257 */\n"
"    height: 12px;\n"
"    margin: 0px 0px 0px 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background-color: rgb(255, 0, 127); /* \346\273\232\345\212\250\346\235\241\346\211\213\346\237\204\351\242\234\350\211\262 */\n"
"    min-width: 20px;\n"
"    border-"
                        "radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal,\n"
"QScrollBar::sub-line:horizontal {\n"
"    background: none;\n"
"}\n"
""));
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 120, 1141, 471));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 1141, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addbtn = new QPushButton(layoutWidget);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));

        horizontalLayout->addWidget(addbtn);

        deletebtn = new QPushButton(layoutWidget);
        deletebtn->setObjectName(QString::fromUtf8("deletebtn"));

        horizontalLayout->addWidget(deletebtn);

        inbtn = new QPushButton(layoutWidget);
        inbtn->setObjectName(QString::fromUtf8("inbtn"));

        horizontalLayout->addWidget(inbtn);

        outbtn = new QPushButton(layoutWidget);
        outbtn->setObjectName(QString::fromUtf8("outbtn"));

        horizontalLayout->addWidget(outbtn);

        totalbtn = new QPushButton(layoutWidget);
        totalbtn->setObjectName(QString::fromUtf8("totalbtn"));

        horizontalLayout->addWidget(totalbtn);

        resultbtn = new QPushButton(layoutWidget);
        resultbtn->setObjectName(QString::fromUtf8("resultbtn"));

        horizontalLayout->addWidget(resultbtn);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 1141, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        selectbtn = new QPushButton(layoutWidget1);
        selectbtn->setObjectName(QString::fromUtf8("selectbtn"));

        horizontalLayout_2->addWidget(selectbtn);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        addbtn->setText(QCoreApplication::translate("Widget", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        deletebtn->setText(QCoreApplication::translate("Widget", "\344\270\213\346\236\266\345\225\206\345\223\201", nullptr));
        inbtn->setText(QCoreApplication::translate("Widget", "\345\205\245\345\272\223\345\225\206\345\223\201", nullptr));
        outbtn->setText(QCoreApplication::translate("Widget", "\345\207\272\345\272\223\345\225\206\345\223\201", nullptr));
        totalbtn->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\346\261\207\346\200\273", nullptr));
        resultbtn->setText(QCoreApplication::translate("Widget", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", nullptr));
        selectbtn->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
