#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myaddressbookmodel.h"
#include <vector>
#include <QScrollBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:

    void on_tableView_clicked(const QModelIndex &index);

    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_zeroButton_clicked();

    void on_callButton_clicked();

    void on_backspaceLabel_clicked();

    void on_sevenButton_clicked();

    void on_starButton_clicked();

    void on_pundButton_clicked();

    void on_actionAdd_Contact_triggered();

    void on_actionExit_Dialer_triggered();

private:
    Ui::MainWindow *ui;
    MyAddressBookModel *myModel;
    QString temp;
    QScrollBar horizontal;



};
#endif // MAINWINDOW_H
