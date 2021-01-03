#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float a, b, c, s, At;

  cout << "Digite a:" << endl;
  cin >> a;

  cout << "Digite b:" << endl;
  cin >> b;

  cout << "Digite c:" << endl;
  cin >> c;

  s = (a+b+c)/2;

  At = sqrt(s*(s-a)*(s-b)*(s-c));

  cout << " Área do triângulo: " << At << endl;

  return 0;

}
