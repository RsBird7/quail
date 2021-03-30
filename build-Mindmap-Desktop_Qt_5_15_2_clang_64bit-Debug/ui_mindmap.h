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
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonAdd;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
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
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        pushButtonAdd = new QPushButton(centralwidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setEnabled(true);

        gridLayout_2->addWidget(pushButtonAdd, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(400, 50));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(321, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(320, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

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
        textEdit->setHtml(QCoreApplication::translate("Mindmap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Theme</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mindmap: public Ui_Mindmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINDMAP_H
