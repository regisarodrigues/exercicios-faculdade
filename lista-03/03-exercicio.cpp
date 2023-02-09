#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int idade = 0, fEtaria1 = 0, fEtaria2 = 0, fEtaria3 = 0, fEtaria4 = 0, fEtaria5 = 0;
  float perFaixaEt1 = 0, perFaixaEt5 = 0;

  for (int i = 1; i <= 8; i++)
  {
    cout << "Idade " << i << ": ";
    cin >> idade;

    if (idade > 0 && idade < 16)
    {
      fEtaria1++;
    }
    else if (idade >= 16 && idade < 31)
    {
      fEtaria2++;
    }
    else if (idade >= 31 && idade < 46)
    {
      fEtaria3++;
    }
    else if (idade >= 46 && idade <= 60)
    {
      fEtaria4++;
    }
    else if (idade > 60)
    {
      fEtaria5++;
    }
    else
    {
      cout << "Idade inválida!\n";
      i--;
    }
  }

  cout << "Quantidade pessoas na 1ª faixa etária: " << fEtaria1 << endl;
  cout << "Quantidade pessoas na 2ª faixa etária: " << fEtaria2 << endl;
  cout << "Quantidade pessoas na 3ª faixa etária: " << fEtaria3 << endl;
  cout << "Quantidade pessoas na 4ª faixa etária: " << fEtaria4 << endl;
  cout << "Quantidade pessoas na 5ª faixa etária: " << fEtaria5 << endl;

  perFaixaEt1 = ((float)fEtaria1 / 8) * 100;
  perFaixaEt5 = ((float)fEtaria5 / 8) * 100;

  cout << "Porcentagem de pessoas na 1ª faixa etária: " << perFaixaEt1 << "%" << endl;
  cout << "Porcentagem de pessoas na 5ª faixa etária: " << perFaixaEt5 << "%" << endl;

  return 0;
}
