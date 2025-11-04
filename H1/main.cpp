#include <iostream>

using namespace std;

void calcSum (int x, int y) {
    cout << "Total is: " << x + y << endl;
}

int main()
{
    int num1, num2;
    cout << "Give a number: " << endl; // Kysytään käyttäjältä numero
    cin >> num1; // Lukee käyttäjän inputin
    cout << "Give another number: " << endl; // Kysyy toista numeroa käyttäjältä
    cin >> num2; // Lukee käyttäjän inputin
    calcSum(num1, num2); // Laskee yhteen
    return 0;
}
