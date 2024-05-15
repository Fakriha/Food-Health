#include "info.h"
#include <iostream>
using namespace std;
Info::Info()
{
    cout << "Info constructor called" << endl;
    gender = 'M';
    age = 0;
    weight = 0.0;
    inches = 0;
}
Info::Info(QString g, int a, float w, int h){
    cout << "Info constructor called" << endl;
    gender = g;
    age = a;
    weight = w;
    inches = h;
}
Info::~Info()
{
    cout << "Info destructor called" << endl;
}
void Info::setInches(int inch){
    inches = inch;
}
void Info::setWeight(float weights){
    weight = weights;
}
void Info::setAge(int ages){
    age = ages;
}
void Info::setGender(QString gndr){
    gender = gndr;
}
int Info::getInches(){
    return inches;
}
float Info::getWeight(){
    return weight;
}
int Info::getAge(){
    return age;
}
QString Info::getGender(){
    return gender;
}
void Info::print(){
    /*
    cout << "Gender: " << gender <<"." << endl;
    cout << "Height: " << inches << " inches" << endl;
    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Age: " << age << " years old" << endl;
*/
}
