#include "vector_functions.hpp"

int main(){
    vector<int> list = { 5, 5, 4 };
    cout << "A. Size of number list: " << list.size() << endl;
    add_zero_to_list(list, 4);

    cout << "C. Size of number list: " << list.size() << endl;

    return 0;
}