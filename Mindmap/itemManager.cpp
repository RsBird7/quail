#include "itemManager.h"

using namespace std;

ItemManager::ItemManager():itemX(0),itemY(0), tmp_regIdeaBox(nullptr)
{

    tmpRegData.x = 0;
    tmpRegData.y = 0;
    tmpRegData.regIdeaBox = nullptr;

}

ItemManager::~ItemManager()
{

}

void ItemManager::tmpSet(const int& x, const int& y, IdeaBox* tmpRegIdeaBox)
{
    itemX = x;
    itemY = y;
    tmp_regIdeaBox = tmpRegIdeaBox;
}

void ItemManager::getXY(int* x, int* y)
{
    *x = itemX;
    *y = itemY;
}

addType ItemManager::registerItemX(IdeaBox* ideaBox)
{
    int regFlag = 0;

    tmpRegData.x = 0;
    tmpRegData.y = 0;
    tmpRegData.regIdeaBox = nullptr;


    for (vector<item_ctrl_frame>::const_iterator i = itemCtrlFrame.begin(); i != itemCtrlFrame.end(); i++)
    {
        if (i->x == itemX + 1 && i->y == itemY)
        {
            regFlag = 0;
            return isX;
        }

        if (i->x == itemX && i->y == itemY + 1)
        {
            regFlag = 0;
            return isY;
        }
    }

    if (!regFlag)
    {

        tmpRegData.x = itemX+1;
        tmpRegData.y = itemY;
        tmpRegData.regIdeaBox = ideaBox;

        itemCtrlFrame.push_back(tmpRegData);
        return Free;
    }
    return Error;
}

addType ItemManager::registerItemY(IdeaBox* ideaBox)
{
    int regFlag = 0;

    tmpRegData.x = 0;
    tmpRegData.y = 0;
    tmpRegData.regIdeaBox = nullptr;


    for (vector<item_ctrl_frame>::const_iterator i = itemCtrlFrame.begin(); i != itemCtrlFrame.end(); i++)
    {
        if (i->x == itemX + 1 && i->y == itemY)
        {
            regFlag = 0;
            return isX;
        }

        if (i->x == itemX && i->y == itemY + 1)
        {
            regFlag = 0;
            return isY;
        }
    }

    if (!regFlag)
    {

        tmpRegData.x = itemX;
        tmpRegData.y = itemY+1;
        tmpRegData.regIdeaBox = ideaBox;

        itemCtrlFrame.push_back(tmpRegData);
        return Free;
    }
    return Error;
}
