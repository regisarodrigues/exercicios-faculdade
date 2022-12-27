#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
  float cateto = 0, cateto2 = 0, hipotenusa = 0;
  std::cout << "******CALCULO DA HIPOTENUZA******\n\n";
  std::cout << "Informe o valor do cateto: ";
  std::cin >> cateto;
  std::cout << "Informe o valor do cateto: ";
  std::cin >> cateto2;

  hipotenusa = sqrt(pow(cateto, 2) + pow(cateto2, 2));

  std::cout << "Valor da hipotenusa: " << hipotenusa << std::endl;

  return 0;
}
