#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float custoAuto = 0, valorConsumidor = 0;

  std::cout << "Valor custo, fabricação automóvel R$ ";
  std::cin >> custoAuto;

  if (custoAuto <= 12000)
  {
    valorConsumidor = custoAuto * 1.05;
  }
  else if (custoAuto > 12000 && custoAuto <= 25000)
  {
    valorConsumidor = custoAuto + (custoAuto * 0.10) + (custoAuto * 0.15);
  }
  else
  {
    valorConsumidor = custoAuto + (custoAuto * 0.15) + (custoAuto * 0.20);
  }

  std::cout << std::fixed << std::setprecision(2) << "Valor final automóvel R$ " << valorConsumidor << std::endl;

  return 0;
}
