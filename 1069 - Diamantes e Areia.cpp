#include<iostream>
#include <vector>
using namespace std;
int main(){
	int N, count = 0, dimas = 0, a;
	string A;
	cin >> N;
	for(int i = 0; i<N; i++){
		count = 0;
		dimas = 0;
		vector<char>dima;
		vector<char>::iterator it;
		cin >> A;
		for(int i = 0; i<A.size(); i++){
			dima.push_back(A[i]);
		}
		for(it = dima.begin(); it != dima.end(); it++){
			if(*it == '.'){
				dima.erase(it);
				it--;
			}
		}
		for(int i = 0; i<dima.size(); i ++){
			if(dima[i] == '<'){
				count ++;
				a = i;
			}
			if(dima[i] == '>' and count >= 1){
				dimas ++;
				count = 0;
				dima.erase(dima.begin() + a);
				dima.erase(dima.begin() + a);
				i = -1;
			}
		}
		cout << dimas << endl;
	}
}
