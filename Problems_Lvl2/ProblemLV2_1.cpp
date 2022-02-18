#include <iostream>
using namespace std;

int main() {
  
  int ano;

  cout << "Digite o Ano: " << endl;
  cin >> ano;

  if(ano%4==0 && (ano%100!=0 || ano%400==0)){
    cout << "Ano Bissexto: " << ano << endl;

  }else{
    cout << "Nao Bissexto: " << ano << endl;

  }

  return 0;
  
}
