#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  double num1 = 0, num2 = 0;
  double result = 0;
  cout << "Primero número: ";
  cin >> num1;
  cout << "Segundo número: ";
  cin >> num2;

  if (num2 == 0)
  {
    cout << "O segundo número não pode ser zero! \n";
  }
  else
  {
    result = num1 / num2;
    cout << num1 << " ÷ " << num2 << " = " << result << "\n";
  }

  return 0;
}
