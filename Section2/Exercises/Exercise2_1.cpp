#include <iostream>
using namespace std;

void userInfo(string name, int age){
    cout << "Name: " << name << "\nAge: " << age;
}

int main() {
    string name;
    int age;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your age: ";
    cin >> age;

    userInfo(name, age);

    return 0;
}