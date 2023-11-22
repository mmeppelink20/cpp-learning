#include <iostream>
#include <vector>
#include <float.h>

using namespace std;

double findHighestNum(vector<double> nums) {
    double highestNum = -DBL_MAX;

    for(double num : nums){
        highestNum = highestNum <= num ? num : highestNum;
    }

    return highestNum;
}

int main() {
    cout << "Please enter 5 numbers.\n";
    vector<double> userNums;

    double userNum = 0;
    int listSize = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Num " << i + 1 << ": ";
        cin >> userNum;
        userNums.push_back(userNum);
    }

    cout << "The highest number you entered is: " << findHighestNum(userNums);

}