#include <iostream>
using namespace std;

int main() {
  unsigned int H_segundos, hora, minuto, segundos;

  cout << "Digite a Hora em Segundos: " << endl;
  cin >> H_segundos;

  hora = H_segundos/3600;
	minuto = (H_segundos-(hora*3600))/60;
	segundos = (H_segundos-(hora*3600)-(minuto*60));

  cout << "\nHorario: ";
  cout << hora << "h";
  cout << minuto << "min";
  cout << segundos << "s";

  return 0;

}
