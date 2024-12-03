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
    QWidget *widget_2;
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
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
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
        widget->setGeometry(QRect(0, 59, 801, 511));
        widget->setMinimumSize(QSize(600, 0));
        widget->setMaximumSize(QSize(60000, 16777215));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(5, 2, 631, 61));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(40, 0));
        label->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 0));
        lineEdit->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(40, 0));
        label_2->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(80, 0));
        lineEdit_2->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit_2);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(widget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(80, 0));
        lineEdit_4->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit_4);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(40, 0));
        label_3->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(80, 0));
        lineEdit_3->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEdit_3);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 25));
        pushButton->setMaximumSize(QSize(80, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(640, -5, 161, 71));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 25));
        pushButton_3->setMaximumSize(QSize(16777215, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3 {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 25));
        pushButton_2->setMaximumSize(QSize(16777215, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        verticalLayout->addWidget(pushButton_2);

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
        label->setText(QApplication::translate("pathchannel", "\347\273\217\345\272\246:", nullptr));
        label_2->setText(QApplication::translate("pathchannel", "\347\273\264\345\272\246:", nullptr));
        label_4->setText(QApplication::translate("pathchannel", "\350\211\217\345\220\221:", nullptr));
        lineEdit_4->setText(QString());
        label_3->setText(QApplication::translate("pathchannel", "\350\210\252\351\200\237:", nullptr));
        lineEdit_3->setText(QString());
        pushButton->setText(QApplication::translate("pathchannel", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton_3->setText(QApplication::translate("pathchannel", "\346\270\205\351\231\244\346\240\207\346\263\250\345\267\245\345\205\267\347\227\225\350\277\271", nullptr));
        pushButton_2->setText(QApplication::translate("pathchannel", "\345\274\200\345\220\257/\345\205\263\351\227\255\346\240\207\346\263\250\345\267\245\345\205\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pathchannel: public Ui_pathchannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHCHANNEL_H
