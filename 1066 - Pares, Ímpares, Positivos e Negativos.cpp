#include <iostream>
using namespace std;
int main(){
	int valor, par, impar, pos, neg;
	par = 0;
	impar = 0;
	pos = 0;
	neg = 0;
	for(int X = 0; X<5; X++){
		cin >> valor;
		if(valor>0){
			pos++;
		}
		else{
			if(valor<0){
			neg++;
			}
		}
		if(valor%2 == 0){
			par++;
		}
		else{
			impar++;
		}
	}
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;
}
