#include <iostream>

int main(int argc, char const *argv[])
{
  int idade = 0;

  std::cout << "Digite a idade: ";
  std::cin >> idade;

  if (idade < 5)
  {
    std::cout << "Idade fora da categoria." << std::endl;
  }
  else if (idade >= 5 && idade <= 7)
  {
    std::cout << "Infantil." << std::endl;
  }
  else if (idade >= 8 && idade <= 10)
  {
    std::cout << "Juvenil." << std::endl;
  }
  else if (idade >= 11 && idade <= 15)
  {
    std::cout << "Adolescente." << std::endl;
  }
  else if (idade >= 16 && idade < 30)
  {
    std::cout << "Adulto." << std::endl;
  }
  else
  {
    std::cout << "Senior" << std::endl;
  }

  return 0;
}
