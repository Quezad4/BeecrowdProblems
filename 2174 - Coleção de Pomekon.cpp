#include <iostream>
#include <set>
using namespace std;
int main(){
	set<string>s;
	int N; cin >> N;
	string x;
	for(int i = 0; i<N; i++){
		cin >> x;
		s.insert(x);
	}
	cout << "Falta(m) " << 151 - s.size() << " pomekon(s)." << endl;
}
