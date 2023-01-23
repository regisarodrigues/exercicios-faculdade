#include <iostream>
int main(int argc, char const *argv[])
{
  double preco = 0, valDesc = 0;
  std::cout << "Valor produto R$ ";
  std::cin >> preco;

  valDesc = preco * 0.9;

  std::cout.precision(2);
  std::cout << std::fixed << "Valor com 10%  desconto R$ " << valDesc << "\n";

  return 0;
}
