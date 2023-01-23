#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float salario = 0, salNovo = 0;

  std::cout << "Valor salário mínimo R$ ";
  std::cin >> salario;

  if (salario <= 1300)
  {
    salNovo = salario * 1.35;
  }
  else
  {
    salNovo = salario * 1.15;
  }

  std::cout << std::fixed << std::setprecision(2) << "Salário com novo aumento R$ " << salNovo << std::endl;

  return 0;
}
