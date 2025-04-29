#include <iostream>
using namespace std;

void getScore(int &a, int &b);

int calcPerimeter(int a, int b);

int calcArea(int a, int b);

void displayResults(int a, int b);


int main()
{
    int sideOne{}, sideTwo{};
    getLength_Width(sideOne,sideTwo);
    displayResults(calcPerimeter(sideOne,sideTwo), calcArea(sideOne,sideTwo));
    return 0;
}

void getScore(int &a, int &b) {
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