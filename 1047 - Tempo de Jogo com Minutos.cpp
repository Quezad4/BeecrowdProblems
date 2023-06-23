#include <iostream>
using namespace std;
int main(){
	int h1, h2, m1, m2, hora, minuto;
	cin >> h1 >> m1 >> h2 >> m2;
	minuto = 0;
	if(h2>h1){
		hora = (h2-h1);
	}
	else{
		if(h1>h2){
			hora = 24 - (h1-h2);
		}
	}
	if(h1 == h2 and m1>m2){
		minuto = 60 - (m1-m2);
		hora = 23;
	}
	else{
		if(m1>m2){
			hora = hora -1;
			minuto = 60 - (m1-m2);
		}
		else{
			if(m2>=m1){
				minuto = m2-m1;
			}
		}
	}
	if(h1 == h2 and m1 == m2){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
	}
	else{
		cout << "O JOGO DUROU " << hora << " HORA(S) E " << minuto << " MINUTO(S)" << endl;
	}
}
