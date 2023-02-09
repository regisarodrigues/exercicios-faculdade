#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int idade = 0, total_idade = 0, cont = 0;
  float media_idade = 0;

  do
  {
    cout << "Informe uma idade negativa para sair do sistema!\n";
    cout << "Informe a idade: ";
    cin >> idade;
    if (idade > 0)
    {
      total_idade += idade;
      cont++;
    }

  } while (idade >= 0);

  if (cont > 0)
    media_idade = total_idade / cont;

  cout << "Média das idades: " << media_idade << endl;

  return 0;
}
