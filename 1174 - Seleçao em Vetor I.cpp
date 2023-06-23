#include <iostream>
using namespace std;
int main(){
	float V;
	float vetor[100];
	for(int X = 0; X<100; X++){
		cin >> V;
		if(V<=10){
			vetor[X] = V;
			cout << fixed;
			cout.precision(1);
			cout << "A[" << X << "] = " << vetor[X] << endl;
		}
		
	}
}
