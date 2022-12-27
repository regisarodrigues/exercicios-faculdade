#include <iostream>

int main(int argc, char const *argv[])
{
  float lado = 0, lado2 = 0, area = 0, iluminacao = 0;

  std::cout << "Digite o valor da primeira medida em metros: ";
  std::cin >> lado;
  std::cout << "Digite o valor da segunda medida em metros: ";
  std::cin >> lado2;

  area = lado * lado2;
  iluminacao = area * 18;

  std::cout << "Area total " << area << " m²" << std::endl;
  std::cout << "Potencia de iluminacao a ser usada: " << iluminacao << " W" << std::endl;

  return 0;
}
