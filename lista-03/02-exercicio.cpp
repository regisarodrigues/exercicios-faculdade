#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  float despesa = 200, qtd = 120, lucro = 0, preco = 0, maiorLucro = 0;

  for (preco = 5; preco >= 1; preco = preco - 0.5)
  {
    lucro = (preco * qtd) - despesa;
    if (lucro > maiorLucro)
    {
      maiorLucro = lucro;
    }
    cout << "Lucro: " << lucro << " com preço a R$ " << preco << " e quantidade " << qtd << endl;
    qtd = qtd + 26;
  }

  cout << "Maior lucro R$ " << maiorLucro << endl;

  return 0;
}
