#include <iostream>
using namespace std;
int main(){
	double pi;
	pi = 3.14159;
	double A;
	double B;
	double C;
	double D;
	cin >> A >> B >> C;
	D = A+B;
	cout << fixed;
	cout.precision(3);
	cout << "TRIANGULO: " << A*C/2 << endl;
	cout << "CIRCULO: " << pi*C*C << endl;
	cout << "TRAPEZIO: " << D*C/2 << endl;
	cout << "QUADRADO: " << B*B << endl;
	cout << "RETANGULO: " << A*B << endl;
}

