#include <iostream>
#include <cmath>
using namespace std;

int main() {

  float A, V, r, R;

  cout << "Digite o raior do interior: " << endl;
  cin >> r;
  cout << "Digite o raio de rotação: " << endl;
  cin >> R;

  if(r>0 && R>0){
    A = (2*M_PI*r)*(2*M_PI*R);
    V = (M_PI*pow(r,2))*(2*M_PI*R);

    cout << "Area do Toróide: " << A << endl;
    cout << "Volume do Toróide: " << V << endl;

  }else{
    cout << "Error: Valores Negativos." << endl;
  }

  return 0;
}
