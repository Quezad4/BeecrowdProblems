#include <iostream>
using namespace std;
int main(){
	int A, B;
	cin >> A >> B;
	if (A>=B){
		cout << "O JOGO DUROU " << 24 - (A-B) << " HORA(S)" << endl;
	}
	else{
		cout << "O JOGO DUROU " << B-A << " HORA(S)" << endl;
	}
}
