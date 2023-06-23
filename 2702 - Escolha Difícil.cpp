#include <iostream>
using namespace std;
int main (){
	int R1, R2, R3, P1, P2, P3, X, Y, Z, TOT;
	cin >> R1 >> R2 >> R3 >> P1 >> P2 >> P3;
	X = 0;
	Y = 0;
	Z = 0;
	if(R1<P1){
		X = P1 - R1;
	}
	
		if(R2<P2){
			Y = P2 - R2;
		}
		
			if(R3<P3){
				Z = P3 - R3;
				
			}
		
	
	TOT = X+Y+Z;
	cout << TOT << endl;
}
