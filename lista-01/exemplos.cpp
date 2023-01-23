#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  float peso, altura;
  string nome;

  cout << "Nome, peso e altura.\nSepare os valores por espaços.\n";
  cin >> nome >> peso >> altura;
  cout << "Nome: " << nome << "\n";
  cout << "Peso: " << peso << "\n";
  cout << "Altura: " << altura << "\n";

#ifdef WIN32
  system("pause"); /* Necessário apenas para sistemas Microsoft®, em modo gráfico.
                      Em UNIX®, variantes e similares use um terminal de texto e
                      esta função não será necessária. */
#endif

  return 0;
}
