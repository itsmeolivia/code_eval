#include <fstream>
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    
    ifstream file;
    file.open(argv[1]);
    
    int value;
    bool first = true;
    
    while (file.good()) {
        
        file >> value;
        
        if (value >= 0) {
            //cout << "value is : " << value << endl;
            bitset<20> bits(value);
            string str = bits.to_string<char,std::string::traits_type,std::string::allocator_type>();
            if (value != 0)
                str.erase(0, str.find_first_not_of('0'));
            else 
                str = "0";
                
            if(!first)
                cout << '\n';
            else {
                first = false;
            }
            cout << str;
        }
        
    }
    
    
    return 0;
}