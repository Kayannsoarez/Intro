#include <iostream>
using namespace std;

int main() {
  int x, y, z;

  cout << "Digite 3 Numeros para Ordenar: " << endl;
  cin >> x;
  cin >> y;
  cin >> z;

  if(x<y && x<z){
    cout << x;

    if(y<z){
      cout << " " << y;
      cout << " " << z;
    }
    if(z<y){
      cout << " " << z;
      cout << " " << y;
    }
    if(y==z){
      cout << " " << y;
      cout << " " << z;
    }
  }

  if(y<x && y<z){
    cout << y;

    if(x<z){
      cout << " " << x;
      cout << " " << z;
    }
    if(z<x){
      cout << " " << z;
      cout << " " << x;
    }
    if(x==z){
      cout << " " << x;
      cout << " " << z;
    }
  }

  if(z<x && z<y){
    cout << z;

    if(x<y){
      cout << " " << x;
      cout << " " << y;
    }
    if(y<x){
      cout << " " << y;
      cout << " " << x;
    }
    if(x==y){
      cout << " " << x;
      cout << " " << y;
    }
  }
  return 0;
}
