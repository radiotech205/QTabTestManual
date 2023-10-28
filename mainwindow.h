#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "mainwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    MainWidget* mw;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

#endif // MAINWINDOW_H
