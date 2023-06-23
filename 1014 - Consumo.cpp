#include <iostream>
using namespace std;
int main(){
	double distancia;
	double combustivel;
	cin >> distancia >> combustivel;
	cout << fixed;
	cout.precision(3);
	cout << distancia/combustivel << " km/l" << endl;
	
}
