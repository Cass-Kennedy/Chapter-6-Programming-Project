#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void totalSquareFootage(double a, double &b);

int scalingConstant(double a);

void paintInformation(double &a, int b); //Uses the square footage to calculate number of gallons. Also finds the price of the paint and calculates that.

void laborHours(int a, double &b); //Uses scaling const to calc labor hours and the price.

void finalReport(int a, double b, double c);

int main()
{
    int roomNumber, counter, scaleNumber;
    counter = 0;
    double inputWallSpace{}, cumulativeWallSpace{}, paintCost, laborCost;
    laborCost = 25.0;
    cout << "How many rooms do you want painted? ";
    cin >> roomNumber;
    while (counter != roomNumber) {
        totalSquareFootage(inputWallSpace, cumulativeWallSpace);
        counter += 1;
    };
    scaleNumber = scalingConstant(cumulativeWallSpace);
    paintInformation(paintCost, scaleNumber);
    laborHours(scaleNumber, laborCost);
    finalReport(scaleNumber, paintCost, laborCost);
    return 0;
}

void totalSquareFootage(double a, double &b) {
    static int count;
    count++;
    cout << "How many square feet of wall space in room" << count << "? ";
    cin >> a;
    b += a;
};

int scalingConstant(double a) {
    return ceil(a / 110.0);
};

void paintInformation(double &a, int b) {
    cout << "What is the price of your prefered paint? ";
    cin >> a;
    a*b;
};

void laborHours(int a, double &b) {
    int laborPer = 8;
    double costPer = 25.0;
    b = a * costPer * laborPer;
};

void finalReport(int a, double b, double c) { // a will be scalingConstant, b will be paintInfo, c will be labor hours
    int laborPer = 8;
    cout << "The amount of paint required is " << a << " gallons.\n";
    cout << "The total paint cost is $" << b << "\n";
    cout << "The number of labor hours necessary is " << a * laborPer << "\n";
    cout << "The total labor cost is $" << c << "\n";
    cout << "The total cost of the job is $" << b + c << "\n";
};