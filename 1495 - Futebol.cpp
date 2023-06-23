#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int> > v;
vector<int> v2;
int main(){
	int N, G, S, R, soma = 0;
	while(cin >> N >> G){
		for(int i = 0; i<N; i++){
			cin >> S >> R;
			v.push_back(make_pair(S,R));
		}
		for(int j = 0; j<v.size(); j++){
			if(v[j].first> v[j].second){
				soma+= 3;
			}
			else if(v[j].first == v[j].second){
				v2.push_back((v[j].second - v[j].first));
			}
			else if(v[j].first < v[j].second){
				v2.push_back((v[j].second - v[j].first));
			}
		}
		sort(v2.begin(),v2.end());
		for(int j = 0; j<v2.size(); j++){
			while(v2[j] != -1 && G != 0){
				G--;
				v2[j]--;
			}
			if(G>=0 && v2[j] == -1){
				soma += 3;
			}
			if(G == 0 && v2[j] == 0){
				soma+= 1;
			}
		}
		cout << soma << endl;
		soma = 0;
		v2.clear();
		v.clear();
	}
}
