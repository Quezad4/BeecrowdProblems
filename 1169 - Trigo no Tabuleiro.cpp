#include <iostream>
using namespace std;
long long int fexp(long long int x, long long int e){
	if(e == 0) return 1;
	if(e%2){
		return x*fexp(x*x, e/2);
	}
	else{
		return fexp(x*x, e/2);
	}
}



int main(){
	int b, N;
	long long a;
	cin >> N;
	for(int i = 0; i<N; i++){
		cin >> b;
		a = fexp(2,b);
		if(b == 63){
			cout << "768614336404564 kg" << endl;
		}
		else{
			if(b == 64){
				cout << "1537228672809129 kg" << endl;
			}
			else{
				cout << (a/12)/1000 << " kg" << endl;
			}
		}
	}

}
