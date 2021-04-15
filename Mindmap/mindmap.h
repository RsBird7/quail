#ifndef MINDMAP_H
#define MINDMAP_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

#include "itemManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Mindmap; }
QT_END_NAMESPACE

class Mindmap : public QMainWindow
{
    Q_OBJECT

public:
    Mindmap(QWidget *parent = nullptr);
    ~Mindmap();

    void onAddWidget_ver();
    void onAddWidget_hor();

private:
    Ui::Mindmap *ui;

    QGridLayout *layout;
    std::vector<std::vector<QPushButton *>> buttons;
    int num_hor;
    int num_ver;
    IdeaBox* IBox;
    ItemManager* mainItemManager;

    // Confirm output
    QLabel* debugWidget1;
    QLabel* debugWidget2;

    void setupDebugWindow();

};
#endif // MINDMAP_H
