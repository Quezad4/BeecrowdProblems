#include <iostream>
using namespace std;
int main(){
	int N; cin >> N;
	int K; cin >> K;
	int A, count = 0;
	for(int i = 0; i<N; i++){
		cin >> A;
		if(A<=0){
			count++;
		}
	}
	if(count >= K){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}
