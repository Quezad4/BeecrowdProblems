#include <iostream>
using namespace std;
int main(){
	int aux, N, V1, V2;
	cin >> N;
	V1 = 0;
	V2 = 1;
	cout << V1 << " " << V2 << " ";
	for(int X = 2; X<N; X++){
		if(X != N-1){
			aux = V1;
			V1 = V2;
			 V2 = V1 + aux;
			 cout << V2 << " ";	
		}
		else{
			if(N-1 == X){
				aux = V1;
				V1 = V2;
			 	V2 = V1 + aux;
				cout << V2 << endl;
			}
		}
	}
}
