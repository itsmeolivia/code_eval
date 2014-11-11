#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char** argv) {

    ifstream file;
    file.open(argv[1]);

    map<char, int> m;

    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    string line;

    int arabic, prev_a, prev_r;
    char roman;

    while(file.good()){
        getline(file, line);

        if(line.empty())
            continue;

        //cout << "line : " << line << "\n";
        bool first_pair = true;
        int total = 0;

        for (unsigned int i = 0; i < line.size(); i+= 2) {

            arabic = line[i] - '0';
            roman = line[i+1];

            if(first_pair){
                prev_a = arabic;
                prev_r = m[roman];
                first_pair = false;
            }
            else {
                if (prev_r < m[roman]){
                    total -= prev_a * prev_r;
                }
                else
                    total += prev_a * prev_r;

                prev_a = arabic;
                prev_r = m[roman];
            }
        }

        total += prev_a * prev_r;
        cout << total << "\n";
    }
    return 0;
}
