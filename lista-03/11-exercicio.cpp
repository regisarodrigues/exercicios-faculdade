#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
  double valor = 0, valor_vista = 0, valor_parcela = 0, valor_final = 0;

  cout << "Valor do altomóvel R$ ";
  cin >> valor;

  valor_final = valor * 0.8;
  cout << fixed << setprecision(2) << "Valor à vista R$ " << valor_final << endl;

  int porcentagem = 0;
  for (int i = 6; i <= 60; i += 6)
  {
    valor_final = 0;
    porcentagem += 3;

    valor_final = valor + ((valor * porcentagem) / 100);
    valor_parcela = valor_final / i;

    cout << fixed << setprecision(2) << "Valor final em " << i << "X parcelas R$ " << valor_final;
    cout << ", valor da parcela R$ " << valor_parcela << endl;
  }

  return 0;
}
