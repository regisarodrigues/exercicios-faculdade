#include <iostream>

int main(int argc, char const *argv[])
{
  float num = 0, num2 = 0, num3 = 0;

  std::cout << "Número 01: ";
  std::cin >> num;
  std::cout << "Número 02: ";
  std::cin >> num2;
  std::cout << "Número 03: ";
  std::cin >> num3;

  if (num > num2 && num > num3)
  {
    std::cout << "Número maior: " << num << std::endl;
  }
  else if (num2 > num && num2 > num3)
  {
    std::cout << "Número maior: " << num2 << std::endl;
  }
  else
  {
    std::cout << "Número maior: " << num3 << std::endl;
  }
  return 0;
}
