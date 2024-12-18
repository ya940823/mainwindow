/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_5;
    QAction *action_6;
    QAction *action_8;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/new.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/open.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_2->setIcon(icon1);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        action_5 = new QAction(MainWindow);
        action_5->setObjectName("action_5");
        action_6 = new QAction(MainWindow);
        action_6->setObjectName("action_6");
        action_8 = new QAction(MainWindow);
        action_8->setObjectName("action_8");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_2);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addSeparator();
        menu->addAction(action_5);
        menu->addAction(action_6);
        menu->addSeparator();
        menu->addAction(action_8);
        toolBar->addAction(action);
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar_2->addAction(action_5);
        toolBar_2->addAction(action_6);
        toolBar_2->addAction(action_8);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\225\237", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\345\204\262\345\255\230", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\252\224\346\241\210", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
