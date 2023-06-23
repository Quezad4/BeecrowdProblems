#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int vet[33];
int vet1[33];
int vettot[33];

void f(long long int N, long long int M){
    for(int i = 0; N>=1; i++){
        vet[i] = N%2;
        N = N/2;
    }
    for(int i = 0; M>=1; i++){
		vet1[i] = M%2;
		M = M/2;
	}
}

int main(){
    long long int N, M, soma = 0;
    while(cin >> N >> M){
        memset(vet,0,sizeof(vet));
        memset(vet1,0,sizeof(vet1));
        f(N,M);
        for (int i = 0; i<33; i++){
			if(vet[i] == 0 and vet1[i] == 0){
				vettot[i] = 0;
			}
			if(vet[i] == 1 and vet1[i] == 0){
				vettot[i] = 1;
			}
			if(vet[i] == 0 and vet1[i] == 1){
				vettot[i] = 1;
			}
			if(vet[i] == 1 and vet1[i] == 1){
				vettot[i] = 0;
			}
		}
		for(int i = 0; i<33; i++){
			if(vettot[i] == 1)soma += pow(2,i);
		}
		cout << soma << endl;
		soma = 0;
        
    }
}
