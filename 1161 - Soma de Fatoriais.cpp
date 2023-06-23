#include <iostream>
using namespace std;
int main(){
    long long int N, M, fatN = 1, fatM = 1;
	while(cin >> N){
			cin >> M;
		 for(int i = 1; i<=N; i++){
	 		fatN *= i;
	 	}
	 	for(int i = 1; i<=M; i++){
	 		fatM *= i;
		 }
		 cout << fatN + fatM << endl;
		 fatN = 1; 
		 fatM = 1;
	}
}
