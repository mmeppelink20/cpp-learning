#include<iostream>
#include<vector>
#include<float.h>

using namespace std;

double findHighestNum(vector<double> nums) {
    double highestNum = -DBL_MAX;

    for(double num : nums){
        highestNum = highestNum <= num ? num : highestNum;
    }

    return highestNum;
}

int main() {
    vector<double> nums = {12.0, 343.21, 3.0, -2};
    vector<double> nums1 = {-2, -3, -4, -5, -6};
    cout << findHighestNum(nums) << "\n";
    cout << findHighestNum(nums1);
    return 0;
}