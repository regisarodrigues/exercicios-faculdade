#include <iostream>

int main(int argc, char const *argv[])
{
  int num = 0;
  std::cout << "*****Taduada*****" << std::endl;
  std::cout << "Digite o numero para calcular a tabuada: ";
  std::cin >> num;

  for (int i = 0; i <= 10; i++)
  {
    std::cout << num << " X " << i << " = " << num * i << std::endl;
  }

  return 0;
}
