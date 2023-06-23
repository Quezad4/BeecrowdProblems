#include<iostream>
#include<iostream>
#include <map>
using namespace std;
int main(){
	int count = 0, countcerto = 0;
	double conta = 0;
	map<string,double>notas;
	notas.insert(make_pair("W",1));
	notas.insert(make_pair("H",0.5));
	notas.insert(make_pair("Q",0.25));
	notas.insert(make_pair("E",0.125));
	notas.insert(make_pair("S",0.0625));
	notas.insert(make_pair("T",0.03125));
	notas.insert(make_pair("X",0.015625));
	string N;
	cin >> N;
	while(N != "*"){
		for(int i = 0; i<N.size(); i++){
			if(N[i] == '/'){
				count ++;
			}
			if(count == 2 and conta == 1){
				countcerto ++;
			}
			if(count == 2 ){
				count = 1;
				conta = 0;
			}
			if(N[i] == 'W'){
				conta += notas["W"];
			}
			if(N[i] == 'H'){
				conta += notas["H"];
			}
			if(N[i] == 'Q'){
				conta += notas["Q"];
			}
			if(N[i] == 'E'){
				conta += notas["E"];
			}
			if(N[i] == 'S'){
				conta += notas["S"];
			}
			if(N[i] == 'T'){
				conta += notas["T"];
			}
			if(N[i] == 'X'){
				conta += notas["X"];
			}
		}
		cout << countcerto << endl;
		countcerto = 0;
		cin >> N;
	}
	
}
