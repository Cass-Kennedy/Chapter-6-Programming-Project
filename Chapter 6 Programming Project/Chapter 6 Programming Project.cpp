#include <iostream>
using namespace std;

void getScore(int &a, int &b);

bool isLower(int a, int b);

bool isHigher(int a, int b);

double calcAverage(double a, int b, double c, double d);


int main()
{
    int sideOne{}, sideTwo{};
    getScore(sideOne,sideTwo);
    return 0;
}

void getScore(int &a, int &b) {
    cout << "Please enter the length and width of the rectangle: ";
    cin >> a;
    cin >> b;
};

bool isLower (int a, int b) {
    return a<b; //int b = min score
    
};

bool isHigher (int a, int b) {
    return a>b; //int b = max score
};

double calcAverage(double a, int b, double c, double d) {
    return (a - (c + d)) / (b - 2);
};