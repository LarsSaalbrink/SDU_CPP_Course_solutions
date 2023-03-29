#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <iomanip>


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


void MainWindow::on_leZipcode_textChanged(const QString &arg1)
{

}


void MainWindow::on_pushButton_clicked()
{
    std::string name = ui->leName->text().toStdString();
    std::string address = ui->leAddress->text().toStdString();
    std::string address2 = ui->leAddress2->text().toStdString();
    std::string zipCode = ui->leZipcode->text().toStdString();
    std::string city = ui->leCity->text().toStdString();
    std::string phone = ui->lePhone->text().toStdString();

    const int textWidth = 12;
    std::cout << std::left << std::setw(textWidth) << "Name" << ": " << name << std::endl;
    std::cout << std::left << std::setw(textWidth) << "Address" << ": " << name << std::endl;
    std::cout << std::left << std::setw(textWidth) << "Address 2" << ": " << name << std::endl;
    std::cout << std::left << std::setw(textWidth) << "Zip Code" << ": " << name << std::endl;
    std::cout << std::left << std::setw(textWidth) << "City" << ": " << name << std::endl;
    std::cout << std::left << std::setw(textWidth) << "Phone" << ": " << name << std::endl;
}

