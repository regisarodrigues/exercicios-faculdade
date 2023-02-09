#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int num = 0, qtd_primo = 0;

  for (int i = 1; i <= 10; i++)
  {
    cout << "Informe o " << i << "º número inteiro: ";
    cin >> num;

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
      qtd_primo++;
    }
  }

  cout << "Quantidade número(s) primo " << qtd_primo << endl;

  return 0;
}
