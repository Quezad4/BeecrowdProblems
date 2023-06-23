#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N, M, k= 0, j= 0, valor;
	char voud;
	cin >> N >> M;
	char vet[N*M*2];
	int vetorvida[100000];
	int vetordis[100000];
	for(int i = 0; i<N*M; i++){
		cin >> valor >> voud;
		if(voud == 'V'){
			vetorvida[j] = valor;
			j++;
		}
		if(voud == 'D'){
			vetordis[k] = valor;
			k++;
		}
	}
	sort(vetorvida, vetorvida+j);
	reverse(vetorvida, vetorvida+j);
	for(int i = 0; i<j; i++){
		cout << vetorvida[i] << "V" << endl;
	}
	sort(vetordis, vetordis+k);
	reverse(vetordis, vetordis+k);
	for(int i = 0; i<k; i++){
		cout << vetordis[i] << "D" << endl;
	}
}
