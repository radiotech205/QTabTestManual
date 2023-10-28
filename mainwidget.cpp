#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent) : QWidget(parent)
{
    vl = new QVBoxLayout();
    this->setLayout(vl);

    tabWidget = new QTabWidget(this);
    tabWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tWtab = new QWidget(tabWidget);
    tWtab->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tabWidget->addTab(tWtab, QString("tab"));
    tWtab2 = new QWidget(tabWidget);
    tWtab2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tabWidget->addTab(tWtab2, QString("tab2"));
    tabWidget->setCurrentIndex(0);
    vl->addWidget(tabWidget);

    pb = new QPushButton(tWtab);
    pb->setText("QPushButton");

    cb = new QComboBox(tWtab2);
    cb->addItem("QComboBox");

}
