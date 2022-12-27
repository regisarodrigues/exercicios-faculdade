#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float area = 0, lado1 = 0, lado2 = 0;
  std::cout << ";;;;;;CALCULAR AREA QUADRADO;;;;;\n\n";
  std::cout << "Informe primeiro lado: ";
  std::cin >> lado1;
  std::cout << "Informe segundo lado: ";
  std::cin >> lado2;

  area = lado1 * lado2;

  std::cout << std::fixed << std::setprecision(2) << "A area do quadrado e: " << area << "\n";

  return 0;
}
