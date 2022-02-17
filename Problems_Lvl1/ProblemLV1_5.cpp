#include <iostream>
using namespace std;

int main(){

  float N, Nd;

  cout << "Digite o número de lados do polígono: " <<endl;
  cin >> N;

  if(N>3){
    Nd = (N*(N-3))/2;
    cout << "Numeros de Diagonais: " << Nd << endl;

  }else{
    cout << "Não Possui Diagonais" << endl;
  }

  return 0;

}
