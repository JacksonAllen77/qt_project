/********************************************************************************
** Form generated from reading UI file 'pathchannel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHCHANNEL_H
#define UI_PATHCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qwebengineview.h>

QT_BEGIN_NAMESPACE

class Ui_pathchannel
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QWebEngineView *widget;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QFrame *line_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pathchannel)
    {
        if (pathchannel->objectName().isEmpty())
            pathchannel->setObjectName(QString::fromUtf8("pathchannel"));
        pathchannel->resize(800, 600);
        centralwidget = new QWidget(pathchannel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(683, 0, 20, 51));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(705, 10, 89, 25));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(570, 10, 113, 25));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 113, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 10, 113, 25));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(390, 10, 113, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 10, 41, 17));
        widget = new QWebEngineView(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 50, 811, 521));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 10, 41, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 10, 41, 17));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 41, 17));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-10, 40, 701, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pathchannel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pathchannel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        pathchannel->setMenuBar(menubar);
        statusbar = new QStatusBar(pathchannel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        pathchannel->setStatusBar(statusbar);

        retranslateUi(pathchannel);

        QMetaObject::connectSlotsByName(pathchannel);
    } // setupUi

    void retranslateUi(QMainWindow *pathchannel)
    {
        pathchannel->setWindowTitle(QApplication::translate("pathchannel", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("pathchannel", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_4->setText(QString());
        label_3->setText(QApplication::translate("pathchannel", "\350\210\252\351\200\237:", nullptr));
        label_4->setText(QApplication::translate("pathchannel", "\350\211\217\345\220\221:", nullptr));
        label_2->setText(QApplication::translate("pathchannel", "\347\273\264\345\272\246:", nullptr));
        label->setText(QApplication::translate("pathchannel", "\347\273\217\345\272\246:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pathchannel: public Ui_pathchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHCHANNEL_H
