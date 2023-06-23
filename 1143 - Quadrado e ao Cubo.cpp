#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	for(int X = 1; X<=N; X++){
		cout << X << " " << pow(X,2) << " " << pow(X,3) << endl;
	}
}
