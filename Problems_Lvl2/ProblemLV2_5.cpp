#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  float V, A, h, r;

  cout << "Digite o raio da base: " << endl;
  cin >> r;
  cout << " Digite a altura: " << endl;
  cin >> h;

  if(r>0 && h>0){
    V = ((1/3)*M_PI*pow(r,2)*h);
    A = (M_PI*r*(r+sqrt(pow(r,2)+pow(h,2))));

    cout << "Volume do cone circular reto: " << V << endl;
    cout << "Area do cone circular reto: " << A << endl;

  }else{
    cout << "Error: Valores Negativos" << endl;
  }

  return 0;
}
