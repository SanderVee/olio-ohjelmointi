#include "animal.h"


Animal::Animal(string n)
{
    name = n;
    cout<<"Animal "<<name<< " construcor" << endl;
}

Animal::~Animal()
{
    cout<<"Animal "<<name<<" deconstructor"<<endl;
}

void Animal::callOut()
{
    cout<<"Animal "<<name<<" is making noises!"<<endl;
}
