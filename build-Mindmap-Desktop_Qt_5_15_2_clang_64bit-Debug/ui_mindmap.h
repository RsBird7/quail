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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mindmap
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonAdd;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mindmap)
    {
        if (Mindmap->objectName().isEmpty())
            Mindmap->setObjectName(QString::fromUtf8("Mindmap"));
        Mindmap->resize(800, 600);
        centralwidget = new QWidget(Mindmap);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(320, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setEnabled(true);

        gridLayout_4->addWidget(pushButtonAdd, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(321, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);

        Mindmap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Mindmap);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        pushButtonAdd->setText(QCoreApplication::translate("Mindmap", "Add Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mindmap: public Ui_Mindmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINDMAP_H
