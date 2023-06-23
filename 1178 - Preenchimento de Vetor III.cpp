#include <iostream>
using namespace std;
int main(){
	double V;
	double N[100];
	cin >> V;
	for(int X =0; X<100; X++){
		N[X] = 0;
	}
	N[0] = V;
	cout << fixed;
	cout.precision(4);
	cout << "N[0] = " << V << endl;
	for(int X =1; X<100; X++){
		N[X] = N[X-1]/2;
		cout << fixed;
		cout.precision(4);
		cout << "N[" << X << "] = " << N[X] << endl;
	}
}
