#ifndef ADDGOODS_H
#define ADDGOODS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class AddGoods;
}

class AddGoods : public QWidget
{
    Q_OBJECT

public:
    explicit AddGoods(QWidget *parent = nullptr);
    ~AddGoods();

private slots:
    void on_canclebtn_clicked();

    void on_okbtn_clicked();

private:
    Ui::AddGoods *ui;

};

#endif // ADDGOODS_H
