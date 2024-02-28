#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    ui->btnStartGame->setEnabled(false);
    ui->btnSwitch1->setEnabled(false);
    ui->btnSwitch2->setEnabled(false);
    ui->btnStopGame->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

//ajan kuluminen
void MainWindow::timeout()
{
    if(currentPlayer == 1){
        player1Time--;
        if(player1Time == 0) {
            setGameInfoText("Player 1 WON!!!", 20);
            currentPlayer = 1;
            ui->btn120Sec->setEnabled(true);
            ui->btn5Min->setEnabled(true);
            ui->btnSwitch1->setEnabled(false);
            ui->btnSwitch2->setEnabled(false);
            pQTimer->stop();
        }
    } else if(currentPlayer == 2) {
        player2Time--;
        if(player2Time == 0) {
            setGameInfoText("Player 2 WON!!!", 20);
            currentPlayer = 1;
            ui->btn120Sec->setEnabled(true);
            ui->btn5Min->setEnabled(true);
            ui->btnSwitch1->setEnabled(false);
            ui->btnSwitch2->setEnabled(false);
            pQTimer->stop();
        }
    }
    updateProgressBar();
}

//päivittää kummankin progressbar olion tilanteen player1Time, player2Time ja gameTime muuttujien perusteella
void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1){
        ui->progressBar1->setValue(player1Time);
    } else if(currentPlayer == 2) {
        ui->progressBar2->setValue(player2Time);
    }
}

//Qstring parametrin avulla voidaan tulostaa ohjetekstejä käyttöliittymän Label olioon ja metodin short parametrilla voidaan valita tuon ohjetekstin fontin koko
void MainWindow::setGameInfoText(QString str, short size)
{
    ui->lblGameText->setText(str);
    QFont font = ui->lblGameText->font();
    font.setPointSize(size);
    ui->lblGameText->setFont(font);
}

void MainWindow::on_btnStartGame_clicked()
{
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    pQTimer->start(1000);
    ui->progressBar1->setMaximum(gameTime);
    ui->progressBar2->setMaximum(gameTime);
    ui->progressBar1->setValue(gameTime);
    ui->progressBar2->setValue(gameTime);
    setGameInfoText("Game ongoing", 16);
    currentPlayer = 1;
    ui->btnSwitch1->setEnabled(true);
    ui->btnSwitch2->setEnabled(false);
    player1Time = gameTime;
    player2Time = gameTime;
    ui->btnStartGame->setEnabled(false);
    ui->btn120Sec->setEnabled(false);
    ui->btn5Min->setEnabled(false);
    ui->btnStopGame->setEnabled(true);
}


void MainWindow::on_btnStopGame_clicked()
{
    setGameInfoText("Select playtime and press start game!", 16);
    currentPlayer = 1;
    ui->btn120Sec->setEnabled(true);
    ui->btn5Min->setEnabled(true);
    ui->btnSwitch1->setEnabled(false);
    ui->btnSwitch2->setEnabled(false);
    pQTimer->stop();
}


void MainWindow::on_btn120Sec_clicked()
{
    gameTime = 120;
    ui->btnStartGame->setEnabled(true);
    setGameInfoText("Ready to play!", 16);
}


void MainWindow::on_btn5Min_clicked()
{
    gameTime = 60*5;
    ui->btnStartGame->setEnabled(true);
    setGameInfoText("Ready to play!", 16);
}


void MainWindow::on_btnSwitch1_clicked()
{
    currentPlayer = 2;
    ui->btnSwitch1->setEnabled(false);
    ui->btnSwitch2->setEnabled(true);
}


void MainWindow::on_btnSwitch2_clicked()
{
    currentPlayer = 1;
    ui->btnSwitch1->setEnabled(true);
    ui->btnSwitch2->setEnabled(false);
}

