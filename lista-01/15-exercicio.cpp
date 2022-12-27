#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float valSal = 0, valConta = 0, valConta2 = 0, resto = 0;
  std::cout << "Digite o valor do salario R$ ";
  std::cin >> valSal;
  std::cout << "Valor da primeira conta R$ ";
  std::cin >> valConta;
  std::cout << "Valor da segunda conta R$ ";
  std::cin >> valConta2;

  resto = valSal - ((valConta + valConta2) * 1.02);

  std::cout << std::fixed << std::setprecision(2) << "Restate do salario R$ " << resto << std::endl;

  return 0;
}
