#include "vector_functions.hpp"

int main() {
    vector<string> strList = {"hello", "hello", "yo", "yo", "hello", "yo", "blah", "hello"};
    string userString = "";
    cout << "Please select a string: ";
    cin >> userString;
    cout << "The string: \"" << userString << "\" occurs "  << string_occurence(strList, userString) << " times";
    
}