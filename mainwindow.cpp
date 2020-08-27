#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qimagewidget.h"
#include "figure.h"
#include "toolbar.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  // ToolBar *checkBox = new ToolBar(this);
   ToolBar *toolBar = new ToolBar(this);
   QImageWidget* image = new QImageWidget(toolBar, this);

//  QImageWidget* image = new QImageWidget(checkBox, this);
    ui->verticalLayout->addWidget(toolBar);
 //   ui->verticalLayout->addWidget(checkBox);
    ui->verticalLayout->addWidget(image);
   //  ui->verticalLayout->addWidget(QPushButton);
    ui->verticalLayout->setStretch(1,1);
    ui->verticalLayout->setStretch(1,1);
   // ui->verticalLayout->setStretch(2,2);
}

MainWindow::~MainWindow()
{
    delete ui;



}
