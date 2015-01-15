#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
    
    ifstream file;
    file.open(argv[1]);
    
    string line;
    int num;
    vector<int> array;
    
    while(file.good()){
        getline(file, line);
        if (line.size() == 0)
            continue;
        cout << line << endl;
        
        replace(line.begin(), line.end(), ',', ' ');
        istringstream iss(line);
        array.clear();
        
        int total;
        int large = -1000;
        
        while (iss >> num)
            array.push_back(num);
        
        for(unsigned int i = 0; i < array.size(); i++) {
            total = 0;
            for (unsigned int j = i; j < array.size(); j++) {
                total += array[j];
                if (total > large)
                    large = total;
            }
        }
        cout << large << "\n";
        
    }
    
    return 0;
}