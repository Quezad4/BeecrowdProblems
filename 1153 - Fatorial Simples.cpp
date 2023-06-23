#include <iostream>
using namespace std;
int main(){
	int N, valorn;
	valorn = 1;
	cin >> N;
	for(int X = 1; X<=N;X++){
		valorn *= X;
		
	}
	cout << valorn << endl;
}
