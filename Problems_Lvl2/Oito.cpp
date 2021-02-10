#include <iostream>
using namespace std;

int main() {

  int n ,num, invert, digito;
  cout << "Digite: " << endl;
  cin >> n;

  if(n>=1 && n<=9999){
    num = n;
    invert = 0;

    for(int i=0;num!=0;i++){
      digito = num % 10;
      invert = (invert * 10) + digito;
      num = num / 10;
    }

    if(n == invert){
      cout << "Número Palindromo." << endl;
    }else{
      cout << "Número não Palindromo." << endl;
    }

  }else{
    cout << "Error: Digite Número Valido." << endl;
  }
  
  return 0;
}
