#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  int peso, altura;
  string nome;

  cout << "escreva o seu nome, peso e altura \n separe os valores por espaços\n";
  cin >> nome >> peso >> altura;
  cout << "o seu nome é:" << nome << "\n";
  cout << "o seu peso é:" << peso << "\n";
  cout << "a sua altura é: " << altura << "\n";

#ifdef WIN32
  system("pause"); /* Necessário apenas para sistemas Microsoft®, em modo gráfico.
                      Em UNIX®, variantes e similares use um terminal de texto e
                      esta função não será necessária. */
#endif

  return 0;
}