#include <iostream>
using namespace std;

void getLength_Width(int &a, int &b);

int calcPerimeter(int a, int b);

int calcArea(int a, int b);

//bool displayResults(int a, int b);


int main()
{
    //int sideOne{}, sideTwo{}, rectPerimeter{}, rectArea{};
    int testOne{}, testTwo{};
    //cin >> testOne;
    //cin >> testTwo;
    getLength_Width(testOne,testTwo);
    cout << calcPerimeter(testOne, testTwo);
    cout << calcArea(testOne, testTwo);
    //displayResults(calcPerimeter, calcArea);
    return 0;
}

void getLength_Width(int &a, int &b) {
    cout << "Please enter the length and width of the rectangle ";
    cin >> a;
    cin >> b;
};

int calcPerimeter(int a, int b) {
    return (2 * a) + (2 * b);
    
};

int calcArea(int a, int b) {
    return (a * b);
};

/*bool displayResults(float a, float b) {
    cout << "The perimeter of the rectangle is " << a << "\n";
    cout << "The area of the rectangle is " << b << endl;
    return 0;
};*/