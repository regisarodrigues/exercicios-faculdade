#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  double num1 = 0, num2 = 0;
  double result = 0;
  cout << "Digite primero numero: ";
  cin >> num1;
  cout << "Digite o segundo numero: ";
  cin >> num2;

  if (num2 == 0)
  {
    cout << "O segundo numero nao pode ser zero! \n";
    /* code */
  }
  else
  {
    result = num1 / num2;
    cout << num1 << " ÷ " << num2 << " = " << result << "\n";
  }

  return 0;
}
