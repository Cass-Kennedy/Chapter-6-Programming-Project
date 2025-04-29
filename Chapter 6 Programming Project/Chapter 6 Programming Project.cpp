#include <iostream>
using namespace std;

void getScore(double &a);

bool isLower(double a, double b);

bool isHigher(double a, double b);

double calcAverage(double a, int b, double c, double d);


int main()
{
    double userEntry, userScore, minScore, maxScore, cumulativeScore;
    int counter;
    counter = 1;
    getScore(userScore);
    minScore = userScore;
    maxScore = userScore;
    cumulativeScore = userScore;
    do {
        cout << "Please enter your score: ";
        cin >> userScore;
        if (isLower(userScore, minScore)) {
            minScore = userScore;
        };
        if (isHigher(userScore, maxScore)) {
            maxScore = userScore;
        };
        cumulativeScore += userScore;
        counter += 1;
        cout << "Would you like to enter another score? 0 for no, 1 for yes. ";
        cin >> userEntry;
    } while (userEntry != 0);
    if (counter >= 3) {
        cout << "Your score is " << calcAverage(cumulativeScore, counter, minScore, maxScore);
    }
    else {
        cout << "Not enough scores to calculate correctly.";
    };
    return 0;
}

void getScore(double &a) {
    cout << "Please enter your first score: ";
    cin >> a;
};

bool isLower (double a, double b) {
    return a<b; //int b = min score
    
};

bool isHigher (double a, double b) {
    return a>b; //int b = max score
};

double calcAverage(double a, int b, double c, double d) {
    return (a - (c + d)) / (b - 2);
};