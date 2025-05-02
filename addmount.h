#ifndef ADDMOUNT_H
#define ADDMOUNT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class AddMount;
}

class AddMount : public QWidget
{
    Q_OBJECT

public:
    explicit AddMount(QWidget *parent = nullptr);
    ~AddMount();


private slots:
    void on_canclebtn_clicked();

    void on_addbtn_clicked();

private:
    Ui::AddMount *ui;

    void initcombobox();
};

#endif // ADDMOUNT_H
