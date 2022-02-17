#include <iostream>
#include <cmath>
using namespace std;

int main() {

  float numero, x,y;

  cout << "Digite o Numero que deseja calcular: " << endl;
  cin >> numero;

  y = (log10(numero)/log10(2));
  cout << "Log2: " << y << endl;

  return 0;

}
