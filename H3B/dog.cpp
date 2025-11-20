#include "dog.h"

Dog::Dog(string n): Animal(n) {

    cout<<"   -Dog "<<name<<" object created"<<endl;
}

Dog::~Dog()
{
    cout<<"   -Dog "<<name<<" object destroyed"<<endl;
}

void Dog::callOut()
{
    cout<<"   -Dog "<<name<<" barks!"<<endl;
}
