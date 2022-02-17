#include <iostream>
#include <cmath>
using namespace std;

int main() {

  char letra, convert;

  cout << "Digite a Letra para Converter: " << endl;
  cin >> letra;

  if(letra>='A' && letra<='Z'){
    convert = letra + pow(2,5);
    cout << "Letra Convertida: " << convert << endl;

  }
  if(letra>='a' && letra<='z'){
    convert = letra - pow(2,5);
    cout << "Letra Convertida: " << convert << endl;

  }
  return 0;
}
