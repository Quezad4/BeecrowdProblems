#include <iostream>
using namespace std;
int main(){
	int vetor[1000];
	int V, Y;
	cin >> V;
	for(int X = 0, Y = 0; X<1000; X++, Y++){	
		vetor[X] = Y;
		if(Y == V){
			Y = 0;
			vetor[X] = Y;
		}
		cout << "N[" << X << "] = " << vetor[X] << endl;
	}
}
