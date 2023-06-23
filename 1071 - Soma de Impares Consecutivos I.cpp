#include <iostream>
using namespace std;
int soma = 0, count = 0;
int kaykymomoli(int x, int y){
	if(x == y){
		return 0;
	}
	else{
		if(x%2 != 0 and count != 0 ){
			soma += x;
		}
		count ++;
		kaykymomoli(x+1,y);
	}
}
int main(){
	int N, M, aux;
	cin >> N >> M;
	if(N> M){
		aux = N;
		N = M;
		M = aux;
	}
	kaykymomoli(N,M);
	cout << soma << endl;
}
