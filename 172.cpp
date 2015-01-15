#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {

  ifstream file;
  file.open(argv[1]);

  string line;
  vector<int> array;
  char num;

  while (file.good()) {
    getline(file, line);
    replace(line.begin(), line.end(), ' ', '\0');
    istringstream iss(line);

    array.clear();
    while (iss >> num)
      num -= '0';
      array.push_back(num);

      int total = 0;
      unsigned int check = 0;
      if (array.size() % 2 == 0)
        check = 1;
        for (unsigned int i = 0; i < array.size(); i++) {
          if (i % 2 == check) {
            array[i] *= 2;
            if (array[i] > 9) {
              array[i] = 1 + array[i] % 10;
            }
          }

          total += array[i];
        }

        if (total % 10 == 0)
          cout << "1\n";
          else
            cout << "0\n";
          }
          return 0;
        }
