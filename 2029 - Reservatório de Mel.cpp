#include <iostream>
using namespace std;
int main(){
	double diametro, volume, raio, area, altura;
	while(cin>> volume){
		cin >> diametro;
		raio = diametro/2;
		area = (3.14)*raio*raio;
		altura = volume/area;
		cout << fixed;
		cout.precision(2);
		cout << "ALTURA = " << altura << endl;
		cout << "AREA = " << area << endl;
	}
}
