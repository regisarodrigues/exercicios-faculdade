#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  double nota1 = 0, nota2 = 0, media = 0;
  cout << "Valor da nota 01: ";
  cin >> nota1;
  cout << "Valor da nota 02: ";
  cin >> nota2;

  media = (nota1 * 2 + nota2 * 3) / (2 + 3);

  cout << "Media ponderada das notas " << nota1 << ", " << nota2 << " é: " << media << "\n";

  return 0;
}
