#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
using namespace std;

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

void MainWindow::on_pushButton_clicked()
{
 QString login = ui -> login -> text();
 QString password = ui -> password -> text();
 if (login == "Ivan" && password == "ivan"){
     QMessageBox::information(this, "good", "good");
 } else {
     QMessageBox::information(this, "error", "bad");
 }
}
