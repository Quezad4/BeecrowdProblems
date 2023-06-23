#include <iostream>
using namespace std;
int count = 0;
void insertionSort(int *v, int n){
	count = 0;
	int j;
	for(int i = 1; i<n; i++){
		int aux = v[i];
		for(j = i-1; j>= 0 and v[j] > aux; j--){
				v[j+1] = v[j];
				count ++;
		}
		v[j+1] = aux;
	}
}

int main(){
	int N; cin >> N;
	int valor, X;
	for(int i = 0; i<N; i++){
		cin >> X;
		int v[X];
		for(int j = 0; j<X; j++){
			cin >> valor;
			v[j] = valor;
		}
		insertionSort(v,X);
		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}
}
