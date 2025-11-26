#include "car.h"
#include <iostream>

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setEngine()
{
    objEngine = Engine(150, 2.0);

}

void Car::setWheels()
{
    objWheel1 = Wheel(17, "summer tyre");
    objWheel2 = Wheel(17, "summer tyre");
    objWheel3 = Wheel(17, "summer tyre");
    objWheel4 = Wheel(17, "summer tyre");

}

void Car::printDetails()
{
    cout<<"Car: " <<brand<<model<<endl;
    cout<<"Engine: "<<objEngine.getHorsepower()<<" horsepowers, "<<objEngine.getDisplacement()<<"L"<<endl;
    cout<<"Tyres"<<endl;
    cout<<" Tyre 1: "<< objWheel1.getSize()<<" inches, "<<objWheel1.getType()<<endl;
    cout<<" Tyre 2: "<< objWheel2.getSize()<<" inches, "<<objWheel2.getType()<<endl;
    cout<<" Tyre 3: "<< objWheel3.getSize()<<" inches, "<<objWheel3.getType()<<endl;
    cout<<" Tyre 4: "<< objWheel4.getSize()<<" inches, "<<objWheel4.getType()<<endl;
}

Car::Car() {}

Car::Car(string b, string m)
{
    brand = b;
    model = m;
}
