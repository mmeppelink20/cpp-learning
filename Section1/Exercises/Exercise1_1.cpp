#include <iostream>
using namespace std;
// 1.1 Ask for the name and age of a user, and print the info
int main() {
    string name;
    int age;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Now please enter your age: ";
    cin >> age;

    cout << "Hello, " << name << ". You are " << age << " years old!\n";

    return 0;
}