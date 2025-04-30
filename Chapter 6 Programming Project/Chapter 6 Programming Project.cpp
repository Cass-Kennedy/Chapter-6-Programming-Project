//Compares multiple regions and presents the safest one based on crash rates.
#include <iostream>
using namespace std;

void regionInfo(string &a, int &b); //Function prototypes.

bool isLower(int a, int b);

void showLowest(string a, int b);

void inputValidation(int a);

int main()
{
int userEntry, firstAccident, newAccident, saferAccident;
userEntry = 0;
string firstRegion, newRegion, saferRegion;
regionInfo(firstRegion, firstAccident); //Gets the starting information
inputValidation(firstAccident);
regionInfo(newRegion, newAccident); //Gets the second set of information.
inputValidation(newAccident);
if (isLower(firstAccident, newAccident) || firstAccident == newAccident) { //These two if statements set the first safest statment.
    saferAccident = newAccident;
    saferRegion = newRegion;
};
if (isLower(newAccident, firstAccident)) {
    saferAccident = firstAccident;
    saferRegion = firstRegion;
};
cout << "Would you like to enter another region's information? 0 for no, 1 for yes. "; //Meant to allow the user to enter however many regions as they want.
cin >> userEntry;
while (userEntry != 0) {
    regionInfo(newRegion, newAccident);
    inputValidation(newAccident); //Makes sure the accident number is positive.
    if (isLower(saferAccident, newAccident)) { //Determines if the new region is safer.
        saferRegion = newRegion;
        saferAccident = newAccident;
    };
    cout << "Would you like to enter another region's information? 0 for no, 1 for yes. ";
    cin >> userEntry;
};
showLowest(saferRegion, saferAccident); //Displays the overall results.
return 0;
}

void regionInfo(string& a, int& b) { //Gets the region name from the user.
    static int counter;
    counter++; //Meant to display the region number.
    cout << "Please enter the name of the region " << counter << ": ";
    cin >> a; //Can't handle spaces. Getline breaks it otherwise.
    cout << "Please enter the number of accidents: "; 
    cin >> b;
};

bool isLower(int a, int b) { //Compares two accident rates.
    return a > b;
};

void showLowest(string a, int b) { //Displays the overall results.
    cout << a << " is the saftest region to drive because it has the lowest crash rate with " << b << " crashes last year.";
};

void inputValidation(int a) { //Makes sure the input is acceptable.
    while (a < 0) {
        cout << "Please enter a positive accident number. ";
        cin >> a;
    };
}