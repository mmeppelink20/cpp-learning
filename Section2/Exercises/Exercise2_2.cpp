#include <iostream>
using namespace std;

int addTwoInts(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;
    cout << "Please enter two integers to be added together\nNum 1: ";
    cin >> num1;
    cout << "Num 2: ";
    cin >> num2;
    cout << addTwoInts(num1, num2);
}