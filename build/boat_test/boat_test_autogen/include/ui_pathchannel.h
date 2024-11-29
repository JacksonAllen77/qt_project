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

class Ui_pathchannel
{
public:
    QWidget *centralwidget;
    QWebEngineView *widget;
    QFrame *line_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
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

    void setupUi(QMainWindow *pathchannel)
    {
        if (pathchannel->objectName().isEmpty())
            pathchannel->setObjectName(QString::fromUtf8("pathchannel"));
        pathchannel->resize(800, 600);
        centralwidget = new QWidget(pathchannel);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWebEngineView(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 69, 801, 501));
        widget->setMinimumSize(QSize(600, 0));
        widget->setMaximumSize(QSize(60000, 16777215));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 40, 801, 51));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(660, 0, 136, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 25));
        pushButton_3->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 25));
        pushButton_2->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 10, 651, 51));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 0));
        label->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 0));
        lineEdit->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(40, 0));
        label_2->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(80, 0));
        lineEdit_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit_2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(80, 0));
        lineEdit_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit_4);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(40, 0));
        label_3->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(80, 0));
        lineEdit_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit_3);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 25));
        pushButton->setMaximumSize(QSize(80, 25));

        horizontalLayout->addWidget(pushButton);

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
        pushButton_3->setText(QApplication::translate("pathchannel", "\346\270\205\351\231\244\346\240\207\346\263\250\345\267\245\345\205\267\347\227\225\350\277\271", nullptr));
        pushButton_2->setText(QApplication::translate("pathchannel", "\345\274\200\345\220\257/\345\205\263\351\227\255\346\240\207\346\263\250\345\267\245\345\205\267", nullptr));
        label->setText(QApplication::translate("pathchannel", "\347\273\217\345\272\246:", nullptr));
        label_2->setText(QApplication::translate("pathchannel", "\347\273\264\345\272\246:", nullptr));
        label_4->setText(QApplication::translate("pathchannel", "\350\211\217\345\220\221:", nullptr));
        lineEdit_4->setText(QString());
        label_3->setText(QApplication::translate("pathchannel", "\350\210\252\351\200\237:", nullptr));
        lineEdit_3->setText(QString());
        pushButton->setText(QApplication::translate("pathchannel", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pathchannel: public Ui_pathchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHCHANNEL_H
