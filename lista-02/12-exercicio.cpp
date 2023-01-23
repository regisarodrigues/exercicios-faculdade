#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float salario = 0, salNovo = 0;

  std::cout << "Salário bruto R$ ";
  std::cin >> salario;

  if (salario <= 350)
  {
    salNovo = (salario + 100) * 0.93;
  }
  else if (salario > 350 && salario < 600)
  {
    salNovo = (salario + 75) * 0.93;
  }
  else if (salario >= 600 && salario <= 900)
  {
    salNovo = (salario + 50) * 0.93;
  }
  else
  {
    salNovo = (salario + 35) * 0.93;
  }

  std::cout << std::fixed << std::setprecision(2) << "Salário líquido R$ " << salNovo << std::endl;

  return 0;
}
