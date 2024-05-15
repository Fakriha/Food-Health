#include "advice.h"
#include <iostream>
using namespace std;
float Advice::getAdvice(){
    bmi = getBMI();
    cout << "Your BMI is: " << bmi << endl;
    if(bmi < 18.5){
        cout << "You are Underweight" << endl;
    }else if(bmi >= 18.5 && bmi < 25){
        cout << "You are Normal weight" << endl;
    }else if(bmi >= 25 && bmi < 30){
        cout << "You are Overweight" << endl;
    }else if(bmi >= 30){
        cout << "You are Obese" << endl;
    }
    cout << "Your ideal weight is: " << idealWeight() << endl;
    return 0;
}
float Advice::caloriecalc(){
    int calories = 0;
    if (getGender() == 'M'){
        calories = 66 + (6.23 * getWeight()) + (12.7 * getInches()) - (6.8 * getAge());
    }else if (getGender() == 'F'){
        calories = 655 + (4.35 * getWeight()) + (4.7 * getInches()) - (4.7 * getAge());
    }
    else {
        cout << "Invalid gender" << endl;
    }
    return calories;

}

QString Advice::status(){
    if(getBMI() >= 30){
        return "Obese";
    }else if(getBMI() >= 25 && bmi < 30){
        return "Overweight";
    }else if(getBMI() >= 18.5 && bmi < 25){
        return "Normal weight";
    }else if (getBMI() < 18.5){
        return "Underweight";
    }

}

