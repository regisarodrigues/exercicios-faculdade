#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float valor = 0;
  std::cout << "Valor de dinheiro viagem R$ ";
  std::cin >> valor;

  std::cout << std::fixed << std::setprecision(2) << "Valor em dólares US$ " << valor * 1.8 << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Valor em marco alemão DM$ " << valor * 2 << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Valor em libra esterlina £ " << valor * 3.57 << std::endl;
  return 0;
}
