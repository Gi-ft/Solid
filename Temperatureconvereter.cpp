#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;

    // Get input from user
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert and display result
    float celsius = toCelsius(fahrenheit);
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;

    return 0;
}
