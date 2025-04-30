#include "datasum.h"
#include "ui_datasum.h"

DataSum::DataSum(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DataSum)
{
    ui->setupUi(this);
    //禁止窗口最大化按钮
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    //禁止用户拖拉窗口改变大小
    setFixedSize(this->width(),this->height());
    Initdata();
}

DataSum::~DataSum()
{
    delete ui;
}

void DataSum::on_goods_clicked()
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
            if(j>3)
                ui->tableWidget->setItem(i,j+1,new QTableWidgetItem(str));
            ui->tableWidget->setItem(i,j,new QTableWidgetItem(str));
        }
        QString i1=query.value(0).toString();
        QString i2=query.value(1).toString();
        QString i3=query.value(2).toString();
        QString i4=query.value(3).toString();
        QString i5=QString::number(i4.toDouble()*i3.toDouble());
        QString i6=query.value(4).toString();
        QString i7=query.value(5).toString();
        QString i8=query.value(6).toString();
        QString i9=query.value(7).toString();
        QString i10=query.value(8).toString();
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(i1));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(i2));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(i3));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(i4));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(i5));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(i6));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(i7));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(i8));
        ui->tableWidget->setItem(i,8,new QTableWidgetItem(i9));
        ui->tableWidget->setItem(i,9,new QTableWidgetItem(i10));
        i++;
    }
}


void DataSum::on_copy_clicked()
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

void DataSum::Initdata()
{
    ui->tableWidget->setColumnCount(10);//9列
    ui->tableWidget->setRowCount(200);//200行
    //设置表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"商品编号"<<"商品名称"<<"商品数量"<<"商品单价"<<"总价"<<"供应商"<<"负责人"<<"入库时间"<<"出库时间"<<"备注");

}
