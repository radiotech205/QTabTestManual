#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QObject>
#include <QWidget>
#include <QLayout>
#include <QTabWidget>
#include <QPushButton>
#include <QComboBox>

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = nullptr);
private:
    QVBoxLayout*    vl;
    QTabWidget*     tabWidget;
    QWidget*        tWtab;
    QWidget*        tWtab2;

    QPushButton*    pb;
    QComboBox*      cb;
signals:

public slots:
};

#endif // MAINWIDGET_H
