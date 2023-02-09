#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int idade = 0, somaIdade = 0, qtdPessoa = 0, qtdPorcent = 0, i = 1;
  float altura = 0, peso = 0, mediaIdade = 0, porcentagem = 0;

  while (i <= 2)
  {

    cout << i << "- Informe a idade: ";
    cin >> idade;
    cout << i << "- Informe a altura: ";
    cin >> altura;
    cout << i << "- Informe o peso: ";
    cin >> peso;

    somaIdade += idade;

    if (peso >= 90 && altura <= 1.5)
    {
      qtdPessoa++;
    }

    if (idade >= 10 && idade <= 30 && altura >= 1.9)
    {
      qtdPorcent++;
    }

    i++;
  }

  mediaIdade = (float)somaIdade / (i - 1);
  porcentagem = ((float)qtdPorcent / (i - 1) * 100);

  cout << "Média das idades: " << mediaIdade << endl;
  cout << "Quantidade pessoas com peso superior 90kg";
  cout << " e altura inferior a 1,5m: " << qtdPessoa << endl;
  cout << "Porcentagem pessoas com idade entre 10 e 30 anos ";
  cout << "e altura maior que 1.9m: " << porcentagem << "%." << endl;

  return 0;
}
