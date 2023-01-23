#include <iostream>

int main(int argc, char const *argv[])
{
  double sal = 0, valVendas = 0, salFinal = 0;
  std::cout << "Valor salário funcionário R$ ";
  std::cin >> sal;
  std::cout << "Valor total venda R$ ";
  std::cin >> valVendas;
  salFinal = sal + (valVendas * 0.04);
  std::cout << "Valor salário mais a comissão R$ " << salFinal << "\n";
  return 0;
}
