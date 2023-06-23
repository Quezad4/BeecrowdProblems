#include <iostream>
using namespace std;
int main(){
	int N, V1, V2, V3;
	V1 = 1;
	V2 = 2;
	V3 = 3;
	cin >> N;
	for(int X = 0; X<N; X++,V1++,V2++,V3++){
		cout << V1<< " " << V2 << " " << V3 << " PUM" << endl;
		V1 = V3+1;
		V2 = V3+2;
		V3 = V3+3;
	}
}
