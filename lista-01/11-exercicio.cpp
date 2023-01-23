#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float area = 0, diagonalMaior = 0, diagonalMenor = 0;
  std::cout << "=====CALCULAR ÁREA LOSANGO====\n\n";
  std::cout << "Diagonal maior: ";
  std::cin >> diagonalMaior;
  std::cout << "Diagonal menor: ";
  std::cin >> diagonalMenor;

  area = (diagonalMaior * diagonalMenor) / 2;

  std::cout << std::fixed << std::setprecision(2) << "Área do losango: " << area << "\n";
  return 0;
}
