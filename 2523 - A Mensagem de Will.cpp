#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	char vetor[26];
	int lugarletra, N;
	char letra;
	while(cin >> letra){
		vetor[0] = letra;
		for(int X = 1; X<26; X++){
			cin >> letra;
			vetor[X] = letra;
		}
		cin >> N;
		for(int X = 0; X<N; X++){
			cin >> lugarletra;
			if(X<N-1){
			cout << vetor[lugarletra-1];
			}
			else{
				cout << vetor[lugarletra-1] << endl;
			}
		}
	}
	
}
