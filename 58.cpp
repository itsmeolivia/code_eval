#include <iostream>
#include <fstream>
#include <string>
#include <set>

using namespace std;

int main(int argc, char** argv) {

  ifstream file;
  file.open(argv[1]);


  string line;
  vector<vector <string> > source;
  set<string> dict;

  bool split = false;
  count i = 0;

  while(getline(file, line)) {

    if (line.compare("END OF INPUT") == 0) {
      split = true;
    }

    if (split) {
      dict.push(line);
    }

    else {
      source.push_back(vector <string>);
      sorce[i].push_back(line);
      i++;
    }
  }

  for (int j = 0; j < i; j++) {


  }



  return 0;
}
