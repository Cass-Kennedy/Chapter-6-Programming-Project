//Calculates the price and parts of a paint job.
#include <iostream>
#include <cmath>
using namespace std;

void totalSquareFootage(double a, double &b); //Function prototypes.

int scalingConstant(double a);

double paintInformation(double &a, int b); //Uses the square footage to calculate number of gallons. Also finds the price of the paint and calculates that.

void laborHours(int a, double &b); //Uses scaling const to calc labor hours and the price.

void finalReport(int a, double b, double c);

int main()
{
    int roomNumber, counter, scaleNumber;
    counter = 0; //Tracks how many rooms the user wants to paint.
    double inputWallSpace{}, cumulativeWallSpace{}, paintCost, totalPaintCost, laborCost;
    laborCost = 25.0; //Given labor price.
    paintCost = 0.0; //Initial paint cost, the user will input another value later.
    cout << "How many rooms do you want painted? ";
    cin >> roomNumber; //How many times to run the square foot loop.
    while (roomNumber < 1) { //Input validation.
        cerr << "Please input a valid number of rooms. "; //Error message
        cin >> roomNumber;
    };
    while (counter != roomNumber) { //This loops gets total square footage.
        totalSquareFootage(inputWallSpace, cumulativeWallSpace); //Gets the square footage in each room and adds them together.
        counter += 1; //Controls the loop.
    };
    if (cumulativeWallSpace <= 0) { //Input validation.
        cout << "Please enter a valid square footage.";
    }
    else { 
        scaleNumber = scalingConstant(cumulativeWallSpace); //Makes a number based off of the amount of wall space.
        while (paintCost < 10) { //Controls the paint cost.
            totalPaintCost = paintInformation(paintCost, scaleNumber); //Gets the total cost of the paint.
            if (paintCost < 10) {
                cerr << "Please input a valid paint cost (>$10). "; //Error message.
            }
        }
        laborHours(scaleNumber, laborCost); //Gets the total cost of the labor.
        finalReport(scaleNumber, totalPaintCost, laborCost); //Displays the final results.
    }
    return 0;
}

void totalSquareFootage(double a, double &b) { //Gets the square footage in each room. The second parameter is to make a total count.
    static int count;
    count++; //Displays the room number.
    cout << "How many square feet of wall space in room " << count << "? ";
    cin >> a;
    b += a;
};

int scalingConstant(double a) { //Makes a number for calculating prices based off of the square footage.
    return ceil(a / 110.0);
};

double paintInformation(double &a, int b) { //Gets the price of paint and returns the price of it.
    cout << "What is the price of your prefered paint? ";
    cin >> a;
    return a*b;
};

void laborHours(int a, double &b) { //Calculates the amount and cost of labor.
    int laborPer = 8;
    double costPer = 25.0;
    b = a * costPer * laborPer;
};

void finalReport(int a, double b, double c) { //Meant to give a full report of prices and time.
    // a will be scalingConstant, b will be paintInfo, c will be labor hours
    int laborPer = 8;
    cout << "The amount of paint required is " << a << " gallons.\n";
    cout << "The total paint cost is $" << b << ".\n";
    cout << "The number of labor hours necessary is " << a * laborPer << ".\n";
    cout << "The total labor cost is $" << c << ".\n";
    cout << "The total cost of the job is $" << b + c << ".\n";
};