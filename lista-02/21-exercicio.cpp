#include <iostream>

int main(int argc, char const *argv[])
{
  int codigo;
  std::string regiao;

  std::cout << "Código produto: ";
  std::cin >> codigo;

  if (codigo == 1)
  {
    regiao = "Sul.";
  }
  else if (codigo == 2)
  {
    regiao = "Norte.";
  }
  else if (codigo == 3)
  {
    regiao = "Leste.";
  }
  else if (codigo == 4)
  {
    regiao = "Oeste.";
  }
  else if (codigo >= 5 && codigo <= 6 || codigo >= 21 && codigo <= 30)
  {
    regiao = "Nordeste.";
  }
  else if (codigo >= 7 && codigo <= 9)
  {
    regiao = "Suldeste.";
  }
  else if (codigo >= 10 && codigo <= 20)
  {
    regiao = "Centro-oeste.";
  }
  else
  {
    regiao = "inválida!";
  }

  std::cout << "Região " << regiao << std::endl;

  return 0;
}
