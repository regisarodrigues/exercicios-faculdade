#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float valSalario = 0, numHoraExtra = 0, horasTrabalhadas = 0, salReceber = 0, valHora = 0, valHoraExtra = 0, valSalBruto = 0, valReceberHExtra = 0;

  std::cout << "Informe o valor do salario minimo R$ ";
  std::cin >> valSalario;
  std::cout << "Informe o numero de horas trabalhadas: ";
  std::cin >> horasTrabalhadas;
  std::cout << "Informe o numero de horas extras trabalhadas: ";
  std::cin >> numHoraExtra;

  valHoraExtra = valSalario / 4;
  valHora = valSalario / 8;
  valSalBruto = valHora * horasTrabalhadas;
  valReceberHExtra = numHoraExtra * valHoraExtra;
  salReceber = valSalBruto + valReceberHExtra;

  std::cout << std::fixed << std::setprecision(2) << "Valor da hora trabalhada R$ " << valHora << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Valor da hora hora extra R$ " << valHoraExtra << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Salario bruto R$ " << valSalBruto << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Valor hora extra a receber R$ " << valReceberHExtra << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Salario a receber R$ " << salReceber << std::endl;

  return 0;
}
