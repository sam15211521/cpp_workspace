#include <iostream>

int main() {

  //here are the individual curancies
  double pesos;
  double reais;
  double soles;
  double dollars;
  
  std::cout << "Enter the nubmer of Colombian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter the nubmer of Reais: \n";
  std::cin >> reais;
  std::cout << "Enter the nubmer of Soles: \n";
  std::cin >> soles;

  // 19.9 pesos =1 usd
  // 5.15 reais = 1 usd
  // 3.98 soles = 1 usd

  dollars =  pesos / 19.9 + reais / 19.9 + soles / 3.98;

  std::cout << "Us dolars = $" << dollars <<"\n";
  return 0;
}
