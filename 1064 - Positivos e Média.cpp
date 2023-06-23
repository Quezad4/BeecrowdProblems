#include <iostream>
using namespace std;
int main(){
	double valor, valorn;
	int Z;
	valorn = 0;
	Z = 0;
	for(double X = 0;X<6; X++){
		cin >> valor;
		if(valor>0){
			valorn += valor;
			Z++;
		}
		
	}
	cout << fixed;
	cout.precision(1);
	cout << Z << " valores positivos" << endl;
	cout << valorn/Z << endl;
	
}
