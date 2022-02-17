#include <iostream>
using namespace std;

int main(){

  int hora, minuto, segundos;

  cout << "Digite a Hora: " << endl;
  cin >> hora;

  cout << "Digite os Minutos: " << endl;
  cin >> minuto;

  cout << "Digite os Segundos: " << endl;
  cin >> segundos;

  if(hora>+0){
    if(minuto>=0 && minuto<=59 && segundos>=0 && segundos<=59){
      cout << "Total de Segundos: " << endl;
      cout << segundos + (minuto*60) + (hora*3600) << "s" << endl;

    }
  }

  return 0;
}
