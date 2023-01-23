#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char const *argv[])
{
  double PI = M_PI, grausParaRadianos = 0, valDistancia = 0, valAngulo = 0, medidaEscada = 0;

  std::cout << "Distância: ";
  std::cin >> valDistancia;
  std::cout << "Ângulo: ";
  std::cin >> valAngulo;

  grausParaRadianos = cos((valAngulo * PI) / 180);
  medidaEscada = valDistancia / grausParaRadianos;

  std::cout << std::fixed << std::setprecision(2) << "Comprimento: " << medidaEscada << std::endl;
  return 0;
}
