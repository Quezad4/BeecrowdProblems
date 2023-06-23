#include <iostream>
using namespace std;
int main(){
	int N, valor;
	cin >> N;
	for(int X=0; X<N ; X++){
		cin >> valor;
		if(valor%2 == 0 and valor != 0){
			cout << "EVEN";
		}
		else{
			if(valor%2 != 0){
			cout << "ODD";
		}
		}
		if(valor<0){
			cout << " NEGATIVE" << endl;
		}
		else{
			if(valor>0){
			cout << " POSITIVE" << endl;
		}
		}
		if(valor == 0){
			cout << "NULL" << endl;
		}
	}
}
