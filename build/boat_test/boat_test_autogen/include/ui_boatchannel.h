/********************************************************************************
** Form generated from reading UI file 'boatchannel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOATCHANNEL_H
#define UI_BOATCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_boatchannel
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *boatchannel)
    {
        if (boatchannel->objectName().isEmpty())
            boatchannel->setObjectName(QString::fromUtf8("boatchannel"));
        boatchannel->resize(800, 600);
        centralwidget = new QWidget(boatchannel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(683, 0, 20, 51));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(705, 15, 89, 25));
        boatchannel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(boatchannel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        boatchannel->setMenuBar(menubar);
        statusbar = new QStatusBar(boatchannel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        boatchannel->setStatusBar(statusbar);

        retranslateUi(boatchannel);

        QMetaObject::connectSlotsByName(boatchannel);
    } // setupUi

    void retranslateUi(QMainWindow *boatchannel)
    {
        boatchannel->setWindowTitle(QApplication::translate("boatchannel", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("boatchannel", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class boatchannel: public Ui_boatchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOATCHANNEL_H
