#include <iostream>
using namespace std;
int main(){
	int V, aux;
	int vetor[20];
	for(int X = 0; X<20; X++){
		cin >> V;
		vetor[X] = V;
	}
	for(int X = 0; X<20 and X != 10; X++){
		aux = vetor[X];
		vetor[X] = vetor[19-X];
		vetor[19-X] = aux;
	}
	for(int X = 0; X<20; X++){
		cout << "N[" << X << "] = " << vetor[X] << endl;
	}
}
