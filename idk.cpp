#include "idk.h"
#include "ui_idk.h"
#include "mainwindow.h"
#include "Advice.h"

idk::idk(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::idk)
{
    ui->setupUi(this);
    //person1.setAge();

}

idk::~idk()
{
    delete ui;
}
