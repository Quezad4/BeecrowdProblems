#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int N, valor;
	cin >> N;
	for(int X = 0; X<N; X++){
		cin >> valor;
		if(valor < 2015){
			cout << 2015 - valor << " D.C." << endl;
		}
		else{
			if(valor> 2015){
				cout << abs(valor - 2015) +1 << " A.C." << endl;
			}
			else{
				cout << 1 <<" A.C." << endl;
			}
		}
	}
}
