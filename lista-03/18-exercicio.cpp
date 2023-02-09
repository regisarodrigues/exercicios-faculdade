#include <iostream>

int main(int argc, char const *argv[])
{
  char sexo, sexo_men_salario;
  int idade = 0, maior_idade = 0, menor_idade = 0, cont = 0;
  int cont_mulheres = 0, idade_men_salario = 0;
  float salario = 0, total_salario = 0, menor_salario = 0, media_salario = 0;

  do
  {
    std::cout << "Informe uma idade negativa para sair do sistema.\n";
    std::cout << "Informe sexo, (F)eminino ou (M)asculino: ";
    std::cin >> sexo;
    std::cout << "Informe a idade: ";
    std::cin >> idade;
    std::cout << "Informe salário R$ ";
    std::cin >> salario;

    if (idade > 0)
    {
      cont++;
      total_salario += salario;

      // maior idade
      if (idade > maior_idade || cont == 1)
      {
        maior_idade = idade;
      }

      // menor idade
      if (idade < menor_idade || cont == 1)
      {
        menor_idade = idade;
      }

      // mulheres salário até 200
      if (toupper(sexo) == 'F' && salario <= 200)
      {
        cont_mulheres++;
      }

      // idade, sexo, menor salario
      if (salario < menor_salario || cont == 1)
      {
        menor_salario = salario;
        sexo_men_salario = toupper(sexo);
        idade_men_salario = idade;
      }
    }

  } while (idade > 0);

  // media dos salários
  if (cont > 0)
  {
    media_salario = total_salario / cont;
  }

  std::cout << "Média de salários do grupo R$ " << media_salario << std::endl;
  std::cout << "Maior idade do grupo " << maior_idade << std::endl;
  std::cout << "Menor idade do grupo " << menor_idade << std::endl;
  std::cout << "Quantidade de mulheres com salario até R$200,00: " << cont_mulheres << std::endl;
  std::cout << "Idade: " << idade_men_salario << " e sexo: " << sexo_men_salario << " pessoa com menor salário R$ " << menor_salario << std::endl;

  return 0;
}
