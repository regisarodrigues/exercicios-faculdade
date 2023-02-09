#include <iostream>

int main(int argc, char const *argv[])
{
  int cont_altura = 0;
  float idade = 0, altura = 0, media_altura = 0, total_altura = 0;

  do
  {
    std::cout << "Informe a idade: ";
    std::cin >> idade;
    if (altura > 0)
    {
      std::cout << "Informe a altura: ";
      std::cin >> altura;

      if (altura > 0 && idade > 50)
      {
        cont_altura++;
        total_altura += altura;
      }
    }

  } while (idade > 0);

  if (cont_altura > 0)
  {
    media_altura = total_altura / cont_altura;
  }

  std::cout << "Média altura das pessoas acima de 50 anos: " << media_altura << std::endl;

  return 0;
}
