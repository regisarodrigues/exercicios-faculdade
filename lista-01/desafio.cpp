#include <iostream>

int main(int argc, char const *argv[])
{
  int valMax = 0, qtdNumLinha = 0, qtnNumero = 0, k = 1;
  std::cout << "Quantidade numero por linha: ";
  std::cin >> qtdNumLinha;
  std::cout << "Ate quanto contar: ";
  std::cin >> qtnNumero;

  if (qtnNumero % qtdNumLinha == 0)
  {
    valMax = qtnNumero / qtdNumLinha;

    for (int i = 1; i <= valMax; i++)
    {
      for (int j = 1; j <= qtdNumLinha; j++)
      {
        std::cout << k++ << " ";
      }
      std::cout << "\n";
    }
  }
  else
  {
    valMax = (qtnNumero / qtdNumLinha) + 1;

    for (int i = 1; i <= valMax; i++)
    {
      for (int j = 1; j <= qtdNumLinha; j++)
      {

        if (k <= qtnNumero)
        {
          std::cout << k << " ";
        }
        else
        {
          break;
        }
        k++;
      }
      std::cout << "\n";
    }
  }

  return 0;
}
