#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int Xa, Xb, Xc, Ya, Yb, Yc, Det, A;

  cout << "Digite Xa: " << endl;
  cin >> Xa;
  cout << "Digite Xb: " << endl;
  cin >> Xb;
  cout << "Digite Xc: " << endl;
  cin >> Xc;

  cout << "Digite Ya: " << endl;
  cin >> Ya;
  cout << "Digite Yb: " << endl;
  cin >> Yb;
  cout << "Digite Yc: " << endl;
  cin >> Yc;

  Det = (Xa*Yb*1)+(Ya*1*Xc)+(1*Xb*Yc)-(Xc*Yb*1)-(Yc*1*Xa)-(1*Xb*Ya);
  cout << "Determinante: " << Det << endl;

  if(Det!=0){
    A = fabs(Det)/2;
    cout << "Area do Triangulo: " << A << endl;

  }else{
    cout << "Não é um Triangulo." << endl;
  }

  return 0;
}
