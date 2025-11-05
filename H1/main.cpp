#include <iostream>

using namespace std;

void calcSum (int x, int y) {
    cout << "Total is: " << x + y << endl; // Prints out sum
}
void calcDiv (int x, int y) {
    if (y==0) {
        cout << "Error, divider cant be a zero" << endl; // Error notification if divider is 0
    } else {
    cout << "Divison is: " << static_cast<double>(x) / y<< endl; // Prints out division
    }
}
int retSum(int x, int y) {
    return x + y; // Sum that returns
}

double retDiv(int x, int y) {
    if (y == 0) {
        throw runtime_error("Return error: Divider cant be a zero");
    }
    return static_cast<double>(x) / y; // Division that returns
}


int main()
{
    int num1, num2; //
    cout << "Give a number: " << endl; // Asking number from the user
    cin >> num1; // Reads users input
    cout << "Give another number: " << endl; // Asking for another number from user
    cin >> num2; // Reads users input
    calcSum(num1, num2); // Sums the numbers
    calcDiv(num1, num2); // Divides

    int sum = retSum(num1, num2); // retSum function return
    cout << "Returned sum is: " << sum << endl; // retSum function print


    double result; // retDiv function
    try {
        result = retDiv(num1, num2);
        cout << "Returned divison is: "<< result << endl; // retDiv function print
    } catch (runtime_error& e) {
        cout << e.what() << endl; // Error message if divider is a zero
    }

    return 0;
}
