#include <set>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;


int main(int argc, char** argv) {
    ifstream file;
    file.open(argv[1]);
    
    set<int> array;
    string line;
    
    bool first = true;
    
    while(file.good()) {
        
        getline(file, line);
        string remain = line.substr(line.find(';')+1);
        replace(remain.begin(), remain.end(), ',', ' ');
        
        istringstream ss(remain);
        int num;
        array.clear();
        
        while(ss >> num) {
            if(array.find(num) != array.end()){
                if (first)
                    first = false;
                else
                    cout << '\n';
                cout << num;
            }
            
            else {
                array.insert(num);
            }
        }
    }
    return 0;
}