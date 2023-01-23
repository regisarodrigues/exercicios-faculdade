#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float area = 0, baseMaior = 0, baseMenor = 0, altura = 0;

  std::cout << "=====CALCULO ÁREA DO TRAPEZIO===== \n\n";
  std::cout << "Valor base maior: ";
  std::cin >> baseMaior;
  std::cout << "Valor base menor: ";
  std::cin >> baseMenor;
  std::cout << "Valor altura: ";
  std::cin >> altura;

  area = ((baseMaior + baseMenor) * altura) / 2;

  std::cout << std::fixed << std::setprecision(2) << "Área do trapézio: " << area << "\n";

  return 0;
}
