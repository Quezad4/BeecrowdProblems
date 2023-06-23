#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double a;
	double b;
	double c;
	double raiz1;
	double raiz2;
	double delta;
	double deltaraiz;
	cin >> a >> b >> c;
	delta = b*b - 4*a*c;
	deltaraiz = sqrt(b*b - 4*a*c);
	raiz1 = (-b + deltaraiz)/(2*a);
	raiz2 = (-b - deltaraiz)/(2*a);
	if(delta < 0 or a == 0){
		cout << "Impossivel calcular" << endl;
	}
	else{
		cout << fixed;
		cout.precision(5);		
		cout << "R1 = " << raiz1 << endl;
		cout << "R2 = " << raiz2 << endl;
	}

	
	
}
