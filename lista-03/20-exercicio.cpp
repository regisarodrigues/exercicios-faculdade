#include <iostream>

int main(int argc, char const *argv[])
{
  int opcao = 0;
  while (opcao != 3)
  {
    std::cout << "Menu de opções:\n";
    std::cout << "1. Média aritimética\n";
    std::cout << "2. Média ponderada\n";
    std::cout << "3. Sair";
    std::cout << "Digite a opção desejada: ";
    std::cin >> opcao;

    if (opcao >= 1 && opcao <= 3)
    {
      float nota_1 = 0, nota_2 = 0, nota_3 = 0, media = 0;
      int peso_1 = 0, peso_2 = 0, peso_3 = 0;

      switch (opcao)
      {
      case 1:
        std::cout << "Iforme a 1ª nota: ";
        std::cin >> nota_1;
        std::cout << "Iforme a 2ª nota: ";
        std::cin >> nota_2;

        media = (nota_1 + nota_2) / 2;

        std::cout << "A média aritimética das notas é: " << media << std::endl;
        break;

      case 2:
        std::cout << "Iforme a 1ª nota: ";
        std::cin >> nota_1;
        std::cout << "Iforme o peso: ";
        std::cin >> peso_1;

        std::cout << "Iforme a 2ª nota: ";
        std::cin >> nota_2;

        std::cout << "Iforme o peso: ";
        std::cin >> peso_2;

        std::cout << "Iforme a 3ª nota: ";
        std::cin >> nota_3;

        std::cout << "Iforme o peso: ";
        std::cin >> peso_3;

        media = ((nota_1 * peso_1) + (nota_2 * peso_2) + (nota_3 * peso_3)) / (peso_1 + peso_2 + peso_3);

        std::cout << "A média ponderada das notas é: " << media << std::endl;

        break;
      }
    }
    else
    {
      std::cout << "Opção inválida!" << std::endl;
    }
  }

  return 0;
}
