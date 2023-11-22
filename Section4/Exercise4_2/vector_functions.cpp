#include "vector_functions.hpp"

void transfer_vector_elements(vector<int> listA, vector<int> &listB) {
    for(int i : listA) {
        listB.push_back(i);
    }
}

void print_vector(vector<int> list) {
    for(int i : list) {
        cout << i << ", ";
    }
}