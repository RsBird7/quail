#include "ideaBox.h"

#include <iostream>

IdeaBox::IdeaBox(int posH = 0, int posV = 0, ItemManager* item_manager = nullptr):x(posH), y(posV), editFinishFlag(0), itemManager(item_manager)
{
    setWindowFlags(Qt::SplashScreen);
    setupLayout();
    setupSignalSlots();

    setLayout(mainLayout);
    btnEditorStkWidget->setCurrentWidget(lineEditor);
    btnEditorStkWidget->setCurrentWidget(itemBtn);

}


void IdeaBox::setupLayout()
{
    itemBtn = new remakePushButton;
    lineEditor = new QLineEdit;

    btnEditorStkWidget = new QStackedWidget;

    mainLayout = new QVBoxLayout;

    itemBtn->setCheckable(1);

    btnEditorStkWidget->addWidget(itemBtn);
    btnEditorStkWidget->addWidget(lineEditor);

    mainLayout->addWidget(btnEditorStkWidget);
}

void IdeaBox::setupSignalSlots()
{
    connect(itemBtn, SIGNAL(doubleClicked()), this, SLOT(editText()));
    connect(lineEditor, SIGNAL(editingFinished()), this, SLOT(editFinish()));
    connect(itemBtn, SIGNAL(clicked()), this, SLOT(setupXY()));
}

void IdeaBox::editText()
{
    std::cout << "open lineeditor" << std::endl;
    btnEditorStkWidget->setCurrentWidget(lineEditor);
}

void IdeaBox::editFinish()
{
    itemBtn->setText(lineEditor->text());
    btnEditorStkWidget->setCurrentWidget(itemBtn);
}

void IdeaBox::setupXY()
{
    itemManager->tmpSet(x, y, this);
}

IdeaBox::~IdeaBox()
{

}
