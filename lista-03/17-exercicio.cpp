#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
  char status_tv;
  int canal = 0, qtd_pessoas = 0, cont = 1;
  int total_pess_canal_4 = 0, total_pess_canal_5 = 0, total_pess_canal_7 = 0, total_pess_canal_12 = 0;
  float total_pessoas = 0, porcent_canal_4 = 0, porcent_canal_5 = 0, porcent_canal_7 = 0, porcent_canal_12 = 0;

  do
  {
    cout << "Pesquisa nº " << cont << endl;
    cout << "Informe (L) TV ligada, (D) TV desligada.\nStatus da TV: ";
    cin >> status_tv;
    cout << "Informe número do canal de acordo com os números (4, 5, 7, 12)\n";
    cout << "ou canal zero (0) encerrar pesquisa.\nCanal: ";
    cin >> canal;

    if (toupper(status_tv) == 'L' && canal != 0)
    {
      cout << "Informe o número pesssoas assimtindo a tv no canal " << canal << ": ";
      cin >> qtd_pessoas;

      if (canal == 4)
      {
        total_pess_canal_4 += qtd_pessoas;
      }

      if (canal == 5)
      {
        total_pess_canal_5 += qtd_pessoas;
      }

      if (canal == 7)
      {
        total_pess_canal_7 += qtd_pessoas;
      }

      if (canal == 12)
      {
        total_pess_canal_12 += qtd_pessoas;
      }
    }

    cont++;
  } while (canal != 0);

  total_pessoas = total_pess_canal_4 + total_pess_canal_5 + total_pess_canal_7 + total_pess_canal_12;
  // canal 4
  if (total_pess_canal_4 > 0)
  {
    porcent_canal_4 = ((float)total_pess_canal_4 / total_pessoas) * 100;
  }

  // canal 5
  if (total_pess_canal_5 > 0)
  {
    porcent_canal_5 = ((float)total_pess_canal_5 / total_pessoas) * 100;
  }

  // canal 7
  if (total_pess_canal_7 > 0)
  {
    porcent_canal_7 = ((float)total_pess_canal_7 / total_pessoas) * 100;
  }

  // canal 12
  if (total_pess_canal_12 > 0)
  {
    porcent_canal_12 = ((float)total_pess_canal_12 / total_pessoas) * 100;
  }

  cout << fixed << setprecision(2) << "Porcentagem de audiência do canal 04: " << porcent_canal_4 << "%." << endl;
  cout << fixed << setprecision(2) << "Porcentagem de audiência do canal 05: " << porcent_canal_5 << "%." << endl;
  cout << fixed << setprecision(2) << "Porcentagem de audiência do canal 07: " << porcent_canal_7 << "%." << endl;
  cout << fixed << setprecision(2) << "Porcentagem de audiência do canal 12: " << porcent_canal_12 << "%." << endl;

  return 0;
}
