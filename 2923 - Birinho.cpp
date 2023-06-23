#include <iostream>
using namespace std;
int main(){
	int T, A, W, C;
	cin >> T >> A >> W >> C;
	if(A>=(T*C/100)){
		cout << "critical" <<endl;
	}
	else{
		if(A>=(T*W/100)){
			cout << "warning" << endl;
		}
		else{
			cout << "OK" << endl;
		}
	}
}
