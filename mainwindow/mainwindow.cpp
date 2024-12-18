#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action_5, SIGNAL(triggered(bool)), this, SLOT(savefile()));
    connect(ui->action_8, SIGNAL(triggered(bool)), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::savefile()
{
    QString filename;
    filename = ".\\test.txt";

    QFile file(filename);
    QTextStream out(&file);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "File not open";
        return;
    }

    out << ui->plainTextEdit->toPlainText();
    file.flush();
    file.close();

    ui->plainTextEdit->setPlainText("Saved Successfully!");
}
