#include <iostream>

int main(int argc, char const *argv[])
{
  float nota = 0, nota2 = 0, media = 0;

  std::cout << "Nota 01: ";
  std::cin >> nota;
  std::cout << "Nota 02: ";
  std::cin >> nota2;

  media = (nota + nota2) / 2;

  if (media >= 0 && media < 3)
  {
    std::cout << "Aluno com media " << media << " => REPROVADO!" << std::endl;
  }
  else if (media >= 3 && media < 7)
  {
    std::cout << "Aluno com media " << media << " => EXAME!" << std::endl;
  }
  else if (media <= 10)
  {
    std::cout << "Aluno com media " << media << " => APROVADO!" << std::endl;
  }
  else
  {
    std::cout << "Media invalida!!" << std::endl;
  }

  return 0;
}
