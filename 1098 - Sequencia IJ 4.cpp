#include <iostream>
using namespace std;
int main(){
	float I, J;
	I = 0;
	J = 1;
	for(int X = 0; X<33; X++,J++){
		if(X%3 == 0 and X!= 0){
			I += 0.2;
			J += 0.2 - 3;
		}
		cout << "I=" << I << " J=" << J << endl;
	}
}
