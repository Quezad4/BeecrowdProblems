#include <iostream>
using namespace std;
int main(){
	int N, C, aux;
	cin >> N;
	aux = 0;
	for(int X = 0; X<N; X++){
		cin >> C;
		if(C == 1){
			aux ++;
		}
	}
	cout << aux << endl;
}
