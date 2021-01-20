#include <iostream>
#include <cmath>

using namespace std;

int main(){

  float V,h,R,r;

  cout << "Digite Altura: " << endl;
	cin >> h;
	cout << "Digite Raio Maior: " << endl;
	cin >> R;
	cout << "Digite Raio  Menor " << endl;
	cin >> r;

	V = (((M_PI*h)/3)*((pow(R,2))+(R*r)+(pow(r,2))));

	cout << "Volume: " << V << endl;

	return 0;
}
