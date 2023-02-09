#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
  char cod;
  int i = 0;
  float valor = 0, totalVista = 0, totalPrazo = 0, total = 0, totalPParcela = 0;

  do
  {
    cout << "V compras à vista.\nP compras à prazo.\n";
    cout << "Tipo pagamento: ";
    cin >> cod;
    cod = toupper(cod);

    if (cod == 'V' || cod == 'P')
    {
      cout << "Valor R$: ";
      cin >> valor;

      switch (cod)
      {
      case 'V':
        totalVista += valor;
        break;

      case 'P':
        totalPrazo += valor;
        break;
      }
    }
    else
    {
      cout << "Código inválido!\n"
           << endl;
      i--;
    }

    i++;
  } while (i < 15);

  total = totalVista + totalPrazo;
  totalPParcela = (totalPrazo / 3);

  cout << "\nValor total compras à vista R$: " << totalVista << endl;
  cout << "Valor total compras à prazo R$: " << totalPrazo << endl;
  cout << fixed << setprecision(2) << "Valor total primeira parcela das compras à prazo R$: " << totalPParcela << endl;
  cout << "Valor total compras R$: " << total << endl;

  return 0;
}
