#include <iostream>

int main(int argc, char const *argv[])
{
  int senha = 0;
  std::string username;

  std::cout << "************Login************" << std::endl;
  std::cout << "Informe o usuario: ";
  std::cin >> username;
  std::cout << "Digite a senha: ";
  std::cin >> senha;

  if (senha == 4531)
  {
    std::cout << "Bem vindo!" << std::endl;
  }
  else
  {
    std::cout << "Senha invalida!" << std::endl;
  }

  return 0;
}
