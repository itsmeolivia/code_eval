#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
    
    int n;
    
    ifstream file;
    file.open(argv[1]);
    
    while (file.good()) {
        
        file >> std::hex >> n;
        cout << std::dec << n << '\n';
    }
    
    return 0;
}