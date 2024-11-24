/********************************************************************************
** Form generated from reading UI file 'mapchannel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPCHANNEL_H
#define UI_MAPCHANNEL_H

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

class Ui_mapchannel
{
public:
    QWidget *centralwidget;
    QWebEngineView *widget;
    QPushButton *pushButton;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QFrame *line_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mapchannel)
    {
        if (mapchannel->objectName().isEmpty())
            mapchannel->setObjectName(QString::fromUtf8("mapchannel"));
        mapchannel->resize(800, 600);
        centralwidget = new QWidget(mapchannel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWebEngineView(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 110, 811, 461));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(705, 20, 89, 25));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(700, 0, 3, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(700, 50, 101, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(705, 70, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 41, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 10, 41, 17));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(700, 50, 3, 61));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 113, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 10, 113, 25));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(550, 10, 113, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(510, 10, 41, 17));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(380, 10, 113, 25));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 10, 41, 17));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(-3, 39, 701, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        mapchannel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mapchannel);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        mapchannel->setMenuBar(menubar);
        statusbar = new QStatusBar(mapchannel);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mapchannel->setStatusBar(statusbar);

        retranslateUi(mapchannel);

        QMetaObject::connectSlotsByName(mapchannel);
    } // setupUi

    void retranslateUi(QMainWindow *mapchannel)
    {
        mapchannel->setWindowTitle(QApplication::translate("mapchannel", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("mapchannel", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton_2->setText(QApplication::translate("mapchannel", "\345\212\240\350\275\275\345\234\260\345\233\276", nullptr));
        label->setText(QApplication::translate("mapchannel", "\347\273\217\345\272\246:", nullptr));
        label_2->setText(QApplication::translate("mapchannel", "\347\273\264\345\272\246:", nullptr));
        lineEdit_3->setText(QString());
        label_3->setText(QApplication::translate("mapchannel", "\350\210\252\351\200\237:", nullptr));
        lineEdit_4->setText(QString());
        label_4->setText(QApplication::translate("mapchannel", "\350\211\217\345\220\221:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapchannel: public Ui_mapchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPCHANNEL_H
