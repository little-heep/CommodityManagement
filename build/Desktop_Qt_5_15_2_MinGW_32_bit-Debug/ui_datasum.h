/********************************************************************************
** Form generated from reading UI file 'datasum.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASUM_H
#define UI_DATASUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataSum
{
public:
    QTableWidget *tableWidget;
    QPushButton *goods;
    QPushButton *in;
    QPushButton *out;
    QPushButton *copy;

    void setupUi(QWidget *DataSum)
    {
        if (DataSum->objectName().isEmpty())
            DataSum->setObjectName(QString::fromUtf8("DataSum"));
        DataSum->resize(765, 425);
        tableWidget = new QTableWidget(DataSum);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 741, 351));
        goods = new QPushButton(DataSum);
        goods->setObjectName(QString::fromUtf8("goods"));
        goods->setGeometry(QRect(280, 10, 101, 41));
        in = new QPushButton(DataSum);
        in->setObjectName(QString::fromUtf8("in"));
        in->setGeometry(QRect(400, 10, 101, 41));
        out = new QPushButton(DataSum);
        out->setObjectName(QString::fromUtf8("out"));
        out->setGeometry(QRect(520, 10, 101, 41));
        copy = new QPushButton(DataSum);
        copy->setObjectName(QString::fromUtf8("copy"));
        copy->setGeometry(QRect(640, 10, 111, 41));

        retranslateUi(DataSum);

        QMetaObject::connectSlotsByName(DataSum);
    } // setupUi

    void retranslateUi(QWidget *DataSum)
    {
        DataSum->setWindowTitle(QCoreApplication::translate("DataSum", "\346\225\260\346\215\256\346\261\207\346\200\273", nullptr));
        goods->setText(QCoreApplication::translate("DataSum", "\345\225\206\345\223\201\346\261\207\346\200\273", nullptr));
        in->setText(QCoreApplication::translate("DataSum", "\345\205\245\345\272\223\346\261\207\346\200\273", nullptr));
        out->setText(QCoreApplication::translate("DataSum", "\345\207\272\345\272\223\346\261\207\346\200\273", nullptr));
        copy->setText(QCoreApplication::translate("DataSum", "\346\225\260\346\215\256\345\244\207\344\273\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataSum: public Ui_DataSum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASUM_H
