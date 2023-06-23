#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N, X, valor;
	cin >> N;
	while(N != 0){
		vector<int>vetor1;
		vector<int>vetor2;
		for(int i = 0; i<N; i++){
			cin >> X;
			vetor1.push_back(X);
			vetor2.push_back(X);
		}
		sort(vetor2.begin(), vetor2.end());
		valor = vetor2[N-2];
		for(int i = 0; i<N; i++){
			if(vetor1[i] == valor){
				cout << i+1 << endl;
			}
		}
		cin >> N;
	}
	
}
