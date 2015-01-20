#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string trim(string& str) {
    size_t last = str.find_last_of(' ');
    return str.substr(0, (last));
}

int main(int argc, char** argv) {

    ifstream file;
    file.open(argv[1]);
    
    string line;

    while (file.good()) {
        getline(file, line);
        if (line.length() < 56) 
            cout << line << endl;
        else {
            line.resize(40);
            cout << trim(line) << "... <Read More>" << endl;   
        }
    }
    return 0;
}