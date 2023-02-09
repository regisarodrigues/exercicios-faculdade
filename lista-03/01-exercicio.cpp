#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int A = 0, B = 0, C = 0, D = 0, Aux = 0;

  for (int i = 1; i <= 5; i++)
  {
    cout << "Primeiro número: ";
    cin >> A;
    cout << "Segundo número: ";
    cin >> B;
    cout << "Terceiro número: ";
    cin >> C;
    cout << "Quarto número: ";
    cin >> D;

    cout << i << "° grupo=> "
         << "Ordem lida dos números: " << A << ", " << B << ", " << C << ", " << D << endl;

    for (int k = 0; k < 3; k++)
    {
      if (A > B)
      {
        Aux = A;
        A = B;
        B = Aux;
      }

      if (B > C)
      {
        Aux = B;
        B = C;
        C = Aux;
      }

      if (C > D)
      {
        Aux = C;
        C = D;
        D = Aux;
      }
    }

    cout << i << "° grupo=> "
         << "Ordem crescente: " << A << ", " << B << ", " << C << ", " << D << endl;
    cout << i << "° grupo=> "
         << "Ordem decrescente: " << D << ", " << C << ", " << B << ", " << A << endl
         << endl;
  }

  return 0;
}
