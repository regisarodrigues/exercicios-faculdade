#include <iostream>

int main(int argc, char const *argv[])
{
  int hora = 0, minutos = 0, horasMinutos = 0, minutosSegundos = 0, totalMinutos = 0;

  std::cout << "Hora: ";
  std::cin >> hora;
  std::cout << "Minutos: ";
  std::cin >> minutos;

  horasMinutos = hora * 60;
  totalMinutos = horasMinutos + minutos;
  minutosSegundos = totalMinutos * 60;

  std::cout << "Hora em minutos: " << horasMinutos << std::endl;
  std::cout << "Hora em minutos, mais valor minutos: " << totalMinutos << std::endl;
  std::cout << "Total minutos em segundos: " << minutosSegundos << std::endl;
  return 0;
}
