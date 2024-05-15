#ifndef ADVICE_H
#define ADVICE_H

#include <iostream>
#include "Health.h"
using namespace std;

class Advice : public Health{
private:
    float bmi;
public:
    float getAdvice();
    float caloriecalc();
    QString status();
};

#endif // ADVICE_H
