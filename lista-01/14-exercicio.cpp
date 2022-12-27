#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
  time_t timer;
  struct tm *horarioLocal;
  time(&timer);                     // Obtem informações de data e hora
  horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

  int anoNasc = 0, ano = 0, mes = 0, semana = 0, dia = 0;
  int anoAtual = horarioLocal->tm_year + 1900;
  std::cout << "Digite o ano do seu nascimento: ";
  std::cin >> anoNasc;
  ano = anoAtual - anoNasc;

  std::cout << "Sua idade é " << ano << " anos. \n";
  std::cout << "Viveu " << ano * 12 << " meses. \n";
  std::cout << "Viveu " << ano * 52 << " semanas. \n";
  std::cout << "Viveu " << ano * 365 << " dias. \n";
  return 0;
}
