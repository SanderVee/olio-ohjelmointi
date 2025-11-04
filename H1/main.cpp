#include <iostream>

using namespace std;

void calcSum (int x, int y) {
    cout << "Total is: " << x + y << endl; // Tulostaa plus laskun
}
void calcDiv (int x, int y) {
    if (y==0) {
        cout << "Error, divider cant be a zero" << endl; // Virheilmoitus jos jakaja on 0
    } else {
    cout << "Divison is: " << x / y << endl; // Tulostaa jakolaskun
    }
}
int retSum(int x, int y) {
    return x + y;
}


int main()
{
    int num1, num2; //
    cout << "Give a number: " << endl; // Kysytään käyttäjältä numero
    cin >> num1; // Lukee käyttäjän inputin
    cout << "Give another number: " << endl; // Kysyy toista numeroa käyttäjältä
    cin >> num2; // Lukee käyttäjän inputin
    calcSum(num1, num2); // Laskee yhteen
    calcDiv(num1, num2); // Tekee jakolaskun annetuilla numeroilla

    int sum = retSum(num1, num2); // retSum funktion palautus

    cout << "Sum is: " << sum << endl; // retSum funktion palautuksen tulostus

    return 0;
}
