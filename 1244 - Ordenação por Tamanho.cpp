#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void insertionSort( vector<pair<int, string> > &v , int tamanho ){
	int aux, i ,j;
	string auxs;
	for(i= 1; i<tamanho; i++){
		aux = v[i].first;
		auxs = v[i].second;
		for( j = i-1; j>=0 and aux<= v[j].first; j--){
			v[j+1].first = v[j].first;
			v[j+1].second = v[j].second;
		}
		v[j+1].first = aux;
		v[j+1].second = auxs;
	}
}





int main(){
	vector<pair<int,string> >v;
	int N; cin >> N;
	string a, conca = "";
	cin.ignore();
	for(int k = 0; k<N; k++){
		getline(cin, a);
		for(int i = 0; i<a.size(); i++){
			if(a[i] != ' '){
				conca += a[i];
			}
			else{
				v.push_back(make_pair(conca.size(),conca));
				conca = "";
			}
			if(i == a.size()-1){
				v.push_back(make_pair(conca.size(),conca));
				conca = "";
			}
		}
		insertionSort(v, v.size());
		reverse(v.begin(), v.end());
		for(int i = 0; i<v.size(); i++){
			if(i == v.size() - 1){
				cout << v[i].second << endl;
			}
			else{
				cout << v[i].second << " ";
			}
		}
		v.clear();
		conca = "";
	}
}
