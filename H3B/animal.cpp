#include "animal.h"


Animal::Animal(string n)
{
    name = n;
    cout<<"Animal "<<name<< " object created" << endl;
}

Animal::~Animal()
{
    cout<<"Animal "<<name<<" object destroyed"<<endl;
}

void Animal::callOut()
{
    cout<<"Animal "<<name<<" is making noises!"<<endl;
}
