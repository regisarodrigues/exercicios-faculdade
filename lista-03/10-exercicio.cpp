#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int num = 0, somaPares = 0, somaPrimos = 0;

  for (int i = 1; i <= 10; i++)
  {

    cout << "Informe o " << i << "º número inteiro: ";
    cin >> num;

    if (num % 2 == 0)
    {
      somaPares += num;
    }

    int primo = 0;
    for (int k = num; k >= 1; k--)
    {
      if ((num % k) == 0)
      {
        primo++;
      }
    }

    if (primo == 2)
    {
      cout << "primo" << endl;
      somaPrimos += num;
    }
  }

  cout << "Soma dos números pares: " << somaPares << endl;
  cout << "Soma dos números primos: " << somaPrimos << endl;

  return 0;
}
