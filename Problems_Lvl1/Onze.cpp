#include <iostream>
#include <bitset>
using namespace std;

int main() {

  for(int i=0;i<=15;i++){
    cout << "Dec: " << dec << i << endl;
    cout << "Bin: " << bitset<4>(i) << endl;
    cout << "Oct: " << oct << i << endl;
    cout << "Hex: " << hex << i << endl;
    cout << endl;

  }

  return 0;
}
