/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWebEngineView *widget;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_18;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_19;
    QLineEdit *lineEdit_4;
    QLabel *label_20;
    QLineEdit *lineEdit_5;
    QLabel *label_21;
    QLineEdit *lineEdit_6;
    QLabel *label_22;
    QLineEdit *lineEdit_7;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWebEngineView(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 60, 531, 341));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 261, 61));
        label->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(480, 390, 321, 161));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 3, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 2, 2, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 3, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 3, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 3, 1, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 3, 2, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 3, 3, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 390, 361, 161));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(30, 0));
        label_18->setMaximumSize(QSize(30, 16777215));

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(75, 0));
        lineEdit->setMaximumSize(QSize(75, 16777215));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(75, 0));
        lineEdit_2->setMaximumSize(QSize(75, 16777215));

        gridLayout_2->addWidget(lineEdit_2, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(75, 0));
        lineEdit_3->setMaximumSize(QSize(75, 16777215));

        gridLayout_2->addWidget(lineEdit_3, 0, 3, 1, 1);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 1, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(75, 0));
        lineEdit_4->setMaximumSize(QSize(75, 16777215));

        gridLayout_2->addWidget(lineEdit_4, 1, 1, 1, 1);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 1, 2, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(75, 0));
        lineEdit_5->setMaximumSize(QSize(75, 16777215));

        gridLayout_2->addWidget(lineEdit_5, 1, 3, 1, 1);

        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 2, 0, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(75, 0));
        lineEdit_6->setMaximumSize(QSize(75, 16777215));

        gridLayout_2->addWidget(lineEdit_6, 2, 1, 1, 1);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 2, 2, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(75, 0));
        lineEdit_7->setMaximumSize(QSize(75, 16777215));

        gridLayout_2->addWidget(lineEdit_7, 2, 3, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 390, 121, 161));
        groupBox_3->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox = new QComboBox(groupBox_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 20));
        comboBox->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 20));
        comboBox_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(comboBox_2);

        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 20));
        pushButton_7->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 20));
        pushButton_8->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(groupBox_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(0, 20));
        pushButton_9->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(pushButton_9);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(310, 0, 491, 61));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3 {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_5 {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton_5:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_4 {\n"
"    background-color: rgb(255, 255, 255) !important; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QPushButton#pushButton_4:hover {\n"
"    background-color: rgba(127, 255, 212, 0.4) !important; /* \346\202\254\345\201\234\347\212\266\346\200\201\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\351\200\217\346\230\216\345\272\246\344\270\272 0.4 */\n"
"}"));

        horizontalLayout->addWidget(pushButton_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201\350\256\276\347\275\256", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\347\273\217\345\272\246\357\274\232", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\347\273\264\345\272\246\357\274\232", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\350\211\217\345\220\221\357\274\232", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\350\210\252\351\200\237\357\274\232", nullptr));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201\350\256\276\347\275\256", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "PID:", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\345\210\266\345\257\274\345\217\202\346\225\260\357\274\232", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\345\210\260\347\202\271\350\257\257\345\267\256\357\274\232", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\345\267\241\350\210\252\351\200\237\345\272\246\357\274\232", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\350\277\224\350\210\252\351\200\237\345\272\246:", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201\350\256\276\347\275\256", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\345\234\260\345\233\276\345\257\274\350\210\252\347\225\214\351\235\242", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204\350\247\204\345\210\222\347\225\214\351\235\242", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\200\232\350\256\257\347\225\214\351\235\242", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\350\211\207\347\225\214\351\235\242", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
