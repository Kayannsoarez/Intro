#include <iostream>
#include <cmath>

using namespace std;

int main(){

  float FV, pv,i,n;

  cout << "Digite Montante:" << endl;
  cin >> pv;
  cout << "Digite Taxa de Rendimento:" << endl;
  cin >> i;
  cout << "Digite Quantidade de Periodos:" << endl;
  cin >> n;

  FV = (pv*pow((1+(i/100)), n));
  cout << "Valor Total: " << FV << endl;

  return 0;
}
