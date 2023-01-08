#include <iostream>

int main(int argc, char const *argv[])
{
  float valorProduto = 0, precoFinal = 0;

  std::cout << "Digite o valor do produto R$ ";
  std::cin >> valorProduto;

  if (valorProduto <= 30)
  {
    precoFinal = valorProduto;
  }
  else if (valorProduto > 30 && valorProduto <= 100)
  {
    precoFinal = valorProduto * 0.90;
  }
  else
  {
    precoFinal = valorProduto * 0.85;
  }

  std::cout << "Valor produto com desconto R$ " << precoFinal << std::endl;

  return 0;
}
