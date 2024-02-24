#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn1_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn2_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn3_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn4_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn5_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn6_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn7_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn8_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn9_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn0_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btnPlus_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnMinus_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnMultiply_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnDivide_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnClear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_btnEnter_clicked()
{
    clearAndEnterClickHandler();
}

void MainWindow::numberClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "btn1") {
        if(state == 1) {
            number1 += "1";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "1";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn2") {
        if(state == 1) {
            number1 += "2";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "2";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn3") {
        if(state == 1) {
            number1 += "3";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "3";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn4") {
        if(state == 1) {
            number1 += "4";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "4";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn5") {
        if(state == 1) {
            number1 += "5";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "5";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn6") {
        if(state == 1) {
            number1 += "6";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "6";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn7") {
        if(state == 1) {
            number1 += "7";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "7";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn8") {
        if(state == 1) {
            number1 += "8";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "8";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn9") {
        if(state == 1) {
            number1 += "9";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "9";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    } else if(name == "btn0") {
        if(state == 1) {
            number1 += "0";
            ui->textNum1->setText(number1);
            qDebug()<<number1;
        } else if(state == 2) {
            number2 += "0";
            ui->textNum2->setText(number2);
            qDebug()<<number2;
        }
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "btnClear") {
        state = 1;
        number1 = "";
        number2 = "";
        ui->textNum1->setText(number1);
        ui->textNum2->setText(number2);
    } else if (name == "btnEnter") {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();

        if(operand == 0) {
            result = n1 + n2;
        } else if(operand == 1) {
            result = n1 - n2;
        } else if(operand == 2) {
            result = n1 * n2;
        } else if(operand == 3) {
            result = n1 / n2;
        }
        ui->textResult->setText(QString::number(result));
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if(name == "btnPlus") {
        operand = 0;
        state = 2;
    } else if (name == "btnMinus") {
        operand = 1;
        state = 2;
    } else if (name == "btnMultiply") {
        operand = 2;
        state = 2;
    } else if (name == "btnDivide") {
        operand = 3;
        state = 2;
    }
}

void MainWindow::resetLineEdits()
{

}

