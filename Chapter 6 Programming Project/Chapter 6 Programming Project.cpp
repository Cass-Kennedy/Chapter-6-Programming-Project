#include <iostream>
using namespace std;

void getLength_Width(int &a, int &b); //Function prototypes, see after main for the definitions.

int calcPerimeter(int a, int b);

int calcArea(int a, int b);

void displayResults(int a, int b);


int main()
{
    int sideOne, sideTwo; //Both initialized for input validation in the loop.
    sideOne = -1; 
    sideTwo = -1;
    while (sideOne < 0 || sideTwo < 0) { //Because the values are both set at negative one, this makes sure the function runs once, but it doesn't have to run more than that if the user inputs valid values.
        getLength_Width(sideOne, sideTwo);
        if (sideOne < 0 || sideTwo < 0) { //Error validaiton.
            cerr << "Please enter two positive side lengths. "; 
        };
    }
    displayResults(calcPerimeter(sideOne,sideTwo), calcArea(sideOne,sideTwo)); //Displays the rectangle's information.
    return 0;
}

void getLength_Width(int &a, int &b) { //This function gets the user to input two values for the rectangle side lengths.
    cout << "Please enter the length and width of the rectangle: ";
    cin >> a;
    cin >> b;
};

int calcPerimeter(int a, int b) { //This function calculates the perimeter given two side lengths and returns the value.
    return (2 * a) + (2 * b);
};

int calcArea(int a, int b) { //This function multiplies two values together to find and return area.
    return (a * b);
};

void displayResults(int a, int b) { //This function is just supposed to display the results of the calculations.
    cout << "The perimeter of the rectangle is " << a << "\n";
    cout << "The area of the rectangle is " << b << endl;
};