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
  set<string> copy;

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

  for(unsigned int row = 0; row < source.size(); row++) {

    copy = dict;

    for(unsigned int col = 0; col < source[row].size(); col++) {
      string cur;

      for (unsigned int k = 0; k < source[row][col].size(); k++) {

        //substitute
        cur = source[row][col];

        for (int m = 0; m < 26; m++) {
          cur[k] = 'a' + m;
          set<string>::iterator it = copy.find(cur);
          if (it != copy.end()) {
            //note: doesnt check if the word can be a friend with itself?
            copy.erase(it);
            source[row].push_back(cur);
          }

        }
      }
      
      //add
      for (unsigned int k = 0; k < source[row][col].size(); k++) {

        cur = source[row][col];
        cur.insert(k, "a");

        for (int m = 0; m < 26; m++) {
          cur[k] = 'a' + m;
          set<string>::iterator it = copy.find(cur);

          if (it != copy.end()) {
            copy.erase(it);
            source[row].push_back(cur);
          }
        }      
      }

      //subtract

      for (unsigned int k = 0; k < source[row][col].size(); k++) {  
        cur = source[row][col];
        cur.erase(k, 1);

        set<string>::iterator it = copy.find(cur);

        if (it != copy.end()) {
          copy.erase(it);
          source[row].push_back(cur);
        }

      }
    }

    cout << source[row].size() - 1 << endl;
  }

  return 0;
}
