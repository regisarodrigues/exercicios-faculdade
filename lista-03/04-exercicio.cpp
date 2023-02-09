#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int num = 0;

  cout << "Número gerar tabuada: ";
  cin >> num;

  for (int i = 0; i <= 10; i++)
  {
    cout << num << " X " << i << " = " << num * i << endl;
  }

  return 0;
}
