#include <iostream>
#include <string.h>
using namespace std;
int main(){
	double soma, media, X, Y;
	string letra;
	double matriz[12][12];
	cin >> letra;
	soma = 0;
	for(int i = 0; i<12; i++){
		for(int j = 0; j<12; j++){
			cin >> matriz[i][j];
		}
	}
	X = 11;
	Y = 1;
	for(int i = 0 ; i<5; i++, X--, Y++){
		for(int j = Y; j<X; j++){
			soma += matriz[i][j];
		}
	}
	cout << fixed;
	cout.precision(1);
	if(letra == "S"){
		cout << soma << endl;
	}
	else{
		cout << soma/30 << endl;
	}
}
