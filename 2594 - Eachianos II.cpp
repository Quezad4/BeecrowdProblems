#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<string>p;
	vector<int>pos;
	int N, posicao = 0;
	int count = 0;
	string a, palavra;
	string conca = "";
	cin >> N;
	
	for(int l = 0; l<N; l++){
		cin.ignore();
		getline(cin, a);
		cin >> palavra;
		for(int i = 0; i<a.size(); i++){
			if(a[i] != ' '){
				conca += a[i];
			}
			else{
				p.push_back(conca);
				conca = "";
			}
			if(i == a.size() - 1){
				p.push_back(conca);
				conca = "";
			}
		}
		for(int i = 0; i<p.size(); i++){
			posicao += p[i].size();
			if( palavra == p[i]){
				pos.push_back((posicao + i) - p[i].size());
				count ++;
			}
		}
		if(count == 0){
			cout << "-1" << endl;
		}
		else{
			if(count > 1){
				for(int d = 0; d<count; d++){
					if(d == count -1){
						cout << pos[d] << endl;
					}
					else{
						cout << pos[d] << " ";
					}
					
					
				}
			}
			else{
				cout << pos[0] << endl;
			}
		}
		pos.clear();
		p.clear();
		count = 0;
		posicao = 0;
	}
}
