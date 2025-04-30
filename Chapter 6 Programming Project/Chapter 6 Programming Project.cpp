#include <iostream>
#include <iomanip>
using namespace std;

void getfarhenheit(int &a, int &b);

double calcCelsius(double a);

void displayResults(int a, int b);

int main()
{
    int farhenheitInitial, farhenheitIncrements, celsiusInitial;
    cout << "This program makes a table that converts farhenheit temperatures to celcius." << endl;
    getfarhenheit(farhenheitInitial,farhenheitIncrements);
    while (farhenheitInitial >= 20 || farhenheitInitial <= 0) {
        cout << "Please enter a starting value between 0 and 20. ";
        cin >> farhenheitInitial;
    }
    while (farhenheitInitial <= 20 && farhenheitInitial >= 0) {
        celsiusInitial = calcCelsius(farhenheitInitial);
        displayResults(farhenheitInitial, celsiusInitial);
        farhenheitInitial += farhenheitIncrements;
    };
    return 0;
}

void getfarhenheit(int &a, int &b) {
    cout << "Please enter the first farhenheit temperature and amount between rows: ";
    cin >> a;
    cin >> b;
};

double calcCelsius(double a) {
    return (5.0/9.0)*(a-32);
};

void displayResults(int a, int b) {
    cout << "farhenheit: " << a;
    cout << setw(14) << "Celsius: " << b << endl;
};