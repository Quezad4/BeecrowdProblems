#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;
string a;
int main(){
	int N;cin >> N;
	for(int i = 0; i<N; i++){
		cin >> a;
		sort(a.begin(),a.end());
		do{
			cout << a << endl;
		}while(next_permutation(a.begin(), a.end()));
		cout << endl;
	}
}
		


