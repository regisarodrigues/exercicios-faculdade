#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  double peso = 0;
  std::cout << "Peso pessoa: ";
  std::cin >> peso;

  std::cout << std::fixed << std::setprecision(2) << "O peso se engordar 15% : " << (peso * 1.15) << "\n";
  std::cout << "O peso se emagrecer 20% : " << (peso * 0.80) << "\n";

  return 0;
}
