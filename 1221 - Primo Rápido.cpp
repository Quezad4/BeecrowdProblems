#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int N, numero, i, R;
	cin >> N;
	for(int X = 0; X<N;X++){
		cin >> numero;
		R = sqrt(numero);
		for(i = 2; i<=R and numero%i != 0; i++){
		}
		if(i>R){
			cout << "Prime" << endl;
		}
		else{
			cout << "Not Prime" << endl;
		}
	}
}
