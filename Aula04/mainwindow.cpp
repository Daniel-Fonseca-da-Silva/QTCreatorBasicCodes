#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Objeto do sinal recebe evento, sinal é o evento, slot quem vai ser associado ao slot, eslot é a ação
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close())); // Fecha a Janela

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    close(); // Fecha essa janela
}

void MainWindow::on_pushButton_2_clicked()
{
    QString css = "background:color #ccc; color:#000; font-size: 16px;"; // Variavel recebendo configurações em CSS
    ui->label->setStyleSheet(css); // Recebe variável CSS
}
