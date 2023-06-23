#include <iostream>
using namespace std;
int main(){
	long long int FP, FH, A, V;
	int i = 0;
	while(cin >> FP >> FH){
		i++;
		A = ((FP*5)+(FH*6))/2;
		V = A+2 - (FP+FH);
		cout <<"Molecula #" <<i<< ".:." << endl; 
		cout <<"Possui " << V << " atomos e " << A << " ligacoes" << endl;
		cout << endl;
	}
}
