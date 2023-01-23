#include <iostream>

int main(int argc, char const *argv[])
{
  int angulo = 0, angulo2 = 0, angulo3 = 0;
  std::cout << "******** CALCULAR VALOR TERCEIRO ÂNGULO ********\n";
  std::cout << "Primeiro ângulo: ";
  std::cin >> angulo;
  std::cout << "Segundo ângulo: ";
  std::cin >> angulo2;

  angulo3 = 180 - angulo - angulo2;

  std::cout << "Terceiro ângulo: " << angulo3 << "°" << std::endl;

  return 0;
}
