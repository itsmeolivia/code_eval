#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    ifstream file;
    file.open(argv[1]);
    
    int step;
    vector<int> staircase;
    
    staircase[0] = 0;
    staircase[1] = 1;
    staircase[2] = 2;
    while (cin >> step) {
        
        while(step <= staircase.size()) {
            int length = staircase.size();
            staircase.push_back(staircase[length - 1] + staircase[length - 2]);
            
        }
        
        cout << staircase[step] << '\n';
        
    }
    return 0;
}