#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int N, validade, aux;
	string carne;
	while(cin >> N){
		map<int,string>ordem;
		vector<int>numeros;
		for(int i = 0; i<N; i++){
			cin >> carne >> validade;
			ordem.insert(make_pair(validade,carne));
			numeros.push_back(validade);
		}
		sort(numeros.begin(), numeros.end());
		for(int i = 0; i<N -1; i++){
			cout << ordem[numeros[i]] << " ";
			aux = i;
		}
		cout << ordem[numeros[aux+1]] << endl;
	}
}
