#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float area = 0, lado1 = 0, lado2 = 0;
  std::cout << ";;;;;;CALCULAR ÁREA QUADRADO;;;;;\n\n";
  std::cout << "Primeiro lado: ";
  std::cin >> lado1;
  std::cout << "Segundo lado: ";
  std::cin >> lado2;

  area = lado1 * lado2;

  std::cout << std::fixed << std::setprecision(2) << "Área do quadrado: " << area << "\n";

  return 0;
}
