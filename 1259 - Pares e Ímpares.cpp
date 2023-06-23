#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N, j = 0, l = 0, valor;
	int vetorpar[100000], vetorimpar[100000];
	cin >> N;
	for(int i =0; i<N; i++){
		cin >> valor;
		if(valor%2 == 0){
			vetorpar[l] = valor;
			l++;
		}
		else{
			vetorimpar[j] = valor;
			j++;
		}
	}
	sort(vetorpar, vetorpar+l);
	for(int i = 0; i<l; i++){
		cout << vetorpar[i] << endl;
	}
	sort(vetorimpar, vetorimpar+j);
	reverse(vetorimpar, vetorimpar+j);
	for(int i = 0; i<j; i++){
		cout << vetorimpar[i] << endl;
	}
}
