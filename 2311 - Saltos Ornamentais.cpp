#include <iostream>
using namespace std;
int main(){
	float nota, notamaior, notamenor, N, notatotal, GD;
	string nome;
	cin >> N;
	nota = 0;
	notatotal = 0;
	notamaior = 0;
	notamenor = 10;
	for(int X =0; X<N; X++){
		cin >> nome >> GD;
		for(int Y = 0; Y<7; Y++){
			cin >> nota;
			notatotal += nota;
			if(notamaior<nota){
				notamaior = nota;
			}
			
			if(notamenor>nota){
				notamenor = nota;
			}
		}
		cout << fixed;
		cout.precision(2);
		cout << nome << " " << (notatotal-notamaior-notamenor)*GD << endl;
		nota = 0;
		notatotal = 0;
		notamaior = 0;
		notamenor = 10;
	}
}
