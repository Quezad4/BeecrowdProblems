#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long long int n, m, soma = 0;
	while(cin >> n >> m){
		for(int i = 0; i<n ; i++){
			int valor = pow(10,i);
			soma += m%(10*valor)/valor;
		}
		if(soma%3 == 0){
			cout << soma << " sim" << endl;
		}
		else{
			cout << soma << " nao" << endl;
		}
		soma = 0;
	}
}
