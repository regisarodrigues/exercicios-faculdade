#include <iostream>

int main(int argc, char const *argv[])
{
  float peso = 0;
  std::cout << "Digite um pedo em kg: ";
  std::cin >> peso;

  std::cout << "Peso em gramas: " << (peso * 1000) << "\n";
  return 0;
}
