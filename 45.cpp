#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

long reverse(long x) {
   long result = 0; 
   while (x > 0) {
        result *= 10;
        result += (x % 10);
        x /= 10;   
	}
	return result;
}

bool isPalindrome(long x) {
	vector<int> v;
	v.clear();

	while (x > 0) {
		v.push_back(x%10);
		x /= 10;
	}

	for (unsigned int i = 0; i < v.size()/2; i++) {
		if (v[i] != v[v.size()- i - 1])
			return false;
	}
	return true;
}

int main(int argc, char** argv) {

  ifstream file;
  file.open(argv[1]);
  
  while (file.good()) {
  	long num;
  	file >> num;

  	int count = 0;
  	while (!isPalindrome(num)) {
  		count++;
  		num = num + reverse(num);
  	}

  	cout << count << " " << num << "\n";
  	
  }
  return 0;
}