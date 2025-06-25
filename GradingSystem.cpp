#include <iostream>
using namespace std;

// Function to return grade based on score
char getGrade(int score) {
    if (score >= 80 && score <= 100)
        return 'A';
    else if (score >= 60 && score <= 79)
        return 'B';
    else if (score >= 40 && score <= 59)
        return 'C';
    else
        return 'F';
}

int main() {
    int score;

    // Get user input
    cout << "Enter the student's score: ";
    cin >> score;

    // Basic input validation
    if (score < 0 || score > 100) {
        cout << "Invalid score! Please enter a number between 0 and 100." << endl;
        return 1;
    }

    // Get and display grade
    char grade = getGrade(score);
    cout << "The grade is: " << grade << endl;

    return 0;
}
