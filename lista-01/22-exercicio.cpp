#include <iostream>

int main(int argc, char const *argv[])
{
  int numLados = 0, numDiagonais = 0;
  std::cout << "Número lados polígono: ";
  std::cin >> numLados;

  numDiagonais = numLados * ((float)(numLados - 3) / 2);

  std::cout << "Número diagonais polígono: " << numDiagonais << std::endl;

  return 0;
}
