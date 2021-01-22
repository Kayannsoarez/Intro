#include <iostream>
#include <cmath>
using namespace std;


int main() {

  float V, h, R, r;

  cout << "Digite o Raio da base maior: " << endl;
  cin >> R;
  cout << "Digite o Raio da base menor: " << endl;
  cin >> r;
  cout << "Digite a Altura do troco do cone: " << endl;
  cin >> h;

  if(R>0 && r>0 && h>0){
    V = ((M_PI*h)/3)*((pow(R,2))+(R*r)+(pow(r,2)));
    cout << "Volume do tronco do cone circular reto de bases paralelas: "<< V <<endl;

  }else{
    cout << "Error: Valores Negativos" << endl;
  }
  return 0;
}
