#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<float> vec = { 5, 4, 6, 2 };

    int avg = 0;

    for(int i = 0; i < vec.size(); i++) {
        avg += vec.at(i);
    }
    
    avg /= vec.size();
    
    cout << "The average of this list is: " << avg;

    return 0;
}
