#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  float saldoMedio = 0, credito = 0;

  std::cout << "Saldo médio do cliente R$ ";
  std::cin >> saldoMedio;

  if (saldoMedio > 400)
  {
    credito = saldoMedio * 0.30;
    std::cout << std::fixed << std::setprecision(2) << "Saldo médio R$ " << saldoMedio << "\nValor do crédito R$ " << credito << std::endl;
  }
  else if (saldoMedio <= 400 && saldoMedio > 300)
  {
    credito = saldoMedio * 0.25;
  }
  else if (saldoMedio <= 300 && saldoMedio > 200)
  {
    credito = saldoMedio * 0.20;
  }
  else
  {
    credito = saldoMedio * 0.10;
  }

  std::cout << std::fixed << std::setprecision(2) << "Saldo médio R$ " << saldoMedio << "\nValor do crédito R$ " << credito << std::endl;

  return 0;
}
