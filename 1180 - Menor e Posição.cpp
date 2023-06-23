#include <iostream>
using namespace std;
int main(){
	int N, posicao, valorpequeno, valor;
	cin >> N;
	int valores[N];
	valorpequeno = 1001;
	for(int X = 0; X<N; X++){
		cin >> valor;
		if(valorpequeno>valor){
			valorpequeno = valor;
			posicao = X;
		}
	}
	cout << "Menor valor: " << valorpequeno << endl;
	cout << "Posicao: " << posicao << endl;
}
