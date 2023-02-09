#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
  char sexo, resposta;
  int cont_sim = 0, cont_nao = 0, cont_mul_resp_sim = 0, cont_homens = 0, cont_hom_resp_nao = 0;
  float porcentagem = 0;

  for (int i = 1; i <= 10; i++)
  {
    cout << i << "ª pessoa." << endl;
    cout << "Informe (M)-ulheres ou (H)-omens.\nSexo: ";
    cin >> sexo;
    cout << "Responda (S)-im ou (N)-ão.\nResposta: ";
    cin >> resposta;

    if (toupper(resposta) == 'S')
    {
      cont_sim++;
    }

    if (toupper(resposta) == 'N')
    {
      cont_nao++;
    }

    if (toupper(sexo) == 'M' && toupper(resposta) == 'S')
    {
      cont_mul_resp_sim++;
    }

    if ((toupper(sexo)) == 'H')
    {
      cont_homens++;
    }

    if ((toupper(sexo)) == 'H' && toupper(resposta) == 'N')
    {
      cont_hom_resp_nao++;
    }
  }

  if (cont_homens > 0 && cont_hom_resp_nao > 0)
  {
    porcentagem = ((float)cont_hom_resp_nao / cont_homens) * 100;
  }

  cout << "Total de pessoas que responderam sim: " << cont_sim << endl;
  cout << "Total de pessoas que responderam não: " << cont_nao << endl;
  cout << "Total de mulheres que responderam sim: " << cont_mul_resp_sim << endl;
  cout << fixed << setprecision(2) << "Porcentagem de homens que responderam não: " << porcentagem << "%." << endl;

  return 0;
}
