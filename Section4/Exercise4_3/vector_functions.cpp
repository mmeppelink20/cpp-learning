#include "vector_functions.hpp"

int string_occurence(vector<string> list, string str) {
    int i = 0;
    
    for(string listStr : list) {
        listStr == str ? i++ : i = i;
    }

    return i;
}