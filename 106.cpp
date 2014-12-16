#include <fstream>
#include <iostream>


using namespace std;

int main(int argc, char** argv){
    
    ifstream file;
    file.open(argv[1]);
    
    int value;

    while(file.good()) {
        file >> value;
        
        while (value / 1000 > 0) {
            cout << "M";
            value -= 1000;
        }
        
        if (value/900 > 0) {
            cout << "CM";
            value -= 900;
        }
        
        if (value / 500 >  0) {
            cout << "D";
            value -= 500;
        }
        
        if (value /400 > 0) {
            cout << "CD";
            value -= 400;
        }
        
        while (value / 100 > 0) {
            cout << "C";
            value -= 100;
            
        }
        
        if (value / 90 > 0) {
            cout << "XC";
            value -= 90;
            
        }
        
        if (value / 50 > 0 ) {
            cout << "L";
            value -= 50;
            
        }
        
        if (value / 40 > 0) {
            cout << "XL";
            value -=40;
            
        }
        
        while (value / 10 > 0) {
            cout << "X";
            value -= 10;
            
        }
        
        if (value / 9 > 0) {
            cout << "IX";
            value -= 9;
        }
        
        if (value / 5 > 0) {
            cout << "V";
            value -= 5;
            
        }
        
        if (value /4 > 0) {
            cout << "IV";
            value -= 4;
        }
        
        while (value > 0) {
            cout << "I";
            value--;
        }
        cout << '\n';
    }
    
    return 0;
}