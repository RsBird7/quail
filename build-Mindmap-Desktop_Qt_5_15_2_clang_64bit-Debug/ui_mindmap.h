/********************************************************************************
** Form generated from reading UI file 'mindmap.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINDMAP_H
#define UI_MINDMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mindmap
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mindmap)
    {
        if (Mindmap->objectName().isEmpty())
            Mindmap->setObjectName(QString::fromUtf8("Mindmap"));
        Mindmap->resize(800, 600);
        centralwidget = new QWidget(Mindmap);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Mindmap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Mindmap);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Mindmap->setMenuBar(menubar);
        statusbar = new QStatusBar(Mindmap);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Mindmap->setStatusBar(statusbar);

        retranslateUi(Mindmap);

        QMetaObject::connectSlotsByName(Mindmap);
    } // setupUi

    void retranslateUi(QMainWindow *Mindmap)
    {
        Mindmap->setWindowTitle(QCoreApplication::translate("Mindmap", "Mindmap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mindmap: public Ui_Mindmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINDMAP_H
