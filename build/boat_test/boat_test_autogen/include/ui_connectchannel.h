/********************************************************************************
** Form generated from reading UI file 'connectchannel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTCHANNEL_H
#define UI_CONNECTCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connectchannel
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *connectchannel)
    {
        if (connectchannel->objectName().isEmpty())
            connectchannel->setObjectName(QString::fromUtf8("connectchannel"));
        connectchannel->resize(800, 600);
        centralwidget = new QWidget(connectchannel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(705, 20, 89, 25));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(700, 0, 3, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        connectchannel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(connectchannel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        connectchannel->setMenuBar(menubar);
        statusbar = new QStatusBar(connectchannel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        connectchannel->setStatusBar(statusbar);

        retranslateUi(connectchannel);

        QMetaObject::connectSlotsByName(connectchannel);
    } // setupUi

    void retranslateUi(QMainWindow *connectchannel)
    {
        connectchannel->setWindowTitle(QApplication::translate("connectchannel", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("connectchannel", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connectchannel: public Ui_connectchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTCHANNEL_H
