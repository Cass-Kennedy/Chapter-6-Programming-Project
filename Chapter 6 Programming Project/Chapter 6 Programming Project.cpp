//This program makes a table of temperatures based on what the user wants.
#include <iostream>
#include <iomanip>
using namespace std;

void getfarhenheit(int &a, int &b); //Function prototypes.

double calcCelsius(double a);

void displayResults(int a, int b);

int main()
{
    int farhenheitInitial, farhenheitIncrements, celsiusInitial; //Initializing necessary variables.
    cout << "This program makes a table that converts farhenheit temperatures to celcius." << endl; //What it does.
    getfarhenheit(farhenheitInitial,farhenheitIncrements); //Sets up the outline of the table.
    while (farhenheitInitial >= 20 || farhenheitInitial <= 0) { //Input validation, makes them input valid values.
        cout << "Please enter a starting value between 0 and 20. ";
        cin >> farhenheitInitial;
    }
    while (farhenheitInitial <= 20 && farhenheitInitial >= 0) { //Sets up a loop so it can display many the appropriate number of rows.
        celsiusInitial = calcCelsius(farhenheitInitial); //Makes it easier to put into the function.
        displayResults(farhenheitInitial, celsiusInitial);
        farhenheitInitial += farhenheitIncrements; //Increases for the next row.
    };
    return 0;
}

void getfarhenheit(int &a, int &b) { //Gets the user to enter the parameters for the table, and alters whatever variables put int.
    cout << "Please enter the first farhenheit temperature and amount between rows: ";
    cin >> a;
    cin >> b;
};

double calcCelsius(double a) { //Takes farhenheit and converts it to celcius.
    return (5.0/9.0)*(a-32); //.0s for floating point division.
};

void displayResults(int a, int b) { //Displays corresponding Farhenheit and Celsius values.
    cout << "farhenheit: " << a;
    cout << setw(14) << "Celsius: " << b << endl; //Sets formatting. 
};