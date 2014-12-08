#include <stack>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
    
    ifstream file;
    file.open(argv[1]);
    
    string line;
    char a;
    int b;
    
    stack<char> list;
    
    while(getline(file, line)){
        istringstream iss(line);
        
        while (!list.empty()) list.pop();
        
        while (iss >> a) list.push(a);
        
        b = 0;
        
        int j = 1;
        while((list.top() - '0') <= 9 ){ 
        
            b += (list.top() - '0') * j;
            j *= 10;
            list.pop();
            
        }
        

        
        if (b <= list.size()){
            for(int i = 1; i < b; i++)
                list.pop();
            cout << list.top() << '\n';
        }
    }
    return 0;
}