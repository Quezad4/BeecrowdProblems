#include <iostream>
using namespace std;
 int verif(int *v1, int *v2){
	int soma = 0, count = 0;
	for(int i = 0; i<5; i++){
		if(v1[i] == v2[i]){
			return 2;
		}
	}
	return 1;
}
int main (){
	int X, somafinal;
	int vetor1[5];
	int vetor2[5];
	for(int i =0; i<5; i++){
		cin >> X;
		vetor1[i] = X;
	}
	for(int i = 0; i<5; i++){
		cin >> X;
		vetor2[i]= X;
	}
	somafinal = verif(vetor1,vetor2);
	if(somafinal == 1){
		cout << "Y" << endl;
	}
	else{
		cout << "N" << endl;
	}
}
