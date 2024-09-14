#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Главное окно");
    connect(ui->butOpen, &QPushButton::clicked, this, &MainWindow::openDialog);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openDialog()
{
    DialogWnd* dialogWnd = new DialogWnd();
    dialogWnd->show();
}

