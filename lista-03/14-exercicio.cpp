#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
  int idade = 0, opcao = 0, cont_otimo = 0, cont_regular = 0, cont_bom = 0;
  int soma_idade = 0, i = 1;
  float media_resp_otimo = 0, porcentagem = 0;

  do
  {
    cout << i << "- Informe a idade: ";
    cin >> idade;
    cout << "Opções\n1-Regular\n2-Bom\n3-Ótimo\n";
    cout << "Informe a opção: ";
    cin >> opcao;

    if (opcao == 3)
    {
      cont_otimo++;
      soma_idade += idade;
    }
    else if (opcao == 2)
    {
      cont_bom++;
    }
    else if (opcao == 1)
    {
      cont_regular++;
    }

    else
    {
      cout << "\nOpção inválida!";
      i--;
    }

    i++;
  } while (i <= 15);

  // otimo
  if (cont_otimo > 0)
  {
    media_resp_otimo = (float)soma_idade / cont_otimo;
  }

  // bom
  if (cont_bom > 0)
  {
    porcentagem = ((float)cont_bom / (i - 1) * 100);
  }

  cout << "Média pessoas respoderam ótimo: " << media_resp_otimo << endl;
  cout << "Quantidade pessoas respoderam regular: " << cont_regular << endl;
  cout << fixed << setprecision(2) << "Porcentagem geral respondeu bom: " << porcentagem << "%." << endl;

  return 0;
}
