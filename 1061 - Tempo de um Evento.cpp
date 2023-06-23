#include <iostream>
using namespace std;
int main(){
	string diaS, dp;
	int dia1, dia2, h1, h2, m1, m2, s1, s2, segundo, minuto, hora, dia;
	cin >> diaS >> dia1 >> h1 >> dp >> m1 >> dp >> s1 >> diaS >> dia2 >> h2 >> dp >> m2 >> dp >> s2;
	dia = dia2 - dia1;
	hora = h2 - h1;
	minuto = m2 - m1;
	segundo = s2- s1;
	if(segundo<0){
		minuto = minuto -1;
		segundo = segundo +60;
	}
	if(minuto<0){
		hora = hora -1;
		minuto = minuto + 60;
	}
	if(hora<0){
		dia = dia - 1;
		hora = hora +24;
	}
	cout << dia << " dia(s)" << endl;
	cout << hora << " hora(s)" << endl;
	cout << minuto << " minuto(s)" << endl;
	cout << segundo << " segundo(s)" << endl;
}
