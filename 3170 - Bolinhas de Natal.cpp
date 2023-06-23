#include <iostream>
using namespace std;
int main (){
	int B, G, aux, nbola;
	cin >> B >> G;
	aux = G/2;
	nbola = aux - B;
	if(nbola == 0 or nbola<0){
		cout << "Amelia tem todas bolinhas!" << endl;
	}
	else{
		cout << "Faltam " << nbola << " bolinha(s)" <<endl; 
	}
}
