#include <iostream>

int main(int argc, char const *argv[])
{
  float preco = 0, novoPreco = 0;
  std::string classificacao = "";

  std::cout << "Valor do produto R$ ";
  std::cin >> preco;

  if (preco < 50)
  {
    novoPreco = preco * 1.05;
  }
  else if (preco >= 50 && preco <= 100)
  {
    novoPreco = preco * 1.10;
  }
  else
  {
    novoPreco = preco * 1.15;
  }

  if (novoPreco < 80)
  {
    classificacao = "Barato.";
  }
  else if (novoPreco >= 80 && novoPreco <= 120)
  {
    classificacao = "Normal.";
  }
  else if (novoPreco > 120 && novoPreco <= 200)
  {
    classificacao = "Caro.";
  }
  else
  {
    classificacao = "Muito caro.";
  }

  std::cout << "\nNovo preco R$ " << novoPreco << "\nClassificacao => " << classificacao << std::endl;

  return 0;
}
