#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
  if (n <= 1)
    return false;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int num;
  cout << "Digite um número: ";
  cin >> num;
  cout << "Números primos até " << num << ": ";
  for (int i = 2; i <= num; i++)
  {
    if (is_prime(i))
      cout << i << " ";
  }
  cout << endl;
  return 0;
}
