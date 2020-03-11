#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "OperatorPluss.cpp"
#include "operatordelit.cpp"
#include "operatorminus.cpp"
#include "operatorumnogit.cpp"
QMultiMap<char, Operator1<int>*> *m;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    OperatorPlus<int>* p = new OperatorPlus<int>();
    Operatorminus<int>* p1 = new Operatorminus<int>();
    Operatordelit<int>* p2 = new Operatordelit<int>();
    Operatorumnogit<int>* p3 = new Operatorumnogit<int>();
    m = new QMultiMap<char, Operator1<int>*>();
    m->insert('+', p);
    m->insert('/', p2);
    m->insert('*', p3);
    m->insert('-', p1);
}




MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int res;
    QString s=ui->textEdit->toPlainText();
    QString s2=ui->textEdit_2->toPlainText();
    QString s3=ui->textEdit_3->toPlainText();
    res = m->take(s2.toStdWString()[0])->action(s.toInt(), s3.toInt());
   /* if (s2=="+") {
             res = s.toInt() + s3.toInt();
    }
    if (s2=="-") {
             res = s.toInt() - s3.toInt();
    }
    if (s2=="*") {
            res = s.toInt() * s3.toInt();
    }
    if (s2=="/") {
             res = s.toInt() / s3.toInt();
    }*/
    ui->label_2->setNum(res);
}
