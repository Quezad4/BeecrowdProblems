#include <iostream>
using namespace std;
int verif(int x, int y, char Aa){
	if(x == y){
		return x*y;
		
	}
	if(Aa>= 'A' and Aa<='Z'){
		return y - x;
	}
	if(Aa>= 'a' and Aa<='z')
	return y + x;
}


int main(){
	int N, A,B, valor;
	char letra;
	cin >> N;
	for(int i = 0; i<N; i++){
		cin >> A >> letra >> B;
	valor =	verif(A,B,letra);
	cout << valor << endl;
	}

}
