#include <iostream>
using namespace std;int main(){
	int tempo;
	int horas;
	int minutos;
	int segundos;
	cin >> tempo;
	horas = tempo/3600;
	minutos = (tempo - horas*3600)/60;
	segundos = tempo - (horas*3600+minutos*60);
	cout << horas << ":" << minutos << ":" << segundos << endl;
}
