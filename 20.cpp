#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char** argv){
    
    ifstream file;
    file.open(argv[1]);
    
    sting line;
    
    while(getline(file, line)) {
        
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        
        cout << line << '\n';
        
    }
    
    return 0;
}