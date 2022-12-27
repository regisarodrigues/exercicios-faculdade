#include <iostream>

int main(int argc, char const *argv[])
{
  int angulo = 0, angulo2 = 0, angulo3 = 0;
  std::cout << "Infome o valor do primeiro angulo: ";
  std::cin >> angulo;
  std::cout << "Infome o valor do segundo angulo: ";
  std::cin >> angulo2;

  angulo3 = 180 - angulo - angulo2;

  std::cout << "Valor do terceiro angulo: " << angulo3 << "°" << std::endl;

  return 0;
}
