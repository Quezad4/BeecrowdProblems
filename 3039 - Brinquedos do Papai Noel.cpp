#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int N, M, F;
	string nome, letra;
	M = 0;
	F = 0;
	cin >> N;
	for(int X = 0; X<N; X++){
		cin >> nome >> letra;
		if(letra == "F"){
			F++;
		}
		else{
			M++;
		}
	}
	cout << M << " carrinhos" << endl;
	cout << F << " bonecas" << endl;
}
