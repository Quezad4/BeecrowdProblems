#include <iostream>
using namespace std;
int main(){
	int I, J;
	I = 1;
	J = 7;
	for(int X = 0; X<15; J-- and X++){
		if(X%3 == 0 and X!= 0){
			I += 2;
			J += 5;
		}
		cout << "I=" << I << " J=" << J << endl;
	}
}
