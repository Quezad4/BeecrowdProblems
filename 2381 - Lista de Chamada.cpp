#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N, K;
	string X;
	vector<string>nomes;
	cin >> N >> K;
	for(int i = 0; i<N; i++){
		cin >> X;
		nomes.push_back(X);
	}
	sort(nomes.begin(), nomes.end());
	cout << nomes[K-1] << endl;
}
