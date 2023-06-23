#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int pulo, quantp, valor, vitoria;
	vitoria = 0;
	cin >> pulo >> quantp;
	int vetor[quantp];
	for(int X = 0; X<quantp;  X++){
		cin >> valor;
		vetor[X] = valor;
	}
	for(int X = 0; X<quantp-1; X++){
		if ((vetor[X+1] - vetor[X]) <= pulo and abs(vetor[X+1] - vetor[X])<= pulo){
			vitoria++;
		}
	}
	if(vitoria == quantp-1){
		cout << "YOU WIN" << endl;
	}
	else{
		cout << "GAME OVER" << endl;
	}
}
