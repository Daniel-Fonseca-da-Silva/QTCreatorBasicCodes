#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Classe principal
    QApplication a(argc, argv);
    MainWindow w; // Criando objeto tipo MainWindow
    w.show(); // Mostrando objeto show

    return a.exec();
}
