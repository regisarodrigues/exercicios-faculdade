#include <iostream>
#include <iomanip>
// using std::fixed;
// using std::setprecision;

int main(int argc, char const *argv[])
{
  double peso = 0;
  std::cout << "Digite o peso de uma pessoa: ";
  std::cin >> peso;

  std::cout << std::fixed << std::setprecision(2) << "O novo peso se engordar 15% : " << (peso * 1.15) << "\n";
  std::cout << "O novo peso se emagrecer 20% : " << (peso * 0.80) << "\n";

  return 0;
}
