#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float valSalario = 0, numHoraExtra = 0, horasTrabalhadas = 0, salReceber = 0, valHora = 0, valHoraExtra = 0, valSalBruto = 0, valReceberHExtra = 0;

  std::cout << "Valor salário mínimo R$ ";
  std::cin >> valSalario;
  std::cout << "Número de horas trabalhadas: ";
  std::cin >> horasTrabalhadas;
  std::cout << "Número de horas extras trabalhadas: ";
  std::cin >> numHoraExtra;

  valHoraExtra = valSalario / 4;
  valHora = valSalario / 8;
  valSalBruto = valHora * horasTrabalhadas;
  valReceberHExtra = numHoraExtra * valHoraExtra;
  salReceber = valSalBruto + valReceberHExtra;

  std::cout << std::fixed << std::setprecision(2) << "Valor hora trabalhada R$ " << valHora << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Valor hora extra R$ " << valHoraExtra << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Salário bruto R$ " << valSalBruto << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Valor hora extra a receber R$ " << valReceberHExtra << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Salário a receber R$ " << salReceber << std::endl;

  return 0;
}
