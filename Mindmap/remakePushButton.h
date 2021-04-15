#ifndef REMAKEPUSHBUTTON_H
#define REMAKEPUSHBUTTON_H

#include <QWidget>
#include <QPushButton>


// Renew QPushButton
// Add double click

class remakePushButton:public QPushButton
{
    Q_OBJECT

    public:
        remakePushButton(QWidget *parent = nullptr) : QPushButton(parent)
        {

        }
        ~remakePushButton()
        {

        }
    signals:
        void doubleClicked();
    //private slots:
    public:
        void mouseDoubleClickEvent(QMouseEvent *event)
        {
            emit doubleClicked();
        }
};

#endif // REMAKEPUSHBUTTON_H
