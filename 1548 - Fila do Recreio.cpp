#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N, count = 0, M, P;
	cin >> N;
	for(int i = 0; i<N; i++){
		vector<int>notas1;
		vector<int>notas2;
		cin >> M;
		for(int i = 0; i<M; i++){
			cin >> P;
			notas1.push_back(P);
			notas2.push_back(P);
		}
		sort(notas2.begin(),notas2.end());
		reverse(notas2.begin(),notas2.end());
		for(int i = 0; i<M; i++){
			if(notas1[i] == notas2[i]){
				count ++;
			}
		}
		cout << count << endl;
		count = 0;
	}
}
