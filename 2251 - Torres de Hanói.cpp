#include <iostream>
long int fexp (long int x, long int e){
	if(e == 0) return 1;
	if(e%2){
		return x *fexp(x*x, e/2);
	}
	else{
		return fexp(x*x, e/2);
	}
}
using namespace std;
int main(){
	int N;
	cin >> N;
	int i = 1;
	while(N != 0){
		cout << "Teste " << i << endl;
		cout << fexp(2,N) -1 << endl;
		i++;
		cout << endl;
		cin >> N;
	}
}
