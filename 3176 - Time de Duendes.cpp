#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
	vector<pair<int,string> >v;
	int N; cin >> N;
	string nome;
	int idade;
	for(int i = 0; i<N; i++){
		cin >> nome >> idade;
		v.push_back(make_pair(idade,nome));
	}
	sort(v.begin() ,v.end() );
	reverse(v.begin(), v.end());
	for(int i = 0; i<N-1; i++){
		if(v[i].first == v[i+1].first and v[i].second > v[i+1].second){
			swap(v[i].second,v[i+1].second);
			i = -1;
		}
		
	}
	for(int i = 0; i<N/3; i++){
		cout << "Time " << i+1 << endl;
		cout << v[i].second << " " << v[i].first << endl;
		cout << v[i+(N/3)].second << " " << v[i+(N/3)].first << endl;
		cout << v[i+(N/3)*2].second << " " << v[i+(N/3)*2].first << endl;
		cout << endl;
	}
}
