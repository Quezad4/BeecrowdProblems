#include <iostream>
using namespace std;
int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
	
}
int main(){
	int x, y;
	int N; cin >> N;
	for(int i = 0; i<N; i++){
		cin >> x >> y;
		cout << gcd(x,y) << endl;
	}



}
