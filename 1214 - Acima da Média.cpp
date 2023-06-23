#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N, C; 
	int nota;
	float media = 0, count = 0;
	cin >> C;
	for(int i = 0; i<C; i++){
		cin >> N;
		vector<int>v;
		for(int j = 0; j<N; j++){
			cin >> nota;
			media += nota;
			v.push_back(nota);
		}
		media = media/N;
		for(int i = 0; i<v.size(); i++){
			if( v[i] > media){
				count++;
			}
		}
		cout <<fixed;
		cout.precision(3);
		cout << ((count/N)*100)<< "%" << endl;
		count = 0;
		media = 0;
	}
}
