#include <iostream>
using namespace std;

int main()
{
  int numero1 = 0;
  int numero2 = 0;

  cout << "Digite o primeriro numero: ";
  cin >> numero1;

  cout << "Digite o segundo numero: ";
  cin >> numero2;

  double total = 0;
  total = numero1 - numero2;

  cout << "O resultado de " << numero1 << " - " << numero2 << " é: " << total << "\n";
  /* code */
  return 0;
}
