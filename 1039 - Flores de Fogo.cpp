#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float D;
	int R1,X1,Y1,R2,X2,Y2;
	while(cin >> R1 >> X1 >> Y1>> R2>> X2 >> Y2){
		D = sqrt((X2-X1)*(X2-X1) + (Y2-Y1)*(Y2-Y1)) + R2;
		if(D <= R1){
			cout << "RICO" << endl;
		}
		else{
			cout << "MORTO" << endl;
		}
	}
}
