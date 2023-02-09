#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
  int voto = 0, votos_candidato_1 = 0, votos_candidato_2 = 0, votos_candidato_3 = 0, votos_candidato_4 = 0;
  int votos_bancos = 0, votos_nulos = 0, total_votos = 0;
  float porcent_votos_nulos = 0, porcent_votos_bancos = 0;

  do
  {
    std::cout << "Os votos são informados por meio de código.\n";
    std::cout << "Os códigos utilizados são:\n";
    std::cout << "1, 2, 3, 4. Votos para os respectivos candidatos.\n";
    std::cout << "5 Voto nulo.\n";
    std::cout << "6 Voto em branco.\n";
    std::cout << "0 para finalizar o conjuto de votos.\n";
    std::cout << "Seu voto: ";
    std::cin >> voto;

    if (voto >= 1 && voto <= 6)
    {
      total_votos++;
      if (voto == 1)
      {
        votos_candidato_1++;
      }
      else if (voto == 2)
      {
        votos_candidato_2++;
      }
      else if (voto == 3)
      {
        votos_candidato_3++;
      }
      else if (voto == 4)
      {
        votos_candidato_4++;
      }
      else if (voto == 5)
      {
        votos_nulos++;
      }
      else if (voto == 6)
      {
        votos_bancos++;
      }
    }
    else if (voto == 0)
    {
      std::cout << "Votação encerada com sucesso!" << std::endl
                << std::endl;
    }
    else
    {
      std::cout << "Voto inválido!" << std::endl
                << std::endl;
    }

  } while (voto != 0);

  if (total_votos > 0)
  {
    porcent_votos_bancos = ((float)votos_bancos / total_votos) * 100;
    porcent_votos_nulos = ((float)votos_nulos / total_votos) * 100;
  }

  std::cout << "Total votos candidato 1: " << votos_candidato_1 << std::endl;
  std::cout << "Total votos candidato 2: " << votos_candidato_2 << std::endl;
  std::cout << "Total votos candidato 3: " << votos_candidato_3 << std::endl;
  std::cout << "Total votos candidato 4: " << votos_candidato_4 << std::endl;
  std::cout << "Total votos bancos: " << votos_bancos << std::endl;
  std::cout << "Total votos nulos: " << votos_nulos << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Porcentagem de votos bancos sobre o total de votos: " << porcent_votos_bancos << "%." << std::endl;
  std::cout << std::fixed << std::setprecision(2) << "Porcentagem de votos nulos sobre o total de votos: " << porcent_votos_nulos << "%." << std::endl;

  return 0;
}
