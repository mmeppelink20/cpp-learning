#include <iostream>
using namespace std;
// 1.2 Ask the user for 2 integer unmbers, add them, and print the info.
int main() {
    int userNum1;
    int userNum2;

    cout << "Please enter two numbers to be added.\nNumber 1: ";
    cin >> userNum1;
    cout << "Number 2: ";
    cin >> userNum2;
    cout << userNum1 << " + " << userNum2 << " = " << userNum1 + userNum2;
    
    return 0;
}