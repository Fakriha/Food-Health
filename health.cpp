#include "health.h"
#include <iostream>
#include <cmath>

using namespace std;
Health:: Health(){
    bmi = 0;
    cm = 0;
}
void Health::convertInch(int &h1, int &h2){
    pureInch = (h1* 12) + h2;
}

int Health::getInches()
{
    return pureInch;
}


float Health::getBMI(){
    bmi = (getWeight() * 703) / pow(getInches(), 2);
    return bmi;
}

float Health:: idealWeight(){
    float *centimeter;
    centimeter = &cm;
    *centimeter = getInches() * 2.54;


    QString gender = getGender();
    if (gender == 'M'){

        return  110.23 + (2.0 * (*centimeter - 152));
    }
    else if (gender == 'F'){
        return 100 + (2.0 * (*centimeter - 152));
    }
    else{
        cout << "Invalid gender" << endl;
        return 0;
    }
}
