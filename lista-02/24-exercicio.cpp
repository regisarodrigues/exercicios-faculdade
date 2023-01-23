#include <iostream>

int main(int argc, char const *argv[])
{
  int categoria = 0;
  char situacao;
  float preco = 0, aumento = 0, novoPreco = 0, valorComImposto = 0;
  std::string msg;

  std::cout << "Valor produto R$ ";
  std::cin >> preco;

  if (preco != 0 && preco <= 25)
  {
    std::cout << "\nCategorias\n1-Limpeza\n2-Alimentação\n3-Vestiário\n";
    std::cout << "Número da categoria: ";
    std::cin >> categoria;
    std::cout << "\nR-Produtos necessitam de refrigeracao.\nN-Produtos nao necessita de refrigeracao.\n";
    std::cout << "Entre com a situacao: ";
    std::cin >> situacao;

    if (categoria == 1)
    {
      aumento = 0.05;
    }
    else if (categoria == 2)
    {
      aumento = 0.08;
    }
    else if (categoria == 3)
    {
      aumento = 0.10;
    }
    else
    {
      std::cout << "Categoria inválida!\n";
    }
  }
  else if (preco > 25)
  {
    std::cout << "\nCategorias\n1-Limpeza\n2-Alimentação\n3-Vestiario\n";
    std::cout << "Número da categoria: ";
    std::cin >> categoria;
    std::cout << "\nR-Produtos necessitam de refrigeração.\nN-Produto não necessita de refrigeração.\n";
    std::cout << "Entre com a situação: ";
    std::cin >> situacao;

    if (categoria == 1)
    {
      aumento = 0.12;
    }
    else if (categoria == 2)
    {
      aumento = 0.15;
    }
    else if (categoria == 3)
    {
      aumento = 0.18;
    }
    else
    {
      std::cout << "Categoria invalida!\n";
    }
  }
  else
  {
    std::cout << "Preco invalido!\n";
  }

  // calcular novo preço
  novoPreco = preco + (preco * aumento);

  // Imposto
  if (categoria == 2 || situacao == 'R')
  {
    valorComImposto = novoPreco * 0.95;
  }
  else
  {
    valorComImposto = novoPreco * 0.92;
  }

  if (valorComImposto <= 50)
  {
    msg = "Classificação => BARATO";
  }
  else if (valorComImposto < 120)
  {
    msg = "Classificação => NORMAL";
  }
  else
  {
    msg = "Classificação => CARO";
  }

  std::cout << msg << "\n";

  return 0;
}
