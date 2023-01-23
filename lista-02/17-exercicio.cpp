#include <iostream>

int main(int argc, char const *argv[])
{
  int senha = 0;
  std::string username;

  std::cout << "************Login************" << std::endl;
  std::cout << "Usuário: ";
  std::cin >> username;
  std::cout << "Senha: ";
  std::cin >> senha;

  if (senha == 4531)
  {
    std::cout << "Bem vindo!" << std::endl;
  }
  else
  {
    std::cout << "Senha inválida!" << std::endl;
  }

  return 0;
}
