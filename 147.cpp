#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    ifstream file;
    file.open(argv[1]);
    
    string line;
    int up;
    int low;
    
    
    while(file.good()) {
        getline(file, line);
        up = low = 0;
        for(string::size_type i = 0; i < line.size(); ++i) {
            if (isupper(line[i]))
                up++;
            else low++;
        }
        double total = up + low;
        cout.precision(2);
        cout << "lowercase: " << fixed <<  low/total * 100 << " uppercase: " << fixed << up/total * 100 << "\n";
        
    }
    
    return 0;    
}