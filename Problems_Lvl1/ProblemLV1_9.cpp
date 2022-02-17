#include <iostream>
#include <cmath>
using namespace std;

int main() {
  short n;

  cout << "Digite o Numero: " << endl;
  cin >> n;

  for(int i=15;i>=0;i--){
    if(pow(2,i)>n){
      cout << "0";
      

    }else{
      n = n - pow(2,i);
      cout << "1" ;

    }
  }

  return 0;
}
