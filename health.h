#ifndef HEALTH_H
#define HEALTH_H

#include <iostream>
#include "Info.h"
using namespace std;

class Health : public Info{
private:
    float bmi;
    float cm;
    float pureInch;
public:
    Health();
    void convertInch(int &h1, int &h2);
    int getInches();
    float getBMI();
    float idealWeight();
};

#endif // HEALTH_H
