#include <iostream>

#include "iloraz.hpp"

int main(int argc, char* argv[]) {

  std::cout<<argv[0]<<std::endl;
  if (argc<2){
std::cout<<"nie podano liczby"<<std::endl;

  }
  else {
    std::cout<<"iloraz tej loczy przez trzy wynosi"<<iloraz(std::stof(argv[1]))<<std::endl;
  }
  // TODO: main program function
}
