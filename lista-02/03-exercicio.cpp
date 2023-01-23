#include <iostream>

int main(int argc, char const *argv[])
{
  float num = 0, num2 = 0;

  std::cout << "Primero número: ";
  std::cin >> num;
  std::cout << "Segundo número: ";
  std::cin >> num2;

  if (num < num2)
  {
    std::cout << "Número menor: " << num << std::endl;
  }
  else
  {
    std::cout << "Número menor: " << num2 << std::endl;
  }

  return 0;
}
