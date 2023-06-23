#include <iostream>
using namespace std;
int main(){
	int tempo;
	int velm;
	double litros;
	cin >> tempo >> velm;
	litros = velm*tempo;
	cout << fixed;
	cout.precision(3);
	cout << litros/12 << endl; 
}
