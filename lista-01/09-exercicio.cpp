#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float area = 0, baseMaior = 0, baseMenor = 0, altura = 0;

  std::cout << "=====CALCULO AREA DO TRAPEZIO===== \n\n";
  std::cout << "Valor da base maior: ";
  std::cin >> baseMaior;
  std::cout << "Valor da base menor: ";
  std::cin >> baseMenor;
  std::cout << "Valor da altura: ";
  std::cin >> altura;

  area = ((baseMaior + baseMenor) * altura) / 2;

  std::cout << std::fixed << std::setprecision(2) << "Area do trapezio e: " << area << "\n";

  return 0;
}
