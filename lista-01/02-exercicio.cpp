#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int numero1 = 0, numero2 = 0, numero3 = 0, resultado = 0;

  cout << "Primerio número: ";
  cin >> numero1;
  cout << "Segundo número: ";
  cin >> numero2;
  cout << "Terceiro número: ";
  cin >> numero3;

  resultado = numero1 * numero2 * numero3;

  cout << numero1 << " x " << numero2 << " x " << numero3 << " = " << resultado << "\n";

  return 0;
}
