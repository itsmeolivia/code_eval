#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main(int argc, char** argv) {

  ifstream file;
  file.open(argv[1]);


  string line;
  vector<vector <string> > source;
  set<string> dict;

  bool split = false;
  int i = 0;

  while(getline(file, line)) {

    if (line.compare("END OF INPUT") == 0) {
      split = true;
    }

    if (split) {
      dict.insert(line);
    }

    else {
      source.push_back(vector<string>());
      source[i].push_back(line);
      i++;
    }
  }

  for(int row = 0; row < i; row++) {

    for(int col = 0; col < source[row].size(); col++) {

      
    }

    //substitute


    //add

    //subtract


    cout << source[row].size() - 1 << endl;
  }





  return 0;
}
