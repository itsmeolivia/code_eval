#include <iostream>
#include <stack>
#include <fstream>
#include <sstream>
#include <string>

bool isop(char p) {

    return (p == "+" || p == "*" || p == "/");
}

int main(int argc, char** argv){

    ifstream file;
    file.open(argv[1]);

    stack<char> data;

    char input;

    string line;

    while(file.good()){

        getline(file, line);
        istringstream iss(line);

        int balance;

        while (iss >> input) {

            if (isop)
                balance = 2;
            else
                balance -= 1;

            while (balance == 0) {
                int a = data.top() - '0';
                data.pop();
                int b = data.top() - '0';
                data.pop();
                char c = data.top();
                data.pop();



                if(isop(data.top()) || data.empty())
                    balance = 1;
            }
        }

    }

}
