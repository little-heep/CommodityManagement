#ifndef DATASUM_H
#define DATASUM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringList>
#include <QFileDialog>
#include <QAxObject>
#include <QDesktopServices>
#include <QDateTime>
namespace Ui {
class DataSum;
}

class DataSum : public QWidget
{
    Q_OBJECT

public:
    explicit DataSum(QWidget *parent = nullptr);
    ~DataSum();

    void Initdata();

private slots:
    void on_goods_clicked();

    void on_copy_clicked();

private:
    Ui::DataSum *ui;
};

#endif // DATASUM_H
