#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //连接数据库
    connectDBfun();

    //禁止窗口最大化按钮
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    //禁止用户拖拉窗口改变大小
    setFixedSize(this->width(),this->height());

    //表格控件初始化
    tablewidgetlistdata();
}

Widget::~Widget()
{
    delete ui;
    db.close();
}

void Widget::connectDBfun()
{
    // 创建数据库连接
    db = QSqlDatabase::addDatabase("QODBC");

    // 设置数据库名称 (DSN 或直接连接字符串)
    // 如果使用 DSN，请确保它已经配置好，并且选择了 Windows 身份验证。
    // 如果不使用 DSN，则需要提供完整的连接字符串。
    db.setDatabaseName("DRIVER={ODBC Driver 17 for SQL Server};"
                       "SERVER=localhost;"  // 服务器地址
                       "DATABASE=QtGoodsManage;"        //数据库名称
                       "Trusted_Connection=yes;");      // 指定使用 Windows 身份验证

    // 打开数据库
    if (!db.open()) {
        qDebug() << "Error: Could not connect to database.";
        qDebug() << db.lastError().text();
        return ;
    }

    qDebug() << "Connected to database successfully!";


}

void Widget::on_selectbtn_clicked()
{
    QSqlQuery query;
    QString id;
    id=ui->lineEdit->text();
    QString sql;
    sql=QString("select * from GoodDataTable where Id=%1").arg(id);

    if(!query.exec(sql))
    {
        QMessageBox::critical(this,"失败","id查询失败");
        return;
    }
    ui->tableWidget->clearContents();
    int i=0;
    while(query.next())
    {
        for (int j = 0; j < 9; ++j) {
            QString str=query.value(j).toString();
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(str));
        }
        i++;
    }
}

void Widget::on_addbtn_clicked()
{
    AddGoods *addgood=new AddGoods();
    addgood->show();
    ui->tableWidget->clear();
    tabledata();
}

void Widget::on_deletebtn_clicked()
{
    //获取点击商品的行号
    int row =ui->tableWidget->currentRow();
    //获取该商品的编号
    QString strid=ui->tableWidget->model()->index(row,0).data().toString();
    if(strid.isEmpty())
    {
        QMessageBox::critical(this,"提示","未选中要下架的商品");
        return;
    }
    int iclick=QMessageBox::warning(this,"警告",QString("是否确认要下架商品编号为%1的商品").arg(strid),QMessageBox::Yes|QMessageBox::No);
    if(iclick==QMessageBox::Yes)
    {
        int id=strid.toInt();
        QSqlQuery query;
        QString sql=QString("delete from GoodDataTable where Id='%1';").arg(id);
        if(!query.exec(sql))
        {
            QMessageBox::critical(this,"失败","下架商品失败×");
            return;
        }
        QMessageBox::information(this,"成功","成功下架商品！");
        ui->tableWidget->clear();
        tabledata();
        return;
    }
    else
    {
        return;
    }

}


void Widget::on_inbtn_clicked()
{
    AddMount *addm=new AddMount();
    addm->show();
    ui->tableWidget->clear();
    tabledata();
}


void Widget::on_outbtn_clicked()
{
    outmount *outm=new outmount();
    outm->show();
    ui->tableWidget->clear();
    tabledata();
}


void Widget::on_totalbtn_clicked()
{
    DataSum *ds=new DataSum();
    ds->show();
}

//导出表格控件数据，直接生成excel文件保存
void Widget::on_resultbtn_clicked()
{
    QDateTime time;
    QString strtemp;

    time=QDateTime::currentDateTime();
    strtemp=time.toString("yyyy-MM-dd hhmmss");
    QString strFileName=QFileDialog::getSaveFileName(this,tr("Excel Files"),QString(".%1%2.xls").arg(strtemp).arg("-kcgl"),tr("Excel Files(*.xls)"));

    if(!strFileName.isEmpty())
    {
        QAxObject *excel = new QAxObject;
        if (excel->setControl("Excel.Application"))
        {
            excel->setProperty("Visible", false);
            excel->setProperty("DisplayAlerts", false);
            QAxObject *workbooks = excel->querySubObject("WorkBooks"); // 获取工作簿集合
            workbooks->dynamicCall("Add"); // 创建一个工作簿
            QAxObject *workbook = excel->querySubObject("ActiveWorkBook"); // 获取当前工作簿
            QAxObject *worksheet = workbook->querySubObject("Worksheets(int)", 1); // 获取第一个工作表

            if (!worksheet) {
                qDebug() << "无法获取工作表";
                workbook->dynamicCall("Close()");
                excel->dynamicCall("Quit()");
                delete excel;
                return;
            }

            QAxObject *cell;

            // 添加 Excel 文件表头数据
            for(int i = 0; i < ui->tableWidget->columnCount(); ++i)
            {
                cell = worksheet->querySubObject("Cells(int,int)", 1, i + 1);
                cell->setProperty("RowHeight", 25);
                QTableWidgetItem *headerItem = ui->tableWidget->horizontalHeaderItem(i);
                QString headerText = headerItem ? headerItem->data(0).toString() : "";
                cell->dynamicCall("SetValue(const QString&)", headerText);
            }

            // 将表格数据保存到 Excel 文件中
            for(int row = 0; row < ui->tableWidget->rowCount(); ++row)
            {
                for(int col = 0; col < ui->tableWidget->columnCount(); ++col)
                {
                    cell = worksheet->querySubObject("Cells(int,int)", row + 2, col + 1);
                    QTableWidgetItem *item = ui->tableWidget->item(row, col);
                    QString text = item ? item->text() : ""; // 检查是否为空
                    cell->dynamicCall("SetValue(const QString&)", text);
                }
            }

            // 将刚刚创建的 Excel 文件保存到指定目录下
            workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(strFileName));
            workbook->dynamicCall("Close()");
            excel->dynamicCall("Quit()");
            delete excel;
        } else {
            qDebug() << "无法创建 Excel 应用程序，请确认已安装 Microsoft Office Excel。";
            delete excel;
        }
    }
}

void Widget::tablewidgetlistdata()
{
    ui->tableWidget->setColumnCount(9);//9列
    ui->tableWidget->setRowCount(200);//200行
    //设置表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"商品编号"<<"商品名称"<<"商品数量"<<"商品单价"<<"供应商"<<"负责人"<<"入库时间"<<"出库时间"<<"备注");
    //数据展示
    tabledata();
}

void Widget::tabledata()
{
    QSqlQuery query;
    QString sql;
    sql=QString("select * from GoodDataTable");

    if(!query.exec(sql))
    {
        QMessageBox::critical(this,"失败","整体数据获取失败");
        return;
    }
    int i=0;
    while(query.next())
    {
        for (int j = 0; j < 9; ++j) {
            QString str=query.value(j).toString();
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(str));
        }
        i++;
    }
}
