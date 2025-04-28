#include <iostream>
using namespace std;

void regionInfo(string &a, int &b);

bool isLower(int a, int b);

void showLowest(string a, int b);

int main()
{
int userEntry, firstAccident, newAccident, saferAccident;
userEntry = 0;
string firstRegion, newRegion, saferRegion;
cout << "Please enter the name of a region in your area: ";
cin >> firstRegion;
cout << "Please enter how many car crashes occured there last year ";
cin >> firstAccident;
cout << "Please enter another region's name ";
cin >> newRegion;
cout << "Please enter how many car crashes occured there last year ";
cin >> newAccident;
if (isLower(firstAccident, newAccident) || firstAccident == newAccident) {
    saferAccident = newAccident;
    saferRegion = newRegion;
};
if (isLower(newAccident, firstAccident)) {
    saferAccident = firstAccident;
    saferRegion = firstRegion;
};
cout << "\nWould you like to enter another region's information? 0 for no, 1 for yes. ";
cin >> userEntry;
while (userEntry != 0) {
    cout << "Please enter the name of a regions in your area ";
    cin >> newRegion;
    cout << "Please enter how many car crashes occured there last year ";
    cin >> newAccident;
    if (isLower(saferAccident, newAccident)) {
        saferRegion = newRegion;
        saferAccident = newAccident;
    };
    cout << "\nWould you like to enter another region's information? 0 for no, 1 for yes. ";
    cin >> userEntry;
};
showLowest(saferRegion, saferAccident);
return 0;
}

void regionInfo(string& a, int& b) {
    cout << "Please enter the name of the region: ";
    cin >> a;
    cout << "Please enter the number of accidents: ";
    cin >> b;
};

bool isLower(int a, int b) {
    return a > b;
};

void showLowest(string a, int b) {
    cout << a << " is the saftest region to drive because it has the lowest crash rate with " << b << " crashes last year.";
};