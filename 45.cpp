#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {

  ifstream file;
  file.open(argv[1]);
  
  while (file.good()) {
  	int num;
  	num >> file;
  	
  }

}