/********************************************************************************
** Form generated from reading UI file 'addgoods.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGOODS_H
#define UI_ADDGOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddGoods
{
public:
    QLabel *label_9;
    QTextEdit *textEdit;
    QPushButton *okbtn;
    QPushButton *canclebtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *idle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *namele;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *mountle;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *pricele;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *supplierle;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *directorle;

    void setupUi(QWidget *AddGoods)
    {
        if (AddGoods->objectName().isEmpty())
            AddGoods->setObjectName(QString::fromUtf8("AddGoods"));
        AddGoods->resize(636, 448);
        label_9 = new QLabel(AddGoods);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(330, 20, 71, 41));
        textEdit = new QTextEdit(AddGoods);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(330, 60, 291, 311));
        okbtn = new QPushButton(AddGoods);
        okbtn->setObjectName(QString::fromUtf8("okbtn"));
        okbtn->setGeometry(QRect(330, 390, 121, 41));
        canclebtn = new QPushButton(AddGoods);
        canclebtn->setObjectName(QString::fromUtf8("canclebtn"));
        canclebtn->setGeometry(QRect(500, 390, 121, 41));
        widget = new QWidget(AddGoods);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 311, 381));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        idle = new QLineEdit(widget);
        idle->setObjectName(QString::fromUtf8("idle"));

        horizontalLayout->addWidget(idle);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        namele = new QLineEdit(widget);
        namele->setObjectName(QString::fromUtf8("namele"));

        horizontalLayout_2->addWidget(namele);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        mountle = new QLineEdit(widget);
        mountle->setObjectName(QString::fromUtf8("mountle"));

        horizontalLayout_3->addWidget(mountle);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pricele = new QLineEdit(widget);
        pricele->setObjectName(QString::fromUtf8("pricele"));

        horizontalLayout_4->addWidget(pricele);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        supplierle = new QLineEdit(widget);
        supplierle->setObjectName(QString::fromUtf8("supplierle"));

        horizontalLayout_5->addWidget(supplierle);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        directorle = new QLineEdit(widget);
        directorle->setObjectName(QString::fromUtf8("directorle"));

        horizontalLayout_6->addWidget(directorle);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(AddGoods);

        QMetaObject::connectSlotsByName(AddGoods);
    } // setupUi

    void retranslateUi(QWidget *AddGoods)
    {
        AddGoods->setWindowTitle(QCoreApplication::translate("AddGoods", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        label_9->setText(QCoreApplication::translate("AddGoods", "\345\244\207\346\263\250\357\274\232", nullptr));
        okbtn->setText(QCoreApplication::translate("AddGoods", "\347\241\256\350\256\244\346\267\273\345\212\240", nullptr));
        canclebtn->setText(QCoreApplication::translate("AddGoods", "\345\217\226\346\266\210\346\223\215\344\275\234", nullptr));
        label->setText(QCoreApplication::translate("AddGoods", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddGoods", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("AddGoods", "\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("AddGoods", "\345\225\206\345\223\201\345\215\225\344\273\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("AddGoods", "\344\276\233\345\272\224\345\225\206\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("AddGoods", "\350\264\237\350\264\243\344\272\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGoods: public Ui_AddGoods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGOODS_H
