#include <iostream>

int main(int argc, char const *argv[])
{
  float valMinimo = 0, valSalReceb = 0, qtdSal = 0;

  std::cout << "Valor do salario minimo R$ ";
  std::cin >> valMinimo;
  std::cout << "Valor do salario recebido R$ ";
  std::cin >> valSalReceb;

  qtdSal = valSalReceb / valMinimo;

  std::cout << "Voce recebe " << qtdSal << " salarios." << std::endl;
  return 0;
}
