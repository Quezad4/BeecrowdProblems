#include <iostream>
using namespace std;
int main(){
	int altmin, altmax, valor, valortot, N;
	valortot = 0;
	while(cin>> N){
		cin >> altmin >> altmax;
		for(int X = 0; X<N; X++){
			cin >> valor;
			if(valor>=altmin and valor<=altmax){
				valortot ++;
			} 
		}
		cout << valortot << endl;
		valortot = 0;
	}
}
