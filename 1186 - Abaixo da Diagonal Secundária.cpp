#include <iostream>
#include <string.h>
using namespace std;
int main(){
	float soma, media, X;
	string letra;
	float matriz[12][12];
	cin >> letra;
	soma = 0;
	for(int i = 0; i<12; i++){
		for(int j = 0; j<12; j++){
			cin >> matriz[i][j];
		}
	}
	X = 1;
	for(int i = 11; i>0; i--, X++){
		for(int j = X; j<12; j++){
			soma += matriz[i][j];
		}
	}
	cout << fixed;
	cout.precision(1);
	if(letra == "S"){
		cout << soma << endl;
	}
	else{
		cout << soma/66 << endl;
	}
}
