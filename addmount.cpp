#include "addmount.h"
#include "ui_addmount.h"

AddMount::AddMount(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddMount)
{
    ui->setupUi(this);
    //禁止窗口最大化按钮
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    //禁止用户拖拉窗口改变大小
    setFixedSize(this->width(),this->height());

    initcombobox();
}

AddMount::~AddMount()
{
    delete ui;
}


void AddMount::on_canclebtn_clicked()
{
    close();
}


void AddMount::on_addbtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::critical(this,"失败","入库数量未填写！");
        return;
    }
    int id=ui->comboBox->currentText().toInt();
    int mount=ui->lineEdit->text().toInt();

    QSqlQuery query;
    QString sql;
    sql=QString("update GoodDataTable set Mount=Mount+'%1' where Id='%2';").arg(mount).arg(id);

    if(!query.exec(sql))
    {
        QMessageBox::critical(this,"失败","入库失败");
        return;
    }
    QMessageBox::information(this,"成功","商品入库成功！");
    close();
}

void AddMount::initcombobox()
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
