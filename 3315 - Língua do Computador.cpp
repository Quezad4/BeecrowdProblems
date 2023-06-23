#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int>ordenados;
	vector<int>binario;
	int valor, decimal = 0, div, resto;
	int matrizsemana[4][7];
	for(int i = 0; i<4; i++){
		for(int j = 0; j<7; j++){
			cin >> valor;
			matrizsemana[i][j] = valor;
		}
	}
	for(int i = 0; i<4; i++){
		for(int j = 0; j<7; j++){
			decimal += matrizsemana[i][j];
		}
		ordenados.push_back(decimal);
		decimal = 0;
	}
	sort(ordenados.begin(), ordenados.end());
	reverse(ordenados.begin(), ordenados.end());
	div = ordenados[0]/2;
	resto = ordenados[0]%2;
	binario.push_back(resto);
	while(div != 1){
		resto = div%2;
		div = div/2;
		binario.push_back(resto);
		 
	}
	binario.push_back(1);
	reverse(binario.begin(),binario.end());
	cout << ordenados[0] << " = ";
	for(int i = 0; i<binario.size(); i++){
		cout << binario[i];
	}
	cout << endl;
	
}
