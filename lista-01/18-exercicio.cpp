#include <iostream>

int main(int argc, char const *argv[])
{
  float celsius = 0, fahre = 0;
  std::cout << "**********CONVERTER CELSIUS - FAHRENHEIT**********\n\n";
  std::cout << "Valor em °C: ";
  std::cin >> celsius;

  fahre = (1.8 * celsius) + 32;

  std::cout << celsius << " °C para Fahrenheit = " << fahre << " °F" << std::endl;

  return 0;
}
