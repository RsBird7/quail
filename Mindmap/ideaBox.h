#ifndef IDEABOX_H
#define IDEABOX_H

#include <QWidget>
#include <QPushButton>
#include <QString>
#include <QLineEdit>
#include <QStackedWidget>
#include <QVBoxLayout>

#include "remakePushButton.h"
#include "itemManager.h"

class ItemManager;

// IdeaBox
// Button and line_edit
class IdeaBox : public QWidget
{
    Q_OBJECT

    private:
        remakePushButton* itemBtn;
        QLineEdit* lineEditor;
        QStackedWidget* btnEditorStkWidget;
        QVBoxLayout* mainLayout;

        int x;
        int y;
        int editFinishFlag;

        ItemManager* itemManager;

    public:
        IdeaBox(int posX, int posY, ItemManager* item_manager);
        ~IdeaBox();


    private slots:
        void editText();
        void editFinish();
        void setupXY();

    private:
        void setupLayout();
        void setupSignalSlots();

};

#endif // IDEABOX_H
