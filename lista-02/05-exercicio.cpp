#include <iostream>

int main(int argc, char const *argv[])
{
  float num = 0, num2 = 0, opcao = 0;

  std::cout << "Primero número: ";
  std::cin >> num;
  std::cout << "Segundo número: ";
  std::cin >> num2;

  std::cout << "\n ********** 1- Calcular média, 2- Diferença maior pelo menor, 3- Produto entre os números, 4- Divisão primeiro pelo segundo **********\n";
  std::cout << "Sua escolha? ";
  std::cin >> opcao;

  if (opcao == 1)
  {
    float media = 0;
    media = (num + num2) / 2;
    std::cout << "Media entre os números: " << media << std::endl;
  }
  else if (opcao == 2)
  {
    float diferenca = 0;
    if (num > num2)
    {
      diferenca = num - num2;
      std::cout << "Diferença entre " << num << " - " << num2 << " = " << diferenca << std::endl;
    }
    else
    {
      diferenca = num2 - num;
      std::cout << "Diferença entre " << num2 << " - " << num << " = " << diferenca << std::endl;
    }
  }
  else if (opcao == 3)
  {
    float produto = 0;
    produto = num * num2;
    std::cout << "Produto entre os números: " << produto << std::endl;
  }
  else if (opcao == 4)
  {
    float result = 0;
    if (num2 == 0)
    {
      std::cout << "O segundo número não pode ser zero! \n";
    }
    else
    {
      result = num / num2;
      std::cout << num << " ÷ " << num2 << " = " << result << "\n";
    }
  }
  else
  {
    std::cout << "Opção inválida!" << std::endl;
  }

  return 0;
}
