#include "mindmap.h"
#include "ui_mindmap.h"
#include "QTextEdit"


Mindmap::Mindmap(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mindmap)
{
    ui->setupUi(this);
    //layout = new QGridLayout;//インスタンス化
    mainItemManager = new ItemManager();

    IBox = new IdeaBox(0, 0, mainItemManager);

    QObject::connect(ui->pushButtonAdd_hor, &QPushButton::clicked, this, &Mindmap::onAddWidget_hor);
    QObject::connect(ui->pushButtonAdd_ver, &QPushButton::clicked, this, &Mindmap::onAddWidget_ver);

    layout = qobject_cast<QGridLayout*>(ui->gridLayout_2->layout());
    layout -> addWidget(IBox, 0, 0);
    setupDebugWindow();
}


Mindmap::~Mindmap()
{
    delete debugWidget1;
    delete debugWidget2;
    delete ui;
}

void Mindmap::setupDebugWindow()
{
    debugWidget1 = new QLabel;
    debugWidget2 = new QLabel;

    debugWidget1->setWindowTitle("X");
    debugWidget2->setWindowTitle("Y");
    debugWidget1->setGeometry(120, 120, 400, 200);
    debugWidget2->setGeometry(240, 240, 400, 200);
    debugWidget1->show();
    debugWidget2->show();
}


void Mindmap::onAddWidget_hor() {

    IdeaBox* IBox = new IdeaBox(mainItemManager->itemX + 1, mainItemManager->itemY, mainItemManager);

    if(Free == mainItemManager->registerItemX(IBox) || isY == mainItemManager->registerItemX(IBox))
    {
        layout->addWidget(IBox,mainItemManager->itemY,1+mainItemManager->itemX);
    }
    else
    {
        delete IBox;
    }

    debugWidget1->setNum(mainItemManager->itemX);
    debugWidget2->setNum(mainItemManager->itemY);

}


void Mindmap::onAddWidget_ver() {

    IdeaBox* IBox = new IdeaBox(mainItemManager->itemX, mainItemManager->itemY+1, mainItemManager);

    if(Free == mainItemManager->registerItemY(IBox) || isX == mainItemManager->registerItemY(IBox))
    {
        layout->addWidget(IBox,1+mainItemManager->itemY,mainItemManager->itemX);
    }
    else
    {
        delete IBox;
    }

    debugWidget1->setNum(mainItemManager->itemX);
    debugWidget2->setNum(mainItemManager->itemY);

}

