#include <iostream>
using namespace std;

int main() {
  
  float N1, N2;
  float soma, sub, prod, div;

  cout << "Digite o Primeiro Numero: " << endl;
  cin >> N1;
  cout << "Digite o Segundo Numero: " << endl;
  cin >> N2;

  soma = N1+N2;
  cout << "Soma: " << soma << endl;

  sub = N1-N2;
  cout << "Subtração: " << sub << endl;

  prod = N1*N2;
  cout << "Produto: " << prod << endl;

  if(N2>0){
    div = N1/N2;
    cout << "Divisão: " << div << endl;

  }else{
    cout << "Divisão: " << endl;
    cout << "Error[Divisão por Zero]" << endl;
  }

  return 0 ;


}
