#include <iostream>

int main(int argc, char const *argv[])
{
  float salario = 0, novoSalario = 0;

  std::cout << "Salário funcionário R$ ";
  std::cin >> salario;

  if (salario <= 300)
  {
    novoSalario = salario * 1.5;
  }
  else if (salario > 300 && salario <= 500)
  {
    novoSalario = salario * 1.4;
  }
  else if (salario > 500 && salario <= 700)
  {
    novoSalario = salario * 1.3;
  }
  else if (salario > 700 && salario <= 800)
  {
    novoSalario = salario * 1.2;
  }
  else if (salario > 800 && salario <= 1000)
  {
    novoSalario = salario * 1.1;
  }
  else
  {
    novoSalario = salario * 1.05;
  }

  std::cout << "Valor novo salário R$ " << novoSalario << std::endl;

  return 0;
}
