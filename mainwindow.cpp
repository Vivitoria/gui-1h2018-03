#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sets.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow = new sets();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
      connect(sWindow, &sets::firstWindow, this, &MainWindow::show);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    sWindow->show();  // Показываем второе окно
        this->close();
}
m