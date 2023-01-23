
#include <iostream>

int main(int argc, char const *argv[])
{
  int idade = 0, grauRisco = 0;
  float peso = 0;

  std::cout << "Digite a idade: ";
  std::cin >> idade;
  std::cout << "Digite o peso: ";
  std::cin >> peso;

  if (idade > 0 && idade < 20)
  {
    if (peso > 0 && peso < 60)
    {
      grauRisco = 9;
    }
    else if (peso >= 60 && peso <= 90)
    {
      grauRisco = 8;
    }
    else if (peso > 90)
    {
      grauRisco = 7;
    }

    else
    {
      grauRisco;
    }
  }
  else if (idade >= 20 && idade <= 50)
  {
    if (peso > 0 && peso < 60)
    {
      grauRisco = 6;
    }
    else if (peso >= 60 && peso <= 90)
    {
      grauRisco = 5;
    }
    else if (peso > 90)
    {
      grauRisco = 4;
    }

    else
    {
      grauRisco;
    }
  }
  else if (idade > 50)
  {
    if (peso > 0 && peso < 60)
    {
      grauRisco = 3;
    }
    else if (peso >= 60 && peso <= 90)
    {
      grauRisco = 2;
    }
    else if (peso > 90)
    {
      grauRisco = 1;
    }

    else
    {
      grauRisco;
    }
  }
  else
  {
    peso;
  }

  if (grauRisco != 0 && peso != 0)
  {
    std::cout << "Grau de risco: " << grauRisco << std::endl;
  }
  else
  {
    std::cout << "Peso ou idade inválido(s)!" << std::endl;
  }

  return 0;
}
