#include <iostream>
using namespace std;

int main() {

  int n ,num, invert, digito;
  cout << "Digite: " << endl;
  cin >> n;

  num = n;
  invert = 0;

  for(int i=0;num!=0;i++){
    digito = num % 10;
    invert = (invert * 10) + digito;
    num = num / 10;
  }
  if(n == invert){
    cout << "Palindromo: " << endl;
  }else{
    cout << "Nao Palindromo: " << endl;
}
  return 0;
}
