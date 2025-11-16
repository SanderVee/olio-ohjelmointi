#include "car.h"
#include <iostream>

Car::Car(string a, string b, int c) {
    brand = a;
    model = b;
    yearModel = c;
}

void Car::printData()
{
    cout << brand << " " << model << " " << yearModel << endl;
}
