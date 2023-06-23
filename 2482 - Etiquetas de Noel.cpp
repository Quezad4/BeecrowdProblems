#include <iostream>
#include <map>
using namespace std;
int main(){
	int N, M;
	string idioma, escrita,nome, idioma2;
	map<string,string>noel;
	cin >> N;
	for(int i = 0; i< N; i++){
		cin >> idioma;
		cin.ignore();
		getline(cin,escrita);
		noel.insert(make_pair(idioma,escrita));
	}
	cin >> M;
	for(int i = 0; i<M; i++){
		cin.ignore();
		getline(cin,nome);
		cin >> idioma2;
		cout << nome << endl;
		cout << noel[idioma2] << endl;
		cout << endl;
	}
}
