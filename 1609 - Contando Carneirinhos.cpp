#include<set>
#include<iostream>
using namespace std;
int main(){
	set<int>carn;
	int N, P, X;
	cin >> N;
	for(int i  = 0; i<N; i++){
		set<int>carn;
		cin >> P;
		for(int i = 0; i<P; i++){
			cin >> X;
			carn.insert(X);
		}
		cout << carn.size() << endl;
	}
}
