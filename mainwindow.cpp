#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "advice.h"
#include "idk.h"


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

void MainWindow::on_pushButton_2_clicked()
{    
    QString age = ui->txt_age->text();
    QString g = ui->txt_gender->text();
    QString height1 = ui->txt_feet->text();
    QString height2 = ui->txt_inch->text();
    QString weight = ui->txt_weight->text();

    int h1= height1.toInt();
    int h2= height2.toInt();
    float w = weight.toFloat();
    int a = age.toInt();


    Advice person1;
    person1.setGender(g);
    person1.convertInch(h1, h2);
    person1.setInches(person1.getInches());
    person1.setWeight(w);
    person1.setAge(a);
    int f = person1.getInches();
    float bmi = person1.getBMI();
    float ideal = person1.idealWeight();
    float cal = person1.caloriecalc();
    QString stat = person1.status();


    ui->lbl_gender->setText(g);
    QString textAge = QString::number(a);
    ui->lbl_age->setText(textAge);
    QString textHeight = QString::number(f);
    ui->lbl_height->setText(textHeight);
    QString textWeight = QString::number(w);
    ui->lbl_weight->setText(textWeight);
    QString textBMI = QString::number(bmi);
    ui->lbl_bmi->setText(textBMI);
    QString textIdeal = QString::number(ideal);
    ui->lbl_ideal->setText(textIdeal);
    QString textCal = QString::number(cal);
    ui->lbl_cal->setText(textCal);
    ui->lbl_stat->setText(stat);

    /*r = new idk(this);
    r->show();*/

}


