#include <iostream>
using namespace std;

namespace abc {
    int triple_number(int number) {
        return number * 3;
    } 

};

void say_hello(std::string user_name) {
    cout << "hello, " << user_name;
}



int main() {
    string user_name;
    cout << "Please enter your name: ";
    cin >> user_name;
    say_hello(user_name);
    int num = 0;
    cout << "\nEnter a number to be tripled: ";
    cin >> num;
    cout << abc::triple_number(num);
    return 0;
}