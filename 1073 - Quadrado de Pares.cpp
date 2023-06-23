#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	for(int X = 1; X<=N; X++){
		if(X%2 == 0){
			cout << fixed;
			cout.precision(0);
			cout << X << "^2 = " << pow(X,2) <<endl;
		}
	}
}
