#include <iostream>

int main(int argc, char const *argv[])
{
  float valMinimo = 0, valSalReceb = 0, qtdSal = 0;

  std::cout << "Valor salário minimo R$ ";
  std::cin >> valMinimo;
  std::cout << "Valor salário recebido R$ ";
  std::cin >> valSalReceb;

  qtdSal = valSalReceb / valMinimo;

  std::cout << "Você recebe " << qtdSal << " salário(s)." << std::endl;
  return 0;
}
