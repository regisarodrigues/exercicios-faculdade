#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
  double PI = M_PI;
  double raio = 0, comprimento = 0, area = 0, volume = 0;
  std::cout << "******CALCULO COMPRIMENTO, AREA, VOLUME, DE UMA ESFERA******\n\n";
  std::cout << "Valor do raio: ";
  std::cin >> raio;

  comprimento = 2 * PI * raio;
  area = PI * pow(raio, 2);
  volume = ((float)3 / 4) * PI * pow(raio, 3); // usar float fazer divisao real

  std::cout << std::fixed << std::setprecision(2) << "Comprimento: " << comprimento << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Área: " << area << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Volume: " << volume << std::endl;

  return 0;
}
