#include <iostream>
using namespace std;


int main() {

  unsigned short hora, min, seg;

  cout << "Digite Hora: " << endl;
  cin >> hora;
  cout << "Digite Minuto: " << endl;
  cin >> min;
  cout << "Digite Segundo: " << endl;
  cin >> seg;

  if(hora>=0 && hora<=24){
    if(hora>=0 && (hora<=5 && min<=59)){
      cout << "Madrugada" << endl;
    }
    if(hora>=6 && (hora<=11 && min<=59)){
      cout << "Manha" << endl;
    }
    if(hora>=12 && (hora<=17 && min<=59)){
      cout << "Tarde" << endl;
    }
    if(hora>=18 && (hora<=23 && min<=59)){
      cout << "Noite" << endl;
    }

    }else{
      cout << " ERROR 404 " << endl;
    }

  return 0;
}
