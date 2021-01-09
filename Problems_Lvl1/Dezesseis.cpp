#include <iostream>
#include <cmath>
using namespace std;

int main(){

  float x1,x2,x3,x4;
	float Ma, Mg;

	cout << "Digite X1: " << endl;
	cin >> x1;
	cout << "Digite X2: " << endl;
	cin >> x2;
	cout << "Digite X3: " << endl;
	cin >> x3;
	cout << "Digite X4: " << endl;
	cin >> x4;

	Ma = (x1+x2+x3+x4)/4;
	cout << "Media Aritmetica: "<< endl;
	cout << Ma << endl;

	float g = (x1*x2*x3*x4);
	Mg = pow (g , 1.0/4);
	cout << "Media Geometrica: "<< endl;
	cout << Mg << endl;

  return 0;
}
