#include "italianchef.h"

ItalianChef::ItalianChef(string n): Chef(n){
    name = n;
    cout << "Italian Chef " << name << " constructor" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Italian Chef " << name << " deconsturtor" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout <<"Italian Chef " << name << " makes pasta" << endl;
}
