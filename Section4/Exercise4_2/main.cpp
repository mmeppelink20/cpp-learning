#include "vector_functions.hpp"

int main() {
    vector<int> listA = {1, 2, 3, 4, 5};
    vector<int> listB = {5, 6, 7, 8, 9};
    transfer_vector_elements(listA, listB);
    print_vector(listB);
}