#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitUi();
}

void MainWindow::InitUi()
{
    this->setWindowTitle("Calculator");

    _outputLE = new QLineEdit(this);
    _outputLE->setStyleSheet("color: white");
    _outputLE->setFixedHeight(100);
    _outputLE->setReadOnly(true);
    ui->mainLayout->addWidget(_outputLE);

    _numberBtnsLayout = new QGridLayout(this);
    _numberBtnsLayout->cellRect(_HEIGHT, _WIDTH);
    ui->mainLayout->addLayout(_numberBtnsLayout);

    _numberBtns = new QVector<QPushButton *>();
    _actionBtns = new QVector<QPushButton *>();
    for (int i = 0; i < _HEIGHT; i++)
    {
        for (int j = 0; j < _WIDTH; j++)
        {
            QPushButton *btn = new QPushButton(this);
            btn->setFixedHeight(100);
            btn->setFixedWidth(100);
            btn->setStyleSheet("color: black");
            btn->setText(QString::number(3*i+j+1));
            _numberBtns->append(btn);
            _numberBtnsLayout->addWidget(_numberBtns->last(), i, j);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
