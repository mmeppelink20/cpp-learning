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
    cout << "Enter numbers to find the highest one, enter 0 to stop.\n";
    vector<double> userNums;

    double userNum = 0;
    int listSize = 0;

    while(true) {
        int i;
        cout << "Num " << i + 1 << ": ";
        cin >> userNum;

        if(userNum ==  0) {
            break;
        }

        userNums.push_back(userNum);
        i++;
    }

    cout << "The highest number you entered is: " << findHighestNum(userNums);

}