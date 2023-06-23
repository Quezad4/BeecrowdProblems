#include <iostream>
#include <map>
using namespace std;
int main(){
	int N, M, numero, count = 0, soma = 0;
	string palavra, X;
	cin >> N >> M;
	map<string,int>valor;
	for(int i = 0; i<N; i++){
		cin >> palavra >> numero;
		valor.insert(make_pair(palavra,numero));
	}
	while(M != count){
		cin >> X;
		if(X == "."){
			count ++;
			cout << soma << endl;
			soma = 0;
		}
		else{
			soma += valor[X];
		}
		
	}
}
