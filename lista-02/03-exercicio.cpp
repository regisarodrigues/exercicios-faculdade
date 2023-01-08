#include <iostream>

int main(int argc, char const *argv[])
{
  float num = 0, num2 = 0;

  std::cout << "Digite primero numero: ";
  std::cin >> num;
  std::cout << "Digite o segundo numero: ";
  std::cin >> num2;

  if (num < num2)
  {
    std::cout << "Numero menor: " << num << std::endl;
  }
  else
  {
    std::cout << "Numero menor: " << num2 << std::endl;
  }

  return 0;
}
