#include <bits/stdc++.h>
using namespace std;


vector<int> v;
set<bool> s;
int main(){
	int soma = 0, count = 0;
	int N, x;
	int vet1[25],vet2[25];
	while(cin >> N){
		for(int i = 0; i<N; i++){
			cin >> x;
			vet1[i] = x; 
		}
		for(int i = 0; i<N; i++){
			cin >> x;
			vet2[i] = x; 
		}
		//calc ans
		for(int i = 0; i<N;i++){
			int num = N-1;
			while(vet2[num] != vet1[i]){
				for(int j = i+1; j<N; j++){
					if(vet1[j] == vet2[num]){
						count++;
					}
				}
				if(count == 0){
					soma++;
					
				}
				count = 0;
				num--;
				
			}
		}
		cout << soma << endl;
		soma = 0;
		
	}
}
