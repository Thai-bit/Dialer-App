/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_Contact;
    QAction *actionExit_Dialer;
    QWidget *centralwidget;
    QGroupBox *dialerGroupBox;
    QPushButton *oneButton;
    QPushButton *sixButton;
    QPushButton *threeButton;
    QPushButton *fiveButton;
    QPushButton *twoButton;
    QPushButton *eightButton;
    QPushButton *sevenButton;
    QPushButton *nineButton;
    QPushButton *fourButton;
    QPushButton *starButton;
    QPushButton *zeroButton;
    QPushButton *pundButton;
    QPushButton *backspaceLabel;
    QPushButton *callButton;
    QLabel *twoTextLabel;
    QLabel *twoTextLabel_2;
    QLabel *twoTextLabel_3;
    QLabel *twoTextLabel_4;
    QLabel *twoTextLabel_5;
    QLabel *twoTextLabel_6;
    QLabel *twoTextLabel_7;
    QLabel *twoTextLabel_8;
    QLabel *label;
    QTableView *tableView;
    QLabel *numberLabel;
    QGroupBox *headerGroupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QMenuBar *menubar;
    QMenu *menuAdd_Contact;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(641, 498);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(230,255,249);"));
        actionAdd_Contact = new QAction(MainWindow);
        actionAdd_Contact->setObjectName(QString::fromUtf8("actionAdd_Contact"));
        QFont font;
        font.setFamily(QString::fromUtf8("Malgun Gothic"));
        font.setPointSize(9);
        actionAdd_Contact->setFont(font);
        actionExit_Dialer = new QAction(MainWindow);
        actionExit_Dialer->setObjectName(QString::fromUtf8("actionExit_Dialer"));
        actionExit_Dialer->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        dialerGroupBox = new QGroupBox(centralwidget);
        dialerGroupBox->setObjectName(QString::fromUtf8("dialerGroupBox"));
        dialerGroupBox->setGeometry(QRect(20, 120, 221, 301));
        dialerGroupBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 15px;"));
        oneButton = new QPushButton(dialerGroupBox);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(10, 10, 61, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Malgun Gothic"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        oneButton->setFont(font1);
        oneButton->setStyleSheet(QString::fromUtf8("border: none; \n"
""));
        sixButton = new QPushButton(dialerGroupBox);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(150, 70, 61, 51));
        sixButton->setFont(font1);
        sixButton->setStyleSheet(QString::fromUtf8("border: none;"));
        threeButton = new QPushButton(dialerGroupBox);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(150, 10, 61, 51));
        threeButton->setFont(font1);
        threeButton->setStyleSheet(QString::fromUtf8("border: none;"));
        fiveButton = new QPushButton(dialerGroupBox);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(80, 70, 61, 51));
        fiveButton->setFont(font1);
        fiveButton->setStyleSheet(QString::fromUtf8("border: none;"));
        twoButton = new QPushButton(dialerGroupBox);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(80, 10, 61, 51));
        twoButton->setFont(font1);
        twoButton->setStyleSheet(QString::fromUtf8("border: none;"));
        eightButton = new QPushButton(dialerGroupBox);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(80, 130, 61, 51));
        eightButton->setFont(font1);
        eightButton->setStyleSheet(QString::fromUtf8("border: none;"));
        sevenButton = new QPushButton(dialerGroupBox);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(10, 130, 61, 51));
        sevenButton->setFont(font1);
        sevenButton->setStyleSheet(QString::fromUtf8("border: none;"));
        nineButton = new QPushButton(dialerGroupBox);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(150, 130, 61, 51));
        nineButton->setFont(font1);
        nineButton->setStyleSheet(QString::fromUtf8("border: none;"));
        fourButton = new QPushButton(dialerGroupBox);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(10, 70, 61, 51));
        fourButton->setFont(font1);
        fourButton->setStyleSheet(QString::fromUtf8("border: none;"));
        starButton = new QPushButton(dialerGroupBox);
        starButton->setObjectName(QString::fromUtf8("starButton"));
        starButton->setGeometry(QRect(10, 180, 61, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Malgun Gothic"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        starButton->setFont(font2);
        starButton->setStyleSheet(QString::fromUtf8("border: none;"));
        zeroButton = new QPushButton(dialerGroupBox);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(80, 180, 61, 61));
        zeroButton->setFont(font1);
        zeroButton->setStyleSheet(QString::fromUtf8("border: none;"));
        pundButton = new QPushButton(dialerGroupBox);
        pundButton->setObjectName(QString::fromUtf8("pundButton"));
        pundButton->setGeometry(QRect(150, 180, 61, 61));
        pundButton->setFont(font1);
        pundButton->setStyleSheet(QString::fromUtf8("border: none;"));
        backspaceLabel = new QPushButton(dialerGroupBox);
        backspaceLabel->setObjectName(QString::fromUtf8("backspaceLabel"));
        backspaceLabel->setGeometry(QRect(160, 240, 31, 51));
        backspaceLabel->setStyleSheet(QString::fromUtf8("border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/delete-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        backspaceLabel->setIcon(icon);
        backspaceLabel->setIconSize(QSize(28, 22));
        callButton = new QPushButton(dialerGroupBox);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        callButton->setGeometry(QRect(80, 250, 61, 31));
        callButton->setStyleSheet(QString::fromUtf8("background-color: rgb(87,220,123);\n"
"border-style: none;\n"
"border-radius: 15px;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../phone(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        callButton->setIcon(icon1);
        twoTextLabel = new QLabel(dialerGroupBox);
        twoTextLabel->setObjectName(QString::fromUtf8("twoTextLabel"));
        twoTextLabel->setGeometry(QRect(100, 50, 21, 16));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Malgun Gothic"));
        font3.setPointSize(6);
        twoTextLabel->setFont(font3);
        twoTextLabel->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"border: none;"));
        twoTextLabel->setFrameShadow(QFrame::Plain);
        twoTextLabel->setAlignment(Qt::AlignCenter);
        twoTextLabel_2 = new QLabel(dialerGroupBox);
        twoTextLabel_2->setObjectName(QString::fromUtf8("twoTextLabel_2"));
        twoTextLabel_2->setGeometry(QRect(170, 50, 21, 16));
        twoTextLabel_2->setFont(font3);
        twoTextLabel_2->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_2->setFrameShadow(QFrame::Plain);
        twoTextLabel_2->setAlignment(Qt::AlignCenter);
        twoTextLabel_3 = new QLabel(dialerGroupBox);
        twoTextLabel_3->setObjectName(QString::fromUtf8("twoTextLabel_3"));
        twoTextLabel_3->setGeometry(QRect(30, 110, 21, 16));
        twoTextLabel_3->setFont(font3);
        twoTextLabel_3->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_3->setFrameShadow(QFrame::Plain);
        twoTextLabel_3->setAlignment(Qt::AlignCenter);
        twoTextLabel_4 = new QLabel(dialerGroupBox);
        twoTextLabel_4->setObjectName(QString::fromUtf8("twoTextLabel_4"));
        twoTextLabel_4->setGeometry(QRect(100, 110, 21, 16));
        twoTextLabel_4->setFont(font3);
        twoTextLabel_4->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_4->setFrameShadow(QFrame::Plain);
        twoTextLabel_4->setAlignment(Qt::AlignCenter);
        twoTextLabel_5 = new QLabel(dialerGroupBox);
        twoTextLabel_5->setObjectName(QString::fromUtf8("twoTextLabel_5"));
        twoTextLabel_5->setGeometry(QRect(170, 110, 21, 16));
        twoTextLabel_5->setFont(font3);
        twoTextLabel_5->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_5->setFrameShadow(QFrame::Plain);
        twoTextLabel_5->setAlignment(Qt::AlignCenter);
        twoTextLabel_6 = new QLabel(dialerGroupBox);
        twoTextLabel_6->setObjectName(QString::fromUtf8("twoTextLabel_6"));
        twoTextLabel_6->setGeometry(QRect(30, 170, 21, 16));
        twoTextLabel_6->setFont(font3);
        twoTextLabel_6->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_6->setFrameShadow(QFrame::Plain);
        twoTextLabel_6->setAlignment(Qt::AlignCenter);
        twoTextLabel_7 = new QLabel(dialerGroupBox);
        twoTextLabel_7->setObjectName(QString::fromUtf8("twoTextLabel_7"));
        twoTextLabel_7->setGeometry(QRect(100, 170, 21, 16));
        twoTextLabel_7->setFont(font3);
        twoTextLabel_7->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_7->setFrameShadow(QFrame::Plain);
        twoTextLabel_7->setAlignment(Qt::AlignCenter);
        twoTextLabel_8 = new QLabel(dialerGroupBox);
        twoTextLabel_8->setObjectName(QString::fromUtf8("twoTextLabel_8"));
        twoTextLabel_8->setGeometry(QRect(160, 170, 41, 16));
        twoTextLabel_8->setFont(font3);
        twoTextLabel_8->setStyleSheet(QString::fromUtf8("\n"
"border: none;"));
        twoTextLabel_8->setFrameShadow(QFrame::Plain);
        twoTextLabel_8->setAlignment(Qt::AlignCenter);
        label = new QLabel(dialerGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 253, 21, 21));
        label->setPixmap(QPixmap(QString::fromUtf8("../star.jpg")));
        label->setScaledContents(true);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(300, 20, 311, 401));
        tableView->setFont(font);
        tableView->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 15px;\n"
""));
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::DashLine);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->verticalHeader()->setVisible(false);
        numberLabel = new QLabel(centralwidget);
        numberLabel->setObjectName(QString::fromUtf8("numberLabel"));
        numberLabel->setGeometry(QRect(20, 80, 221, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Malgun Gothic"));
        font4.setPointSize(20);
        numberLabel->setFont(font4);
        numberLabel->setStyleSheet(QString::fromUtf8(""));
        numberLabel->setFrameShape(QFrame::NoFrame);
        numberLabel->setFrameShadow(QFrame::Plain);
        numberLabel->setAlignment(Qt::AlignCenter);
        headerGroupBox = new QGroupBox(centralwidget);
        headerGroupBox->setObjectName(QString::fromUtf8("headerGroupBox"));
        headerGroupBox->setGeometry(QRect(20, 20, 221, 51));
        headerGroupBox->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: none;\n"
"border-radius: 15px;"));
        label_2 = new QLabel(headerGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 47, 14));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Malgun Gothic"));
        font5.setPointSize(6);
        font5.setBold(false);
        font5.setWeight(50);
        label_2->setFont(font5);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(headerGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 30, 47, 14));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(headerGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 30, 47, 14));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(headerGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 30, 47, 14));
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(headerGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 0, 16, 16));
        label_7->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../service.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(headerGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 0, 47, 14));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Malgun Gothic"));
        font6.setPointSize(6);
        font6.setBold(true);
        font6.setWeight(75);
        label_8->setFont(font6);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 20, 21, 16));
        label_6->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../battery-two-bar-512.png")));
        label_6->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 641, 22));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Malgun Gothic"));
        font7.setBold(true);
        font7.setWeight(75);
        menubar->setFont(font7);
        menubar->setStyleSheet(QString::fromUtf8(""));
        menuAdd_Contact = new QMenu(menubar);
        menuAdd_Contact->setObjectName(QString::fromUtf8("menuAdd_Contact"));
        menuAdd_Contact->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 99, 99)"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAdd_Contact->menuAction());
        menuAdd_Contact->addAction(actionAdd_Contact);
        menuAdd_Contact->addAction(actionExit_Dialer);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd_Contact->setText(QApplication::translate("MainWindow", "Add Contact", nullptr));
        actionExit_Dialer->setText(QApplication::translate("MainWindow", "Exit Dialer", nullptr));
        dialerGroupBox->setTitle(QString());
        oneButton->setText(QApplication::translate("MainWindow", "1", nullptr));
        sixButton->setText(QApplication::translate("MainWindow", "6", nullptr));
        threeButton->setText(QApplication::translate("MainWindow", "3", nullptr));
        fiveButton->setText(QApplication::translate("MainWindow", "5", nullptr));
        twoButton->setText(QApplication::translate("MainWindow", "2", nullptr));
        eightButton->setText(QApplication::translate("MainWindow", "8", nullptr));
        sevenButton->setText(QApplication::translate("MainWindow", "7", nullptr));
        nineButton->setText(QApplication::translate("MainWindow", "9", nullptr));
        fourButton->setText(QApplication::translate("MainWindow", "4", nullptr));
        starButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        zeroButton->setText(QApplication::translate("MainWindow", "0", nullptr));
        pundButton->setText(QApplication::translate("MainWindow", "#", nullptr));
        backspaceLabel->setText(QString());
        callButton->setText(QString());
        twoTextLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">ABC</span></p></body></html>", nullptr));
        twoTextLabel_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">DEF</span></p></body></html>", nullptr));
        twoTextLabel_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">GHI</span></p></body></html>", nullptr));
        twoTextLabel_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">JKL</span></p></body></html>", nullptr));
        twoTextLabel_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">MNO</span></p></body></html>", nullptr));
        twoTextLabel_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">PQRS</span></p></body></html>", nullptr));
        twoTextLabel_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">TUV</span></p></body></html>", nullptr));
        twoTextLabel_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#919191;\">WXYZ</span></p></body></html>", nullptr));
        label->setText(QString());
        numberLabel->setText(QString());
        headerGroupBox->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#57dc7b;\">DIALPAD</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "BLF", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "CALL LOG", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "CONTACTS", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "12:00 pm", nullptr));
        label_6->setText(QString());
        menuAdd_Contact->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
