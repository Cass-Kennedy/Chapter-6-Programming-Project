#include <iostream>
using namespace std;

void getScore(double &a); //Function prototypes. 

bool isLower(double a, double b);

bool isHigher(double a, double b);

double calcAverage(double a, int b, double c, double d);

void inputValidation(double a);


int main()
{
    double userEntry, userScore, minScore, maxScore, cumulativeScore;
    int counter;
    counter = 1; //Used to control the number of industries and calculate the the final answer.
    getScore(userScore); //Gets the first score.
    inputValidation(userScore); //Makes sure the first value is positive.
    minScore = userScore; //These three set the standard.
    maxScore = userScore;
    cumulativeScore = userScore;
    do {
        cout << "Please enter another score: ";
        cin >> userScore;
        inputValidation(userScore);
        if (isLower(userScore, minScore)) { //Tracks the lowest score to drop.
            minScore = userScore;
        };
        if (isHigher(userScore, maxScore)) { //Tracks the highest score to drop.
            maxScore = userScore;
        };
        cumulativeScore += userScore; //Increases the total for the final calculation.
        counter += 1;
        cout << "Would you like to enter another score? 0 for no, 1 for yes. "; //These three lines allow the user to enter as many scores as they want.
        cin >> userEntry; 
    } while (userEntry != 0);
    if (counter >= 3) { //Makes sure the program doesn't try to divide by 0.
        cout << "Your score is " << calcAverage(cumulativeScore, counter, minScore, maxScore); //Displays the final score.
    }
    else { 
        cout << "Not enough scores to calculate correctly."; //Error message.
    };
    return 0;
}

void getScore(double &a) { //Gets the first score.
    cout << "Please enter your first score: ";
    cin >> a;
};

bool isLower (double a, double b) { //Checks the relationship between two numbers.
    return a<b; //int b = min score
    
};

bool isHigher (double a, double b) { //Checks the relationship between two numbers.
    return a>b; //int b = max score
};

double calcAverage(double a, int b, double c, double d) { //Calculates the average by subtracting two scores from the numerator and 2 from the denominator.
    return (a - (c + d)) / (b - 2);
};

void inputValidation(double a) { //Makes sure the scores are positive.
    while (a < 0) {
        cout << "Please enter a positive score. ";
        cin >> a;
    }
};