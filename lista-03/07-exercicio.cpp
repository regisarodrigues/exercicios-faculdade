#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
  int idade = 0, idadeSup = 0, contAltura = 0, contPeso = 0, i = 1;
  float peso = 0, altura = 0, somaAltura = 0, mediaAltura = 0, porcentagem = 0;

  while (i <= 5)
  {
    cout << i << "- Idade: ";
    cin >> idade;
    cout << i << "- Altura: ";
    cin >> altura;
    cout << i << "- Peso: ";
    cin >> peso;

    if (idade > 50)
    {
      idadeSup++;
    }

    if (idade >= 10 && idade <= 20)
    {
      contAltura++;
      somaAltura += altura;
    }
    if (peso > 0 && peso <= 40)
    {
      contPeso++;
    }

    i++;
  }

  mediaAltura = somaAltura / contAltura;
  porcentagem = ((float)contPeso / (i - 1)) * 100;

  cout << "Quantidade pessoas com idade superior à 50 anos: " << idadeSup << endl;
  cout << fixed << setprecision(2) << "Média da alturas das pessoas com idade entre 10 e 20 anos: " << mediaAltura << endl;
  cout << "Porcentagem pessoas peso inferior à 40kg: " << porcentagem << "% ." << endl;
  return 0;
}
