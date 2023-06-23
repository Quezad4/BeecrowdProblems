#include <bits/stdc++.h>
using namespace std;

map<string,int> m;

int main(){
	int N, count = 0;
	string palavra, blankspace;
	cin >> N;
	cin.ignore();
	getline(cin,blankspace);
	for(int i = 0; i<N; i++){
		getline(cin, palavra);
		while(palavra != ""){
			m[palavra] ++;
			count++;
			getline(cin,palavra);
		}
		for(auto x: m){
			cout << fixed;
			cout.precision(4);
			cout << x.first << " " << (double)x.second/count*100<< "\n";
		}
		m.clear();
		if(i < N-1){
			cout << endl;
		}
		count = 0;
	}
}
