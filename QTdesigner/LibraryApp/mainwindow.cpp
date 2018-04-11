#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "objects.h"

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


int userLevel;

void MainWindow::on_menyPageMyProfileBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_loginBtn_clicked()
{
    //Page2 = user, page 13 = admin
    ui->stackedWidget->setCurrentIndex(13);
}

void MainWindow::on_createNewUserBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_createNewUserBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_menyPageLogoutBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_menyPageFindBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_myProfilePageBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_changeUserDataBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_findBookPageBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_findBookPageDiscoveryBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_myProfilePageChangeInfoBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_discoveryPageBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_showLibraryBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_discoveryPageConfirmBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_findBookPageConfirmBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_showLibraryConfirmBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_checkoutPageCancelBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_checkoutPageAddBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_confirmationPageBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_checkoutPageCheckoutBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}

void MainWindow::on_adminFunctionPageBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}

void MainWindow::on_adminFunctionPageNewAdminBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_adminFunctionPageLibraryBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void MainWindow::on_adminFunctionPageBookBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_adminPageBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_addBookPageBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_addLibraryBackBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_adminPageFindBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_adminPageMyProfileBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_adminPageFunctionBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_adminPageLogoutBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
