#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnReset_clicked()
{
    x = 0;
    QString s = QString::number(x);
    ui->textResult->setText(s);
}


void MainWindow::on_btnCount_clicked()
{
    x++;
    QString s = QString::number(x);
    ui->textResult->setText(s);
}

