#include "outmount.h"
#include "ui_outmount.h"

outmount::outmount(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::outmount)
{
    ui->setupUi(this);
    //禁止窗口最大化按钮
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    //禁止用户拖拉窗口改变大小
    setFixedSize(this->width(),this->height());

    initcombobox();
}

outmount::~outmount()
{
    delete ui;
}

void outmount::on_pushButton_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::critical(this,"失败","出库数量未填写！");
        return;
    }
    int id=ui->comboBox->currentText().toInt();
    int mount=ui->lineEdit->text().toInt();

    QSqlQuery query;
    QString sqll;
    int yuanmount=0;
    sqll=QString("select * from GoodDataTable where Id='%1'").arg(id);
    query.exec(sqll);
    if(query.next())
    {
        yuanmount=query.value(2).toInt();
        if(yuanmount<mount)
        {
            QMessageBox::critical(this,"失败","库存不足");
            return;
        }
    }

    QString sql;
    sql=QString("update GoodDataTable set Mount=Mount-'%1',Outtime=getdate() where Id='%2';").arg(mount).arg(id);

    if(!query.exec(sql))
    {
        QMessageBox::critical(this,"失败","出库失败");
        return;
    }
    QMessageBox::information(this,"成功","商品出库成功！");
    close();

}


void outmount::on_pushButton_2_clicked()
{
    close();
}

void outmount::initcombobox()
{
    QSqlQuery query;
    QString sql;
    sql=QString("select * from GoodDataTable");
    if(!query.exec(sql))
    {
        QMessageBox::critical(this,"失败","获取comboxid失败");
        return;
    }
    QString id;
    while(query.next())
    {
        id=query.value(0).toString();
        ui->comboBox->addItem(id);
    }
}
