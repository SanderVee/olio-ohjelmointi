#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
protected:
    string name;
public:
    Animal(string);
    ~Animal();
    virtual void callOut();
};

#endif // ANIMAL_H
