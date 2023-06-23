#include <iostream>
using namespace std;
int main(){
	int X, Y;
	cin >> X >> Y;
	for(int N = 1; N<=Y; N++){
		if(N%X == 0){
		cout << N << endl;
		}
		else{
			cout << N << " ";
		}
	}
}
