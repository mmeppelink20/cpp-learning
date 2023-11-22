#include <iostream>
using namespace std;

int celsiusToFahrenheit(double temp){
    return (temp * 1.8) + 32; 
}

int main() {
    double temp;
    cout << "Enter a temperature in Celsius to be converted to Fahrenheit: ";
    cin >> temp;

    cout << temp << "C is equal to " << celsiusToFahrenheit(temp) << "F.";
}