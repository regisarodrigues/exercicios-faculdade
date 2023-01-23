#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
  float num = 0, num2 = 0;
  char opcao;

  std::cout << "Primero número: ";
  std::cin >> num;
  std::cout << "Segundo número: ";
  std::cin >> num2;

  std::cout << "\na- primeiro número elevado pelo segundo\nb- raiz quadrada de cada número\nc- raiz cubica de cada número\n\n";
  std::cout << "Sua escolha: ";
  std::cin >> opcao;

  if (tolower(opcao) == 'a')
  {
    float resultado = 0;
    resultado = pow(num, num2);
    std::cout << num << " elevado a " << num2 << " = " << resultado << std::endl;
  }
  else if (tolower(opcao) == 'b')
  {
    std::cout << "A raiz de " << num << " = " << sqrt(num) << std::endl;
    std::cout << "A raiz de " << num2 << " = " << sqrt(num2) << std::endl;
  }
  else if (tolower(opcao) == 'c')
  {

    std::cout << "A raiz cubica " << num << " = " << cbrt(num) << std::endl;
    std::cout << "A raiz cubica " << num2 << " = " << cbrt(num2) << std::endl;
  }
  else
  {
    std::cout << "Opção inválida!" << std::endl;
  }

  return 0;
}
