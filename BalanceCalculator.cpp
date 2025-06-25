#include <iostream>
using namespace std;

// Function to compute final balance
double computeBalance(double deposit, double withdrawal) {
    return deposit - withdrawal;
}

int main() {
    double deposit, withdrawal;

    // User input
    cout << "Enter deposit amount: KES ";
    cin >> deposit;
    cout << "Enter withdrawal amount:  KES ";

    cin >> withdrawal;

    // Calculate balance
    double balance = computeBalance(deposit, withdrawal);

    // Display result
    cout << "Final balance is: KES " << balance << endl;

    return 0;
}
