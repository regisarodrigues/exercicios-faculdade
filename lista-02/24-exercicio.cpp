#include <iostream>

int main(int argc, char const *argv[])
{
  int categoria = 0;
  char situacao;
  float preco = 0, aumento = 0, novoPreco = 0, valorComImposto = 0;
  std::string msg;

  std::cout << "Digite o valor do produto R$ ";
  std::cin >> preco;

  if (preco != 0 && preco <= 25)
  {
    std::cout << "\n1-Limpeza\n2-Alimentacao\n3-Vestiario\n";
    std::cout << "Entre com o numero da categoria: ";
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
      std::cout << "Categoria invalida!\n";
    }
  }
  else if (preco > 25)
  {
    std::cout << "\n1-Limpeza\n2-Alimentacao\n3-Vestiario\n";
    std::cout << "Entre com o numero da categoria: ";
    std::cin >> categoria;
    std::cout << "\nR-Produtos necessitam de refrigeracao.\nN-Produtos nao necessita de refrigeracao.\n";
    std::cout << "Entre com a situacao: ";
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
    msg = "Classificacao => BARATO";
  }
  else if (valorComImposto < 120)
  {
    msg = "Classificacao => NORMAL";
  }
  else
  {
    msg = "Classificacao => CARO";
  }

  std::cout << msg << "\n";

  return 0;
}
