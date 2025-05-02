/********************************************************************************
** Form generated from reading UI file 'outmount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTMOUNT_H
#define UI_OUTMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outmount
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *outmount)
    {
        if (outmount->objectName().isEmpty())
            outmount->setObjectName(QString::fromUtf8("outmount"));
        outmount->resize(637, 210);
        pushButton = new QPushButton(outmount);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 120, 141, 51));
        pushButton_2 = new QPushButton(outmount);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(470, 120, 141, 51));
        comboBox = new QComboBox(outmount);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 30, 161, 41));
        lineEdit = new QLineEdit(outmount);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(400, 30, 211, 41));
        label = new QLabel(outmount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 101, 41));
        label_2 = new QLabel(outmount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 30, 111, 41));

        retranslateUi(outmount);

        QMetaObject::connectSlotsByName(outmount);
    } // setupUi

    void retranslateUi(QWidget *outmount)
    {
        outmount->setWindowTitle(QCoreApplication::translate("outmount", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("outmount", "\347\241\256\350\256\244\345\207\272\345\272\223", nullptr));
        pushButton_2->setText(QCoreApplication::translate("outmount", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("outmount", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("outmount", "\345\207\272\345\272\223\346\225\260\351\207\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class outmount: public Ui_outmount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTMOUNT_H
