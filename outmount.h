#ifndef OUTMOUNT_H
#define OUTMOUNT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class outmount;
}

class outmount : public QWidget
{
    Q_OBJECT

public:
    explicit outmount(QWidget *parent = nullptr);
    ~outmount();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::outmount *ui;
    void initcombobox();
};

#endif // OUTMOUNT_H
