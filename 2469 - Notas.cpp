#include <iostream>
using namespace std;
int main(){
	int count, countot, valor, N, posicao, maior;
	cin >> N;
	count, countot = 0;
	int vetor[N];
	for(int X = 0; X<N; X++){
		cin >> valor;
		vetor[X] = valor;
	}
	for(int Y = 0; Y<N; Y++){
		for(int X = 0; X<N; X++){
			if(vetor[Y]== vetor[X]){
				count ++;
			}
		}
		if(count>countot){
				countot = count;
				posicao = Y;
			}
		if(count == countot){
			if(vetor[posicao]>vetor[Y]){
				posicao = posicao;
			}
			else{
				posicao = Y;
			}
		}
		count = 0;
	}
	maior = 0;
	for(int X = 0; X<N; X++){
		if(maior<vetor[X]){
			maior = vetor[X];
		}
	}
	if(countot == 0){
		cout << maior << endl;
	}
	else{
		cout << vetor[posicao] << endl;
	}
}
	
