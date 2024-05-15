#ifndef INFO_H
#define INFO_H
#include <QString>

class Info
{
private:
    float weight;
    int inches;
    int age;
    QString gender;
public:
    Info();
    Info(QString g, int a, float w, int h);
    ~Info();
    void setInches(int inches);
    void setWeight(float weight);
    void setAge(int age);
    void setGender(QString gender);
    int getInches();
    float getWeight();
    int getAge();
    QString getGender();
    void print();
    virtual float idealWeight() = 0;
};

#endif // INFO_H
