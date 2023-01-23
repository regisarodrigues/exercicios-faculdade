#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float altura = 0, pesoIdesal = 0;
  char sexo;

  std::cout << "Digite a altura: ";
  std::cin >> altura;
  std::cout << "Digite (M)asculino ou (F)eminino: ";
  std::cin >> sexo;

  switch (toupper(sexo))
  {
  case 'M':
    pesoIdesal = (72.7 * altura) - 58;
    break;
  case 'F':
    pesoIdesal = (62.1 * altura) - 44.7;
    break;
  default:
    std::cout << "Dados inválidos!";
    break;
  }

  std::cout << std::fixed << std::setprecision(2) << "Peso ideal: " << pesoIdesal << std::endl;

  return 0;
}
