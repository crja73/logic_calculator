#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    my_func();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::my_func()
{
    bool op1, op2;
    int res;
    int index;
    op1 = (ui->comb1->currentIndex()==0);
    op2 = (ui->comb2->currentIndex()==0);
    index = (ui->oper->currentIndex());
    QPalette pal;
    pal = ui->centralWidget->palette();
    switch(index){
        case 0: // disunkciya
        res = (op1 || op2);
        ui->comb2->setVisible(true);
        break;

        case 1:
        res = (op1 & op2);
        ui->comb2->setVisible(true);
        break;

        case 2:
        res = (!op1);
        ui->comb2->setVisible(false);
        break;

        case 3:
        res = (!(op1) + op2);
        ui->comb2->setVisible(true);
        break;

        case 4:
        res = (op1 == op2);
        ui->comb2->setVisible(true);
        break;

        case 5:
        res = ((!(op1) & op2) + (op1 & !(op2)));
        ui->comb2->setVisible(true);
        break;



    }

    if (res){
        pal.setColor(QPalette::Window, Qt::green);
    }
    else{
            pal.setColor(QPalette::Window, Qt::red);
    }

    ui->centralWidget->setAutoFillBackground(true);
    ui->centralWidget->setPalette(pal);


}

void MainWindow::on_comb1_currentIndexChanged(int)
{
    my_func();

}

void MainWindow::on_oper_currentIndexChanged(int)
{
    my_func();
}

void MainWindow::on_comb2_currentIndexChanged(int)
{
    my_func();
}
