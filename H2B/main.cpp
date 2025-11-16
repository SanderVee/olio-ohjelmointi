#include "car.h"
#include <vector>

#include <iostream>

using namespace std;

int main()
{
    Car car1("Nissan", "Skyline", 1997);
    Car car2("Ford", "Mustang", 1969);
    Car car3("Chevrolet", "Impala", 1970);

    vector<Car> carList;
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);
    // Second element
    cout << "Second element of the vector: " << endl;
    carList[1].printData();
    // All elements
    cout << "All elements of the vector: " << endl;
    for (int x = 0; x < carList.size(); x++){
        carList[x].printData();
    }

    return 0;
}
