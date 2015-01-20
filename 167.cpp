#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {

    ifstream file;
    file.open(argv[1]);
    
    string line;
    char num;

    while (file.good()) {
        getline(file, line);
        if (line.length() < 56) 
            cout << line << endl;
        else {
            line = line.resize(40);
            size_t last = line.find_last_not_of(' ');
            line = line.substr(0, last+1);
            cout << line << "... <Read More>" << endl;
            
            
        }
    }
    return 0;
}