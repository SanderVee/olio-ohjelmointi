#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:

public:
    Car(string, string, int);
    string brand;
    string model;
    int yearModel;
    void printData();
};

#endif // CAR_H
