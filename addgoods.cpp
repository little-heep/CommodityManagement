#include "addgoods.h"
#include "ui_addgoods.h"

AddGoods::AddGoods(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddGoods)
{
    ui->setupUi(this);
    //禁止窗口最大化按钮
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    //禁止用户拖拉窗口改变大小
    setFixedSize(this->width(),this->height());
    //光标定位
    ui->idle->setFocus();
}

AddGoods::~AddGoods()
{
    delete ui;
}

void AddGoods::on_canclebtn_clicked()
{
    close();
}


void AddGoods::on_okbtn_clicked()
{
    if(ui->idle->text().isEmpty())
    {
        QMessageBox::critical(this,"失败","商品编号不能为空！");
        return;
    }
    int id=ui->idle->text().toInt();
    QString name=ui->namele->text();
    int mount=ui->mountle->text().toInt();
    double price=ui->pricele->text().toDouble();
    QString suplier=ui->supplierle->text();
    QString director=ui->directorle->text();
    QString remark=ui->textEdit->toPlainText();

    QSqlQuery query;
    QString sql;
    sql=QString("insert into GoodDataTable(Id,Name,Mount,Price,Supplier,Director,Remarks) values('%1','%2','%3','%4','%5','%6','%7');").arg(id).arg(name).arg(mount).arg(price).arg(suplier).arg(director).arg(remark);

    if(!query.exec(sql))
    {
        QMessageBox::critical(this,"失败","增加新商品失败");
        return;
    }
    QMessageBox::information(this,"成功","增加新商品成功！");
    close();

}
