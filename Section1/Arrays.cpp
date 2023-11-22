#include <iostream>
#include <vector>

using namespace std;


int main () {

    double temperature_list[4] = { 34.5, 27.8, 26.8, 22.1 };

    for(int i = 0; i < 4; i++) {
       cout << temperature_list[i] << std::endl; 
    }
    
    cout << "\nVector:\n";

    vector<double> temperatures = { 34.5, 27.8, 26.8, 22.1 };

    temperatures.at(3) = 50.50;
    temperatures.push_back(20);
    temperatures.push_back(5);
    


    for(int i = 0; i < temperatures.size(); i++) {
        std::cout << temperatures.at(i) << "\n";
    }
    cout << temperatures.at(3) << "\nVector size: " << temperatures.size() << std::endl;

    return 0;
}