#include <iostream>

int main(int argc, char const *argv[])
{
  float num = 0, num2 = 0, num3 = 0;

  std::cout << "Digite numero 01: ";
  std::cin >> num;
  std::cout << "Digite numero 02: ";
  std::cin >> num2;
  std::cout << "Digite numero 03: ";
  std::cin >> num3;

  if (num > num2 && num > num3)
  {
    std::cout << "Numero maior: " << num << std::endl;
  }
  else if (num2 > num && num2 > num3)
  {
    std::cout << "Numero maior: " << num2 << std::endl;
  }
  else
  {
    std::cout << "Numero maior: " << num3 << std::endl;
  }
  return 0;
}
