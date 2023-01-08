#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float salario = 0, valAlmento = 0, salNovo = 0;

  std::cout << "Valor do salario atual R$ ";
  std::cin >> salario;

  if (salario <= 300)
  {
    valAlmento = salario * 0.15;
    salNovo = salario + valAlmento;
  }
  else if (salario > 300 && salario < 600)
  {
    valAlmento = salario * 0.10;
    salNovo = salario + valAlmento;
  }
  else if (salario >= 600 && salario <= 900)
  {
    valAlmento = salario * 0.05;
    salNovo = salario + valAlmento;
  }
  else
  {
    salNovo = salario + valAlmento;
  }

  std::cout << std::fixed << std::setprecision(2) << "Valor do aumento R$ " << valAlmento << "\nSalario com novo aumento R$ " << salNovo << std::endl;

  return 0;
}