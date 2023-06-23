#include <iostream>
#include <set>
using namespace std;
int main(){
	string N;
	string A, espaco;
	int X, count = 1;
	cin >> X;
	for(int i = 0; i<=X; i++){
		set<string>compras;
		set<string>::iterator it;
		getline(cin,N);
		for(int i=0; i<N.size(); i++){
			if(N[i] != ' '){
				A = A + N[i];
			}
			if(N[i] == ' ' or i == N.size() - 1){
				compras.insert(A);
				A.clear();
			}
			for(it = compras.begin(); it !=compras.end(); it++){
				espaco = *it;
			}
		}
		for(it = compras.begin(); it !=compras.end(); it++){
			if(*it == espaco){
				cout << *it << endl;
				count = 0;
			}
			else{
				cout << *it << " ";

			}
		}
		A.clear();
	}
}
