#include <iostream>
using namespace std;
int main(){
	float N, valor, valortot;
	valortot = 0;
	while(cin >> N){
		for(int X = 0; X<N; X++){
			cin >> valor;
			if(valor == 1){
				valortot ++;
			}
		}
		if(valortot>= (N*2.0)/3){
			cout << "impeachment" << endl;
			valortot = 0;
		}
		else{
			cout << "acusacao arquivada" << endl;
			valortot = 0;
		}
	}
}
