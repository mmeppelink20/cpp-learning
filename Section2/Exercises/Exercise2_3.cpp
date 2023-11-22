#include <iostream>
#include <vector>

using namespace std;

double tempAverage(vector<double> temperatures) {
    double tempAvg;

    for (double num : temperatures){
        tempAvg += num;
    }

    return tempAvg / temperatures.size();
}

int main() {
    vector<double> temperatures = { 34.5, 27.8, 26.8, 22.1 };

    cout << tempAverage(temperatures);
}