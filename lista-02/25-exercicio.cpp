#include <iostream>

int main(int argc, char const *argv[])
{

  float qtdHoraExtra = 0, qtdHorasFalta = 0, horasMinutos = 0;
  int horas = 0;
  std::string msg;

  std::cout << "Número de horas extras: ";
  std::cin >> qtdHoraExtra;
  std::cout << "Número de horas faltou do trabalho: ";
  std::cin >> qtdHorasFalta;

  horas = qtdHoraExtra - ((float)2 / 3) * qtdHorasFalta;

  if (horas > 0)
  {
    horasMinutos = horas * 60;

    if (horasMinutos < 600)
    {
      msg = "PREMIO DE R$ 100,00.";
    }
    else if (horasMinutos < 1200)
    {
      msg = "PREMIO DE R$ 200,00.";
    }
    else if (horasMinutos < 1800)
    {
      msg = "PREMIO DE R$ 300,00.";
    }
    else if (horasMinutos < 2400)
    {
      msg = "PREMIO DE R$ 400,00.";
    }
    else
    {
      msg = "PREMIO DE R$ 500,00.";
    }
  }
  else
  {
    msg = "NÃO GANHOU GRATIFICAÇÃO.";
  }

  std::cout << msg << "\n";

  return 0;
}
