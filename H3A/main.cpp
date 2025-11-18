#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{   // Kantaluokka
    Chef gordon("Gordon Ramsey");
    gordon.makeSalad();
    gordon.makeSoup();

    // Aliluokka
    ItalianChef anthony("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();
    cout << "Name of the Italian Chef is: " << anthony.getName() << endl;
    return 0;
}
