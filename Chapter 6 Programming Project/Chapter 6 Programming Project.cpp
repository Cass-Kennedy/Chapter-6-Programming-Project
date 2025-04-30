#include <iostream>
using namespace std;

void getLength_Width(int &a, int &b);

int calcPerimeter(int a, int b);

int calcArea(int a, int b);

void displayResults(int a, int b);


int main()
{
    int sideOne, sideTwo;
    sideOne = -1;
    sideTwo = -1;
    while (sideOne < 0 || sideTwo < 0) {
        getLength_Width(sideOne, sideTwo);
        if (sideOne < 0 || sideTwo < 0) {
            cerr << "Please enter two positive side lengths. ";
        };
    }
    displayResults(calcPerimeter(sideOne,sideTwo), calcArea(sideOne,sideTwo));
    return 0;
}

void getLength_Width(int &a, int &b) {
    cout << "Please enter the length and width of the rectangle: ";
    cin >> a;
    cin >> b;
};

int calcPerimeter(int a, int b) {
    return (2 * a) + (2 * b);
    
};

int calcArea(int a, int b) {
    return (a * b);
};

void displayResults(int a, int b) {
    cout << "The perimeter of the rectangle is " << a << "\n";
    cout << "The area of the rectangle is " << b << endl;
};