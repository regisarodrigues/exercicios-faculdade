#include <iostream>

int main(int argc, char const *argv[])
{
  int opcao = 0, meses_trabalhados = 0;
  float salario = 0, novo_salario = 0, decimo_terceiro = 0, ferias = 0;

  do
  {
    std::cout << "Informe\n 1. Novo salário\n 2. Férias\n 3. Décimo Terceiro\n 4. Sair\n";
    std::cout << "Opção: ";
    std::cin >> opcao;

    switch (opcao)
    {
    case 1:
      std::cout << "Informe salário R$ ";
      std::cin >> salario;

      if (salario >= 0 && salario < 2100)
      {
        novo_salario = salario + salario * 15 / 100;
      }
      else if (salario >= 2100 && salario <= 6000)
      {
        novo_salario = salario + salario * 10 / 100;
      }
      else if (salario > 6000)
      {
        novo_salario = salario + salario * 5 / 100;
      }
      else
      {
        std::cout << "Salário informado não pode ser negativo!" << std::endl;
        break;
      }

      std::cout << "Novo salário R$ " << novo_salario << std::endl;
      break;

    case 2:
      std::cout << "Informe salário R$ ";
      std::cin >> salario;

      if (salario >= 0)
      {
        ferias = salario + (salario / 3);
        std::cout << "Salário das férias R$ " << ferias << std::endl;
      }
      else
      {
        std::cout << "Salário informado não pode ser negativo!" << std::endl;
      }
      break;

    case 3:
      std::cout << "Informe salário R$ ";
      std::cin >> salario;

      if (salario >= 0)
      {

        std::cout << "Meses trabalhos no ano: ";
        std::cin >> salario;

        if (meses_trabalhados >= 0 && meses_trabalhados <= 12)
        {

          decimo_terceiro = (salario * (meses_trabalhados / 12));
          std::cout << "Valor do décimo terceiro R$ " << decimo_terceiro << std::endl;
        }
        else
        {
          std::cout << "Meses não podem ser negativo nem negativo nem maior que 12." << std::endl;
        }
      }
      else
      {
        std::cout << "Salário informado não pode ser negativo!" << std::endl;
      }
      break;

    case 4:
      std::cout << "Obrigado por utilizar nosso sistema!" << std::endl;

      break;

    default:
      std::cout << "Opção inválida, tente novamente!" << std::endl;
      break;
    }

  } while (opcao != 4);

  return 0;
}
