#include <iostream>
using namespace std;
int main(){
	int N, A, B, count1 = 0, count2 = 0;
	cin >> N;
	while( N!= 0){
		for(int i = 0; i<N; i++){
			cin >> A >> B;
			if(A>B){
				count1 ++;
			}
			if(B>A){
				count2 ++;
			}
		}
		cout << count1 <<  " " << count2 << endl;
		count1 = 0;
		count2 = 0;
		cin >> N;
	}
}
