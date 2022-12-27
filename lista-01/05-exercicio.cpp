#include <iostream>
int main(int argc, char const *argv[])
{
  double preco = 0, valDesc = 0;
  std::cout << "Digite o valor do produto R$ ";
  std::cin >> preco;

  valDesc = preco * 0.9;

  std::cout.precision(2);
  std::cout << std::fixed << "Valor final com 10% de desconto R$ " << valDesc << "\n";

  return 0;
}
