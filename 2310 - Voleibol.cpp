#include <iostream>
using namespace std;
int main(){
	float total[3];
	float acertos[3];
	string nome;
	int N, acerto, tot;
	cin >> N ;
	for(int X = 0; X<3; X++){
		acertos[X] = 0;
		total[X] = 0;
	}
	for(int X =0; X<N; X++){
		cin >> nome;
		for(int X = 0; X<3; X++){
			cin >> tot;
			total[X] += tot; 
		}
		for(int X = 0; X<3; X++){
			cin >> acerto;
			acertos[X] += acerto; 
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << "Pontos de Saque: " << (acertos[0]/total[0])*100 << " %." << endl;
	cout << "Pontos de Bloqueio: " << (acertos[1]/total[1])*100 << " %." << endl;
	cout << "Pontos de Ataque: " << (acertos[2]/total[2])*100 << " %." << endl;
}
