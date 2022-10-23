#include "../src/iloraz.hpp"
#include <vector>
#include <iomanip>
#include <iostream>

int main() {
  // TODO: test code goes here

   std::vector<std::pair<int, int>> tests = {
    std::make_pair(0, 1), 
    std::make_pair(0, 2), 
    std::make_pair(4, 5)};
  for (auto test : tests) {
    if (iloraz(test.first) !=test.second) {
      std::cerr << "FAIL: iloraz (" << test.first<<") is not" << test.second<<std::endl;
    
      return 1;
    }
   
  std::cout << "OK" << std::endl;
  return 0;

}
