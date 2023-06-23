#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float A, B, C, ladoter, N;
	N = 0 ;
	while(N == 0){
		cin >> A;
		if(A == 0){
			break;
		}
		else{
		cin >> B >> C;
		ladoter = floor(sqrt((A*B)/(C/100)));
		cout << ladoter << endl;
		}
	}
			
}

