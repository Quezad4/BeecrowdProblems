#include <iostream>
using namespace std;
int main(){
	int N; cin >> N;
	float P, valorTot, menor = 1000000;
	int G;
	for(int i = 0; i<N; i++){
		cin >> P >> G;
		valorTot = (P*1000)/G;
		if(menor>valorTot){
			menor = valorTot;
		}
		
	}
	cout << fixed;
	cout.precision(2);
	cout << menor << endl;
}
