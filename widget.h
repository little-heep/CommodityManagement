#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QCoreApplication>
#include <QtSql>
#include<QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringList>
#include <QDateTime>

//导出数据
#include <QFileDialog>
#include <QAxObject>
#include <QDesktopServices>

#include "addgoods.h"
#include "addmount.h"
#include "outmount.h"
#include "datasum.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    //连接数据库
    void connectDBfun();

    void tablewidgetlistdata();//表格初始化
    void tabledata();//表格数据整体刷新展示

private slots:
    void on_selectbtn_clicked();

    void on_addbtn_clicked();

    void on_deletebtn_clicked();

    void on_inbtn_clicked();

    void on_outbtn_clicked();

    void on_totalbtn_clicked();

    void on_resultbtn_clicked();

private:
    Ui::Widget *ui;

    QSqlDatabase db;
};
#endif // WIDGET_H
