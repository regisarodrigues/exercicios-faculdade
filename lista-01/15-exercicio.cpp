#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float valSal = 0, valConta = 0, valConta2 = 0, resto = 0;
  std::cout << "Valor salário R$ ";
  std::cin >> valSal;
  std::cout << "Valor primeira conta R$ ";
  std::cin >> valConta;
  std::cout << "Valor segunda conta R$ ";
  std::cin >> valConta2;

  resto = valSal - ((valConta + valConta2) * 1.02);

  std::cout << std::fixed << std::setprecision(2) << "Restante salário R$ " << resto << std::endl;

  return 0;
}
