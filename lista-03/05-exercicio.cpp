#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  for (int i = 1; i <= 10; i++)
  {
    for (int k = 0; k <= 10; k++)
    {
      cout << i << " X " << k << " = " << i * k << endl;
    }
    cout << endl;
  }

  return 0;
}
