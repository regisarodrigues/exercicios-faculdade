#include <iostream>

int main(int argc, char const *argv[])
{
  int idade = 0;

  std::cout << "Digite a idade: ";
  std::cin >> idade;

  if (idade > 0 && idade < 18)
  {
    std::cout << "Menor idade!" << std::endl;
  }
  else if (idade >= 18)
  {
    std::cout << "Maior idade!" << std::endl;
  }
  else
  {
    std::cout << "Idade invalida!" << std::endl;
  }

  return 0;
}
