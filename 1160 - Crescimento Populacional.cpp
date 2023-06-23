#include <iostream>
using namespace std;
int main(){
	int T, PA, PB, A;
	double G1, G2;
	cin >> T;
	A = 0;
	for(int X =0; X<T ; X++){
		cin >> PA >> PB >> G1 >> G2;
			while(PA <= PB){
			PA = PA + PA*G1/100;
			PB = PB + PB*G2/100;
			A++;
			if(A>100){
				break;
			}
		}
		if(A > 100){
			cout << "Mais de 1 seculo." << endl;
			A = 0;
		}
		else{
			cout << A << " anos." << endl;
			A= 0;
		}
	}
}
