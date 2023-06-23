#include <iostream>
using namespace std;
int main(){
	int V;
	int N[10];
	cin >> V;
	for(int X =0; X<10; X++){
		N[X] = 0;
	}
	N[0] = V;
	cout << "N[0] = " << V << endl;
	for(int X =1; X<10; X++){
		N[X] = N[X-1]*2;
		cout << "N[" << X << "] = " << N[X] << endl;
	}
}
