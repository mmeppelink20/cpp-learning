#include "vector_functions.hpp"

void add_zero_to_list(vector<int> &nums, int zeros_number) {
    for (int i = 0; i < zeros_number; i++) {
        nums.push_back(0);
    }
    cout << "B. Size of number list: " << nums.size() << endl;
}

void printVector(const vector<int> &list) {
    for (int num : list) {
        cout << num << endl;
    }
}
