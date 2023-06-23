#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>numeros;
	int NC, N, K, M, count = 1, eliminados = 0;
	cin >> NC;
	for(int i = 1; i<NC+1; i++){
		cin >> N >> K;
		for(int j = 1; j<N+1; j++){
			numeros.push_back(j);
		}
		for(int g = 0; numeros.size() != 1; g++){
			if(count == K){
				numeros.erase(numeros.begin()+g);
				count = 1;
				eliminados++;
				g--;
			}
			else{
				count++;
			}
			if( g == N - eliminados - 1){
				g = -1;
			}
		}
		cout << "Case " << i << ": " << numeros[0] << endl;
		numeros.clear();
		eliminados = 0;
		count = 1;
	}
}
