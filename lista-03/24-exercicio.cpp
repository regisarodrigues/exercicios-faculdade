#include <iostream>

int main(int argv, char const *argc[])
{

  int num = 0, menor_num = 0, maior_num = 0;

  do
  {
    std::cout << "Informe o número: ";
    std::cin >> num;

    if (num > 0)
    {
      if (num > maior_num)
      {
        maior_num = num;
      }

      if (menor_num == 0)
      {
        menor_num = num;
      }
      else if (num < menor_num)
      {
        menor_num = num;
      }
    }
    else if (num < 0)
    {
      std::cout << "Número negativo!" << std::endl;
    }

  } while (num != 0);

  if (maior_num > 0 || menor_num > 0)
  {
    std::cout << "Maior número: " << maior_num << std::endl;
    std::cout << "Menor número: " << menor_num << std::endl;
  }

  return 0;
}
