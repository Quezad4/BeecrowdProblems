#include <iostream>
using namespace std;
int main(){
	int N, K, O, ntot;
	ntot = 0;
	K = 0;
	O = 0;
	cin >> N;
	for(int X = 0; X<N; X++){
		cin >> K;
		for(int Y = 0; Y<K; Y++){
			cin >> O;
			ntot += O;	
		}
		cout << ntot - (K-1) << endl;
		ntot = 0;
	
	}
}
