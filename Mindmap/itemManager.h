#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#pragma once

#include <vector>
#include <assert.h>
#include "ideaBox.h"

// Manager Class

class IdeaBox;
enum addType{isX, isY, Free, Error};

class ItemManager
{

        public:
        int itemX;
        int itemY;


        private:
        IdeaBox *tmp_regIdeaBox;

        typedef struct
        {
            int x;
            int y;
            IdeaBox *regIdeaBox;

        }item_ctrl_frame;

        item_ctrl_frame tmpRegData;
        std::vector<item_ctrl_frame> itemCtrlFrame;

    public:
        ItemManager();
        ~ItemManager();
        void tmpSet(const int& x, const int& y, IdeaBox* tmpRegIdeaBox);
        void getXY(int* x, int* y);
        addType registerItemX(IdeaBox* ideaBox);
        addType registerItemY(IdeaBox* ideaBox);
};


#endif // ITEMMANAGER_H
