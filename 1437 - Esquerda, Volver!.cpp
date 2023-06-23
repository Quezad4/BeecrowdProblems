#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int valor, N, X;
	char letra;
	valor = 0;
	N = 1;
	for(;N!= 0;){
		cin >> N;
		for(int X = 0; X<N and N!= 0; X++){
			cin >> letra;
			if(letra == 'D'){
				valor++;
			}
			else{
				valor--;
			}
			if(valor == 4 or valor == -4){
				valor = 0;
			}
		}
		if(valor == 0 and N != 0){
			cout << "N" << endl;
		}
		else{
			if(valor == 1 or valor == -3){
			cout << "L" << endl;
			valor = 0;
			}
			else{
				if(valor == 2 or valor ==-2){
				cout << "S" << endl;
				valor = 0;
				}
				else{
					if(valor == 3 or valor == -1){
					cout << "O" << endl;
					valor = 0;
					}
				}
			}
		}
	}
}
