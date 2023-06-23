#include <iostream>
using namespace std;
int main(){
	int N, Y;
	cin >> N;
	long long int fibo[60];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int X = 2; X<60; X++){
		fibo[X] = 0;
	}
	for(int X = 2; X<60; X++){
		fibo[X] +=  fibo[X-2] + fibo[X-1];
	}
	for(int X = 0; X<N; X++){
		cin >> Y;
		if(Y == 60){
			cout << "Fib(60) = 1548008755920" << endl;
		}
		else{
			cout << "Fib(" << Y << ") = " << fibo[Y] << endl;
		}
	}
}
