#include "dog.h"

Dog::Dog(string n): Animal(n) {

    cout<<"   -Dog "<<name<<" constructor"<<endl;
}

Dog::~Dog()
{
    cout<<"   -Dog "<<name<<" deconstructor"<<endl;
}

void Dog::callOut()
{
    cout<<"   -Dog "<<name<<" barks!"<<endl;
}
