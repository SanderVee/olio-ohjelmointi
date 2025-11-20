#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    Animal objAnimal("Donald");
    objAnimal.callOut();
    Dog objDog("Rufus");
    objDog.callOut();
    return 0;
}
