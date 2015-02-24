#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    ifstream file;
    file.open(argv[1]);
    
    long step;
    vector<long> staircase;
    
    staircase.push_back(0);
    staircase.push_back(1);
    staircase.push_back(2);
    
    while (file >> step) {
        
        while(staircase.size() <= step) {
            int length = staircase.size();
            staircase.push_back(staircase[length - 1] + staircase[length - 2]);
            
        }
        
        cout << staircase[step] << '\n';
        
    }
    return 0;
}