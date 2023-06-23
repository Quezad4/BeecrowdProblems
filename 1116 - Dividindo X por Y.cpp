#include <iostream>
using namespace std;
int main(){
	int N;
	float valor1, valor2;
	cin >> N;
	cout << fixed;
	cout.precision(1);
	for(int X =0; X<N; X++){
		cin >> valor1 >> valor2;
		if(valor2 == 0){
			cout << "divisao impossivel" << endl;
		}
		else{
			cout << valor1/valor2 << endl;
		}
	}
}
