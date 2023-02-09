#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int idade = 0, cont_f_etaria_1 = 0, cont_f_etaria_2 = 0, cont_f_etaria_3 = 0, cont_f_etaria_4 = 0, i = 1;
  float peso = 0, soma_f_etaria_1 = 0, soma_f_etaria_2 = 0, soma_f_etaria_3 = 0, soma_f_etaria_4 = 0;
  float media_f_etaria_1 = 0, media_f_etaria_2 = 0, media_f_etaria_3 = 0, media_f_etaria_4 = 0;

  while (i <= 15)
  {

    cout << i << "- Informe a idade: ";
    cin >> idade;
    cout << i << "- Informe o peso: ";
    cin >> peso;

    if (idade > 1 && idade <= 10)
    {
      cont_f_etaria_1++;
      soma_f_etaria_1 += peso;
    }
    else if (idade > 10 && idade <= 20)
    {
      cont_f_etaria_2++;
      soma_f_etaria_2 += peso;
    }
    else if (idade > 20 && idade <= 30)
    {
      cont_f_etaria_3++;
      soma_f_etaria_3 += peso;
    }
    else if (idade > 30)
    {
      cont_f_etaria_4++;
      soma_f_etaria_4 += peso;
    }
    else
    {
      cout << "\nIdade invalida!";
      i--;
    }

    i++;
  }

  if (cont_f_etaria_1 > 0)
  {
    media_f_etaria_1 = soma_f_etaria_1 / cont_f_etaria_1;
  }

  if (cont_f_etaria_2 > 0)
  {
    media_f_etaria_2 = soma_f_etaria_2 / cont_f_etaria_2;
  }

  if (cont_f_etaria_3 > 0)
  {
    media_f_etaria_3 = soma_f_etaria_3 / cont_f_etaria_3;
  }

  if (cont_f_etaria_4 > 0)
  {
    media_f_etaria_4 = soma_f_etaria_4 / cont_f_etaria_4;
  }

  cout << "Média peso da 1ª faixa etária " << media_f_etaria_1 << endl;
  cout << "Média peso da 2ª faixa etária " << media_f_etaria_2 << endl;
  cout << "Média peso da 3ª faixa etária " << media_f_etaria_3 << endl;
  cout << "Média peso da 4ª faixa etária " << media_f_etaria_4 << endl;

  return 0;
}
