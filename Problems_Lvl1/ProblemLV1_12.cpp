#include <iostream>
using namespace std;

int main() {
  unsigned short n;

  cout << "Digite o Inteiro: " << endl;
  cin >> n;

  for(int bit=15;bit>=0;bit--){

    cout << ((n & (1 << bit)) >> bit);

  }
  
  return 0;

}
