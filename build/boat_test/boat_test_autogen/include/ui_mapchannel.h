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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qwebengineview.h>

QT_BEGIN_NAMESPACE

class Ui_mapchannel
{
public:
    QWidget *centralwidget;
    QWebEngineView *widget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
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
        widget->setGeometry(QRect(-10, 70, 811, 501));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(710, 0, 82, 68));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 0, 691, 61));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout->addWidget(lineEdit_4);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

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
        pushButton_2->setText(QApplication::translate("mapchannel", "\346\270\205\351\231\244\350\275\250\350\277\271", nullptr));
        pushButton_3->setText(QApplication::translate("mapchannel", "\344\277\235\345\255\230\350\275\250\350\277\271", nullptr));
        label->setText(QApplication::translate("mapchannel", "\347\273\217\345\272\246:", nullptr));
        label_2->setText(QApplication::translate("mapchannel", "\347\273\264\345\272\246:", nullptr));
        label_4->setText(QApplication::translate("mapchannel", "\350\211\217\345\220\221:", nullptr));
        lineEdit_4->setText(QString());
        label_3->setText(QApplication::translate("mapchannel", "\350\210\252\351\200\237:", nullptr));
        lineEdit_3->setText(QString());
        pushButton->setText(QApplication::translate("mapchannel", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mapchannel: public Ui_mapchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPCHANNEL_H
