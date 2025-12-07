#include "classa1.h"
#include "classa2.h"
#include "classb.h"

#include <iostream>
using namespace std;

int main() {

    int a = 5;

    cout << "The value of a is: " << a
         << " and its address is: " << &a << endl;


    int* pointerA = &a;

    cout << "The address stored in pointerA is: " << pointerA << endl;
    cout << "The value at the address pointed to by pointerA is: " << *pointerA << endl;


    int& refA = a;

    cout << "refA refers to the address: " << &refA << endl;
    cout << "The value at the address referred to by refA is: " << refA << endl;


    int b = 6;

    cout << "\nVariable b created, value = " << b << endl;


    refA = b;

    cout << "\nAfter executing refA = b:" << endl;
    cout << "a = " << a << "  (NOTE: a changed!)" << endl;
    cout << "b = " << b << endl;
    cout << "refA still refers to the address: " << &refA << endl;


    pointerA = &b;

    cout << "\nAfter executing pointerA = &b:" << endl;
    cout << "pointerA now stores the address: " << pointerA << endl;
    cout << "The value at the address pointed to by pointerA is: " << *pointerA << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
