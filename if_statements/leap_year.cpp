#include <iostream>

int main() {
  
  int year;
  std::cout<<"What year will you enter? \n";
  std::cin >> year;
  
  if (!(999 < year <10000)) {
    std::cout<<"Invalad Entry";
  }
  
}
