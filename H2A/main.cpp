#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    // H2A Stack
    Car car1;
    car1.brand="Nissan";
    car1.model="Skyline";
    car1.yearModel=1997;
    cout << car1.brand << " " << car1.model << " " << car1.yearModel << endl;
    // H2A Heap
    Rectangle *rect = new Rectangle;
    rect->height=6;
    rect->width=5;
    cout << "Rectangle area is: " << rect->getArea() << endl;
    delete rect;
    rect = nullptr;
    // H2A Smart pointer
    unique_ptr<Student> student1 = make_unique<Student>();
    student1->setName("Dean Winchester");
    student1->setStudentNumber(1292);
    student1->setAverage(4.6);
    cout << student1->getName() << " " << student1->getStudentNumber() << " " << student1->getAverage() << endl;
    return 0;
}
