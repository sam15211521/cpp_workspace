#include <iostream>
#include <cmath>

int main() {
  // ax2 + bx + c = 0 is the formula
  // a b and c are the variables to look for
  double a;
  double b;
  double c;
// entering data into the variables 
  std::cout << "enter a: \n";
  std::cin >> a;


  std::cout << "enter b: \n";
  std::cin >> b;
      
  std::cout << "enter c: \n";
  std::cin >> c;

  double root1;
  double root2;

  // Only works with real numbers. 
  root1 = (-1 * b + std::sqrt(b*b - 4 * a* c))/(2 * a);
  root2 = (-1 * b - std::sqrt(b*b - 4 * a* c))/(2 * a); 

  std::cout << "Root 1 is " << root1 << "\n";
  
  std::cout << "Root 2 is " << root2 << "\n";


}


