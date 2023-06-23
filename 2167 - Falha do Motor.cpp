#include <iostream>
using namespace std;
int main(){
	int N, R;
	cin >> N;
	int vetor[N];
	for(int X = 0; X<N; X++){
		cin >> R;
		vetor[X] = R;
	}
	for(int X = 1; X<N+1; X++){
		if(vetor[X]< vetor[X-1]){
			cout << X+1 << endl;
			break;
		}
		else{
			if(X == N){
				cout << "0" << endl;
			}
		}
	}
}
