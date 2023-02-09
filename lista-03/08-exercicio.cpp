#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  char corOlhos, corCabelo;
  int idade = 0, qtdPIdade = 0, qtdIdade = 0, i = 1;
  int qtdRuiva = 0, somaIdade = 0, qtdOAzuis = 0;
  float peso = 0, altura = 0, mediaIdade = 0, porcentagem = 0;

  do
  {
    cout << "Cor dos olhos (A-azul, C-castanho, P-preto, V-verde): ";
    cin >> corOlhos;
    corOlhos = toupper(corOlhos);
    cout << "Cor dos cabelos (C-castanho, P-preto, L-loiro,  R-ruivo): ";
    cin >> corCabelo;
    corCabelo = toupper(corCabelo);
    cout << "Altura: ";
    cin >> altura;
    cout << "Peso: ";
    cin >> peso;
    cout << "Idade: ";
    cin >> idade;

    if (idade > 50 && peso <= 60)
    {
      qtdPIdade++;
    }

    if (altura <= 1.50)
    {
      qtdIdade++;
      somaIdade += idade;
    }

    if (corOlhos == 'A')
    {
      qtdOAzuis++;
    }

    if (corCabelo == 'R' && corOlhos != 'A')
    {
      qtdRuiva++;
    }

    i++;
  } while (i <= 6);

  // calculos
  if (qtdIdade > 0)
  {
    mediaIdade = (float)somaIdade / qtdIdade;
  }

  porcentagem = (qtdOAzuis / (i - 1)) * 100;

  cout << "Pessoas com idade superior 50 anos e peso inferior 60kg: " << qtdPIdade << endl;
  cout << "Média idade pessoas com altura inferior a 1,5 m: " << mediaIdade << endl;
  cout << "Porcentagem pessoas olhos azuis " << porcentagem << "% ." << endl;
  cout << "Quantidade pessoas ruivas que não possui olhos azuis: " << qtdRuiva << endl;

  return 0;
}
