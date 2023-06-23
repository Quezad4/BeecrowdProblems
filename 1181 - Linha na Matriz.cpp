#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
	int linha;
	float soma, media;
	string letra;
	float matriz[12][12];
	cin >> linha >> letra;
	for(int i = 0; i<12; i++){
		for(int j = 0; j<12; j++){
			cin >> matriz[i][j];
		}
	}
	if(letra == "S"){
		soma = 0;
		for(int j = 0; j<12; j++){
			soma += matriz[linha][j];
		}
		cout << fixed;
		cout.precision(1);
		cout << soma << endl;
	}
	else{
		media = 0;
		for(int j = 0; j<12; j++){
			media += matriz[linha][j];
		}
		cout << fixed;
		cout.precision(1);
		cout << media/12 << endl;
	}
}
