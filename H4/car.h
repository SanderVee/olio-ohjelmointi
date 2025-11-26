#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"


class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string brand;
    string model;
public:
    Car();
    Car(string, string);
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    void setEngine();
    void setWheels();
    void printDetails();
};

#endif // CAR_H
