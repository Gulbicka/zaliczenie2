#include "../src/iloraz.hpp"
#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  // TODO: test code goes here

   vector<pair<int, int>> tests = {
    make_pair(0, 1), 
    make_pair(0, 2), 
    make_pair(4, 5)};
  for (auto test : tests) {
    if (iloraz(test.first) ==test.second) {
      cerr << "FAIL: iloraz (" << test.first<<") is not" << test.second<<endl;
    
      return 1;
    }
   
  cout << "OK" << endl;
  return 0;
  }
  }

