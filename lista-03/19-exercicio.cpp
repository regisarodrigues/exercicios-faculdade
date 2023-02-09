#include <iostream>

int main(int argc, char const *argv[])
{
  char tipo_acao;
  int lucro_superior = 0, lucro_inferior = 0;
  float valor_compra = 0, valor_venda = 0, lucro = 0;
  float total_lucro = 0;

  while (toupper(tipo_acao) != 'F')
  {
    std::cout << "Finalize o sistema digitando 'F'.\n";
    std::cout << "Informe uma letra representando a ação a ser comercializada: ";
    std::cin >> tipo_acao;

    if (toupper(tipo_acao) != 'F')
    {
      std::cout << "Informe valor compra R$ ";
      std::cin >> valor_compra;
      std::cout << "Informe valor venda R$ ";
      std::cin >> valor_venda;

      lucro = valor_venda - valor_compra;

      if (lucro > 0)
      {
        total_lucro += lucro;
        std::cout << "Obteve lucro de R$ " << lucro << std::endl;
      }

      if (lucro > 1000)
      {
        lucro_superior++;
      }

      if (lucro < 200)
      {
        lucro_inferior++;
      }
    }
  }

  if (lucro_superior > 0)
  {
    std::cout << "Quantidade de lucro superior a R$ 1.000,00: " << lucro_superior << std::endl;
  }

  if (lucro_inferior > 0)
  {
    std::cout << "Quantidade de lucro inferior a R$ 200,00: " << lucro_inferior << std::endl;
  }

  if (total_lucro > 0)
  {
    std::cout << "Empresa obteve um lucro total de R$ " << total_lucro << std::endl;
  }

  return 0;
}
