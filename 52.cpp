#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    
    istream file;
    file.open(argv[1]);
    
    int num;
    
    map<int, string> print;
    
    print[1] = "One";
    print[2] = "Two";
    print[3] = "Three";
    print[4] = "Four";
    print[5] = "Five";
    print[6] = "Six";
    print[7] = "Seven";
    print[8] = "Eight";
    print[9] = "Nine";
    print[10] = "Ten";
    print[11] = "Eleven";
    print[12] = "Twelve";
    print[13] = "Thirteen";
    print[14] = "Fourteen";
    print[15] = "Fifteen";
    print[16] = "Sixteen";
    print[17] = "Seventeen";
    print[18] = "Eighteen";
    print[19] = "Nineteen";
    
    print[20] = "Twenty";
    print[30] = "Thirty";
    print[40] = "Forty";
    print[50] = "Fifty";
    print[60] = "Sixty";
    print[70] = "Seventy";
    print[80] = "Eighty";
    print[90] = "Ninety";
    
    
    
    while (file.good()) {
        file >> num;
        
        if (num / 100000000 != 0) {
            cout << print[num/100000000]  << "Hundred";
        
            num %= 100000000;
        }
        
        if (num /10000000)
    }
    
    return 0;
}