#ifndef REPORT_H
#define REPORT_H
#include "mainwindow.h"
#include <QWidget>

namespace Ui {
class Report;
}

class Report : public QWidget
{
    Q_OBJECT

public:
    explicit Report(QWidget *parent = nullptr);
    ~Report();

private:
    Ui::Report *ui;
    /*
    int f = person1.getInches();
    float bmi = person1.getBMI();
    float ideal = person1.idealWeight();
    float cal = person1.caloriecalc();
    QString stat = person1.status();
*/
};

#endif // REPORT_H
