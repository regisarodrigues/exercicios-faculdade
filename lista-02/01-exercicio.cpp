#include <iostream>

int main()
{
  float nota = 0, nota2 = 0, nota3 = 0, nota4 = 0, media = 0;

  std::cout << "Nota 01: ";
  std::cin >> nota;
  std::cout << "Nota 02: ";
  std::cin >> nota2;
  std::cout << "Nota 03: ";
  std::cin >> nota3;
  std::cout << "Nota 04: ";
  std::cin >> nota4;

  media = (nota + nota2 + nota3 + nota4) / 4;

  if (media >= 7)
  {
    std::cout << "Aluno com média " << media << " => APROVADO!" << std::endl;
  }
  else
  {
    std::cout << "Aluno com média " << media << " => REPROVADO!" << std::endl;
  }

  return 0;
}
