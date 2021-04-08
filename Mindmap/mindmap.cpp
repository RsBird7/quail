#include "mindmap.h"
#include "ui_mindmap.h"
#include "QTextEdit"

Mindmap::Mindmap(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mindmap)
{
    ui->setupUi(this);
    //layout = new QGridLayout;//インスタンス化

    QObject::connect(ui->pushButtonAdd_hor, &QPushButton::clicked, this, &Mindmap::onAddWidget_hor);
    QObject::connect(ui->pushButtonAdd_ver, &QPushButton::clicked, this, &Mindmap::onAddWidget_ver);

    layout = qobject_cast<QGridLayout*>(ui->gridLayout_2->layout());
}


Mindmap::~Mindmap()
{
    delete ui;
}


void Mindmap::onAddWidget_hor() {

    QTextEdit* textEdit = new QTextEdit;
    num_hor = ui->spinBox_hor->value();
    num_ver = ui->spinBox_ver->value();

    textEdit->setText(QString::number(num_hor)+","+ QString::number(1+num_ver));

    layout->addWidget(textEdit,num_hor,1+num_ver);

}


void Mindmap::onAddWidget_ver() {

    QTextEdit* textEdit = new QTextEdit;
    num_hor = ui->spinBox_hor->value();
    num_ver = ui->spinBox_ver->value();

    textEdit->setText(QString::number(1+num_hor) +','+ QString::number(num_ver));

    layout->addWidget(textEdit,1+num_hor,num_ver);

}

