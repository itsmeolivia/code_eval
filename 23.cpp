#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int col = 1; col < 13; col++) {
        for (int row = 1; row < 13; row++) {
            cout << setw(4) << row * col;
        }
        cout << endl;
    }
}