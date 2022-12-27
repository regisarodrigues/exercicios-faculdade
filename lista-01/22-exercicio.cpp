#include <iostream>

int main(int argc, char const *argv[])
{
  int numLados = 0, numDiagonais = 0;
  std::cout << "Infome o numero de lados de um poligono: ";
  std::cin >> numLados;

  numDiagonais = numLados * ((float)(numLados - 3) / 2);

  std::cout << "Numero de diagonais do poligono: " << numDiagonais << std::endl;

  return 0;
}
