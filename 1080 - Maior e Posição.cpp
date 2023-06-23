#include <iostream>
using namespace std;
int main(){
	int valor, valorn, Y;
	valorn = 0;
	for(int X=1;X<=100;X++){
		cin >> valor;
		if(valorn<valor){
			valorn = valor;
			Y = X;
		}
	}
	cout << valorn << endl;
	cout << Y << endl;
}
