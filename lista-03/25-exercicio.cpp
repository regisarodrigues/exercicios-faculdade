#include <iostream>
#include <iomanip>

int main(int argv, char const *argc[])
{
  int tipo_investimento = 0, cod_cliente = 0, cod = 0;
  float valor_investido = 0, porcent = 0, total_investido = 0, total_juros = 0;

  do
  {
    std::cout << "Informe o codigo do cliente: ";
    std::cin >> cod_cliente;

    if (cod_cliente > 0)
    {
      std::cout << "Tipos de investimentos\n 1-Poupança.\n 2-Poupança plus.\n 3-Fundos de renda fixa.\n";
      std::cout << "Informe o tipo de investimento: ";
      std::cin >> tipo_investimento;
      std::cout << "Valor investimento R$ ";
      std::cin >> valor_investido;

      if (valor_investido > 0)
      {
        switch (tipo_investimento)
        {
        case 1:
          porcent = 1.5;
          break;
        case 2:
          porcent = 2;
          break;
        case 3:
          porcent = 4;
          break;

        default:
          std::cout << "Código investimento inválido!" << std::endl;
          break;
        }

        if (cod_cliente == cod_cliente)
        {
          total_juros += (valor_investido * porcent) / 100;
          total_investido += valor_investido;
          cod = cod_cliente;
        }
        else
        {
          total_juros = (valor_investido * porcent) / 100;
          total_investido = valor_investido;
          cod = cod_cliente;
        }
      }
      else
      {
        std::cout << "Valor tem que ser maior que 0!" << std::endl;
      }
    }
  } while (cod_cliente > 0);

  if (total_investido > 0 && total_juros > 0)
  {
    std::cout << "\nCliente código " << cod;
    std::cout << "\nTotal de investimentos ";
    std::cout << std::fixed << std::setprecision(2) << " R$" << total_investido;
    std::cout << ", total de juros pagos R$ " << total_juros << std::endl;
  }

  return 0;
}
