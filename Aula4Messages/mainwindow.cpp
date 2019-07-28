#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox> //Biblioteca de definição de caixa de mensagens

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Menssagem botao
void MainWindow::on_btnMessagem_clicked()
{
    QMessageBox::about(this, "Carregamento iniciado", "O carregamento vai ser iniciado");
    //QMessageBox::aboutQt(this, "Sobre o Framework");
    //QMessageBox::critical(this, "Ocorreu um erro", "Erro detectado!");
    //QMessageBox::information(this, "Informação atual", "Dados foram salvos");
    //QMessageBox::question(this,"Voltar ou Sair", "Deseja mesmo sair?");
    //QMessageBox::warning(this, "Alerta", "Produtos vazios");
}
