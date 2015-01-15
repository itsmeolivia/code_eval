#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char** argv){
    
    
    ifstream file;
    file.open(argv[1]);
    
    string line, s1, s2, s2a, s2b;
    
    bool found = false;
    
    while(file.good()) {
        getline(file, s1, ',');
        getline(file, s2);
        
        if(s2.size() != s1.size())
            cout << "False\n";
        else {
            for (unsigned int i = 0; i < s2.size(); i++) {
                if (s1[0] == s2[i]) {
                    found = true;
                    s2a = s2.substr(0, i);
                    s2b = s2.substr(i);
                    
                    if (s1 == (s2b + s2a))
                        cout << "True\n";
                    else
                        cout << "False\n";
                    break;
                }
            }
            if (!found) {
                cout << "False\n";
            }
        }
    }
    
    return 0;
}