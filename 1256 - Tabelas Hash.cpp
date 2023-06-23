#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N, M, C, X, count = 0;
	char barra = 92;
	cin >> N;
	for(int i = 0; i<N; i++){
		vector<int>numeros;
		vector<int>::iterator it;
		cin >> M >> C;
		for(int i = 0; i<C; i++){
			cin >> X;
			numeros.push_back(X);
		}
		for(int i = 0; i<M; i++){
			cout << i << " ->";
			for(it = numeros.begin(); it != numeros.end(); it++){
				if(*it%M == i){
					cout<< " " << *it << " ->";
				}
				if(it == numeros.end() - 1){
					cout << " "<< barra << endl;
				}
			}
		}
		if(count != N-1){
			count ++;
			cout << endl;
		}
	}
}
