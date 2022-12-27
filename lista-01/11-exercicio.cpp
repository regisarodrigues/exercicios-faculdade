#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float area = 0, diagonalMaior = 0, diagonalMenor = 0;
  std::cout << "=====CALCULAR AREA LOSANGO====\n\n";
  std::cout << "Valor diagonal maior: ";
  std::cin >> diagonalMaior;
  std::cout << "Valor diagonal menor: ";
  std::cin >> diagonalMenor;

  area = (diagonalMaior * diagonalMenor) / 2;

  std::cout << std::fixed << std::setprecision(2) << "A area do losango e: " << area << "\n";
  return 0;
}
