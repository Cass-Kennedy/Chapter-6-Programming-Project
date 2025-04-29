#include <iostream>
#include <iomanip>
using namespace std;

void getFarenheit(int &a, int &b);

double calcCelsius(double a);

void displayResults(int a, int b);
int addition(int a, int b);


int main()
{
    int farenheitInitial, farenheitIncrements, celsiusInitial;
    cout << "This program makes a table that converts farenheit temperatures to celcius." << endl;
    getFarenheit(farenheitInitial,farenheitIncrements);
    while (farenheitInitial <= 20) {
        celsiusInitial = calcCelsius(farenheitInitial);
        displayResults(farenheitInitial, celsiusInitial);
        farenheitInitial += farenheitIncrements;
    };
    return 0;
}

void getFarenheit(int &a, int &b) {
    cout << "Please enter the first farenheit temperature and amount between rows: ";
    cin >> a;
    cin >> b;
};

double calcCelsius(double a) {
    return (5.0/9.0)*(a-32);
};

void displayResults(int a, int b) {
    cout << "Farenheit: " << a;
    cout << setw(14) << "Celsius: " << b << endl;
};

int addition(int a, int b) {
    return a + b;
};