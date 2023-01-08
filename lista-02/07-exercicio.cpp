#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float salario = 0, salNovo = 0;

  std::cout << "Valor do salario atual R$ ";
  std::cin >> salario;

  if (salario > 1300)
  {
    std::cout << "Salario acima de R$1300.00, nao tem direito ao almento de 30%!" << std::endl;
  }
  else
  {
    salNovo = salario * 1.3;
    std::cout << std::fixed << std::setprecision(2) << "Salario com novo aumento R$ " << salNovo << std::endl;
  }

  return 0;
}
