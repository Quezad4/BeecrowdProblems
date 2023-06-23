#include <iostream>
using namespace std;
int main(){
	int N, A, B;
	cin >> N >> A >> B;
	if(N<A+B){
		cout << "Deixa para amanha!" << endl;
	}
	else{
		cout << "Farei hoje!" << endl;
	}
}
