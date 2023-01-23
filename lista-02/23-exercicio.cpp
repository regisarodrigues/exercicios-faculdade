#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  int codigo = 0, qtd = 0, precoUnit = 0;
  float totalNota = 0, desconto = 0, valDesconto = 0, valFinalNota = 0;

  std::cout << "Código produto: ";
  std::cin >> codigo;
  std::cout << "Quantidade produto: ";
  std::cin >> qtd;

  if (codigo >= 1 && codigo <= 10)
  {
    precoUnit = 10;
  }
  else if (codigo >= 11 && codigo <= 20)
  {
    precoUnit = 15;
  }
  else if (codigo >= 21 && codigo <= 30)
  {
    precoUnit = 20;
  }
  else if (codigo >= 31 && codigo <= 40)
  {
    precoUnit = 30;
  }
  else
  {
    precoUnit;
  }

  totalNota = qtd * precoUnit;

  if (totalNota < 250)
  {
    desconto = 0.05;
  }
  else if (totalNota >= 250 && totalNota <= 500)
  {
    desconto = 0.10;
  }
  else
  {
    desconto = 0.15;
  }

  valDesconto = (totalNota * desconto);
  valFinalNota = totalNota - valDesconto;

  if (precoUnit != 0)
  {
    std::cout << std::fixed << std::setprecision(2) << "Preço unitário R$ " << precoUnit << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Total nota R$ " << totalNota << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Valor desconto R$ " << valDesconto << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Total final da nota R$ " << valFinalNota << std::endl;
  }
  else
  {
    std::cout << "Código produto inválido!" << std::endl;
  }

  return 0;
}
