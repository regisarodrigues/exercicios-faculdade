#include <iostream>

int main(int argc, char const *argv[])
{
  float valInvestimento = 0, valor = 0;
  int opcao = 0;

  std::cout << "Valor a ser investido R$ ";
  std::cin >> valInvestimento;
  std::cout << "\n1- Poupança.\n2- Fundo de renda fixa.\n";
  std::cout << "Escolha uma opção :";
  std::cin >> opcao;

  switch (opcao)
  {
  case 1:
    valor = valInvestimento * 1.03;
    break;
  case 2:
    valor = valInvestimento * 1.04;
    break;

  default:
    std::cout << "Opção inválida!";
    break;
  }

  std::cout << "Valor no final do mês R$ " << valor << std::endl;

  return 0;
}
