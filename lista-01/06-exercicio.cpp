#include <iostream>

int main(int argc, char const *argv[])
{
  double sal = 0, valVendas = 0, salFinal = 0;
  std::cout << "Valor do salario do funcionario R$ ";
  std::cin >> sal;
  std::cout << "Valor total das vendas R$ ";
  std::cin >> valVendas;
  salFinal = sal + (valVendas * 0.04);
  std::cout << "Valor final do salario mais a comissao R$ " << salFinal << "\n";
  return 0;
}
