/********************************************************************************
** Form generated from reading UI file 'addmount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMOUNT_H
#define UI_ADDMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddMount
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *addbtn;
    QPushButton *canclebtn;

    void setupUi(QWidget *AddMount)
    {
        if (AddMount->objectName().isEmpty())
            AddMount->setObjectName(QString::fromUtf8("AddMount"));
        AddMount->resize(674, 219);
        label = new QLabel(AddMount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 111, 31));
        label_2 = new QLabel(AddMount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 70, 121, 31));
        lineEdit = new QLineEdit(AddMount);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(460, 70, 191, 31));
        comboBox = new QComboBox(AddMount);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 70, 161, 31));
        addbtn = new QPushButton(AddMount);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));
        addbtn->setGeometry(QRect(290, 140, 151, 41));
        canclebtn = new QPushButton(AddMount);
        canclebtn->setObjectName(QString::fromUtf8("canclebtn"));
        canclebtn->setGeometry(QRect(500, 140, 151, 41));

        retranslateUi(AddMount);

        QMetaObject::connectSlotsByName(AddMount);
    } // setupUi

    void retranslateUi(QWidget *AddMount)
    {
        AddMount->setWindowTitle(QCoreApplication::translate("AddMount", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        label->setText(QCoreApplication::translate("AddMount", "\345\225\206\345\223\201\347\274\226\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("AddMount", "\345\205\245\345\272\223\346\225\260\351\207\217\357\274\232", nullptr));
        addbtn->setText(QCoreApplication::translate("AddMount", "\347\241\256\345\256\232\345\205\245\345\272\223", nullptr));
        canclebtn->setText(QCoreApplication::translate("AddMount", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMount: public Ui_AddMount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMOUNT_H
